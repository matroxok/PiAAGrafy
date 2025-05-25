#ifndef GRAPH_HPP_
#define GRAPH_HPP_

#include <iostream>

// Abstrakcyjna klasa bazowa reprezentująca interfejs grafu.
// _reprezentacje grafu: ista sąsiedztwa, macierz sąsiedztwa
// _dzięki temu możliwe jest korzystanie z grafów w sposób uogólniony,
// _niezależnie od ich wewnętrznej struktury.

class Graph
{
  public:
    virtual ~Graph() = default;

    virtual void addEdge(int src, int dest, int weight) = 0;
    virtual void removeEdge(int src, int dest) = 0;
    virtual void display() const = 0;

    virtual int getVertexCount() const = 0;
    virtual int getEdgeCount() const = 0;
    virtual void writeToFile(std::ostream& os) const = 0;
};

#endif /* GRAPH_HPP_ */
