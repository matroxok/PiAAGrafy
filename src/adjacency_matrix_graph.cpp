#include "graphs/adjacency_matrix_graph.hpp"
#include <iostream>
#include <random>
#include <set>

AdjacencyMatrixGraph::AdjacencyMatrixGraph(int numVertices)
    : numVertices(numVertices), adjMatrix(numVertices, std::vector<int>(numVertices, -1)) {}

void AdjacencyMatrixGraph::addEdge(int src, int dest, int weight) {
    if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
        adjMatrix[src][dest] = weight;
    }
}

void AdjacencyMatrixGraph::removeEdge(int src, int dest) {
    if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
        adjMatrix[src][dest] = -1;
    }
}

void AdjacencyMatrixGraph::display() const {
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            if (adjMatrix[i][j] != -1) {
                std::cout << i << " " << j << " " << adjMatrix[i][j] << std::endl;
            }
        }
    }
}

std::unique_ptr<Graph> AdjacencyMatrixGraph::createGraph(std::istream& is) {
    int vertices, edges;
    is >> vertices >> edges;

    auto graph = std::make_unique<AdjacencyMatrixGraph>(vertices);

    for (int i = 0; i < edges; ++i) {
        int src, dest, weight;
        is >> src >> dest >> weight;
        graph->addEdge(src, dest, weight);
    }

    int startVertex;
    is >> startVertex;
    (void)startVertex;

    return graph;
}

void AdjacencyMatrixGraph::generateRandomGraph(int V, double density) {
    numVertices = V;
    adjMatrix.clear();
    adjMatrix.resize(V, std::vector<int>(V, -1));

    int maxEdges = V * (V - 1) / 2;
    int edgeCount = static_cast<int>(density * maxEdges);

    std::set<std::pair<int, int>> edges;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist_vertex(0, V - 1);
    std::uniform_int_distribution<> dist_weight(1, 100);

    while (edges.size() < edgeCount) {
        int u = dist_vertex(gen);
        int v = dist_vertex(gen);
        if (u != v && edges.insert({std::min(u, v), std::max(u, v)}).second) {
            addEdge(u, v, dist_weight(gen));
            addEdge(v, u, dist_weight(gen));
        }
    }
}