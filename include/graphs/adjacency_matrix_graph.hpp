#ifndef ADJACENCY_MATRIX_GRAPH_HPP_
#define ADJACENCY_MATRIX_GRAPH_HPP_

#include <memory>
#include <vector>
#include <iostream>
#include <set>
#include "graphs/graph.hpp"

// Reprezentacja grafu w postaci macierzy sąsiedztwa.
// _dodawanie i usuwanie krawędzi, wyświetlanie grafu,
// _generowanie grafów losowych oraz wczytywanie ich z pliku.
// _dziedziczy po klasie bazowej Graph.

class AdjacencyMatrixGraph : public Graph
{
  public:
    AdjacencyMatrixGraph(int numVertices = 0);

    void addEdge(int src, int dest, int weight) override;
    void removeEdge(int src, int dest) override;
    void display() const override;

    static std::unique_ptr<Graph> createGraph(std::istream& is);

    void generateRandomGraph(int V, double density);

    int getVertexCount() const override;
    int getEdgeCount() const override;
    void writeToFile(std::ostream& os) const override;

  private:
    int numVertices;
    std::vector<std::vector<int>> adjMatrix;
};

#endif /* ADJACENCY_MATRIX_GRAPH_HPP_ */
