#ifndef ADJACENCY_LIST_GRAPH_HPP_
#define ADJACENCY_LIST_GRAPH_HPP_

#include <memory>
#include <vector>
#include <list>
#include <utility>
#include <iostream>
#include <set>
#include "graphs/graph.hpp"

// Reprezentacja grafu w postaci listy sąsiedztwa.
// _dodawanie/usuwanie krawędzi, generowanie losowego grafu,
// _wczytywanie grafu z pliku oraz jego wyświetlanie.
// _dziedziczy po klasie abstrakcyjnej Graph.

class AdjacencyListGraph : public Graph
{
  public:
    AdjacencyListGraph(int numVertices = 0);

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
    std::vector<std::list<std::pair<int, int>>> adjList;
};

#endif /* ADJACENCY_LIST_GRAPH_HPP_ */