#include "graphs/adjacency_list_graph.hpp"
#include <iostream>
#include <random>
#include <set>

AdjacencyListGraph::AdjacencyListGraph(int numVertices)
    : numVertices(numVertices), adjList(numVertices) {}

void AdjacencyListGraph::addEdge(int src, int dest, int weight) {
    if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
        adjList[src].emplace_back(dest, weight);
    }
}

void AdjacencyListGraph::removeEdge(int src, int dest) {
    if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
        adjList[src].remove_if([dest](const auto& pair) { return pair.first == dest; });
    }
}

void AdjacencyListGraph::display() const {
    for (int i = 0; i < numVertices; ++i) {
        for (const auto& pair : adjList[i]) {
            std::cout << i << " " << pair.first << " " << pair.second << std::endl;
        }
    }
}

std::unique_ptr<Graph> AdjacencyListGraph::createGraph(std::istream& is) {
    int vertices, edges;
    is >> vertices >> edges;

    auto graph = std::make_unique<AdjacencyListGraph>(vertices);

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

void AdjacencyListGraph::generateRandomGraph(int V, double density) {
    numVertices = V;
    adjList.clear();
    adjList.resize(V);

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
