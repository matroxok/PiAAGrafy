#ifndef ADJACENCY_LIST_GRAPH_HPP_
#define ADJACENCY_LIST_GRAPH_HPP_

#include <memory>
#include <vector>
#include <list>
#include <utility>
#include "graphs/graph.hpp"

class AdjacencyListGraph : public Graph
{
  public:
    AdjacencyListGraph(int numVertices = 0);
    
    void addEdge(int src, int dest, int weight) override;
    void removeEdge(int src, int dest) override;
    void display() const override;

    static std::unique_ptr<Graph> createGraph(std::istream& is);

    void generateRandomGraph(int V, double density);
    

  private:
    int numVertices;
    std::vector<std::list<std::pair<int, int>>> adjList;
};

#endif /* ADJACENCY_LIST_GRAPH_HPP_ */