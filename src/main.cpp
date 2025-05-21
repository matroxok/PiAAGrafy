#include "graphs/adjacency_list_graph.hpp"
#include "graphs/adjacency_matrix_graph.hpp"
#include <fstream>
#include <iostream>
#include <memory>
#include <limits>

using namespace std;

void printMenu() {
    cout << "\nMENU:\n";
    cout << "1. Wyswietl graf\n";
    cout << "2. Dodaj krawedz\n";
    cout << "3. Usun krawedz\n";
    cout << "4. Wygeneruj losowy graf\n";
    cout << "0. Wyjscie\n";
    cout << "Wybor: ";
}

int main() {
    cout << "Wybierz reprezentacje grafu:\n";
    cout << "1. Lista sasiedztwa\n";
    cout << "2. Macierz sasiedztwa\n";
    cout << "Twoj wybor: ";

    int choice;
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // czysci bufor

    unique_ptr<Graph> graph;

    string filename;
    cout << "Podaj nazwe pliku z grafem: ";
    getline(cin, filename);
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Nie mozna otworzyc pliku: " << filename << endl;
        return 1;
    }

    if (choice == 1) {
        graph = AdjacencyListGraph::createGraph(file);
    } else if (choice == 2) {
        graph = AdjacencyMatrixGraph::createGraph(file);
    } else {
        cerr << "Niepoprawny wybor reprezentacji." << endl;
        return 1;
    }

    int option;
    do {
        printMenu();
        cin >> option;

        switch (option) {
            case 1:
                graph->display();
                break;
            case 2: {
                int src, dest, weight;
                cout << "Podaj wierzcholek poczatkowy, koncowy i wage: ";
                cin >> src >> dest >> weight;
                graph->addEdge(src, dest, weight);
                break;
            }
            case 3: {
                int src, dest;
                cout << "Podaj wierzcholek poczatkowy i koncowy: ";
                cin >> src >> dest;
                graph->removeEdge(src, dest);
                break;
            }
            case 4: {
                int V;
                double density;
                cout << "Podaj liczbe wierzcholkow: ";
                cin >> V;
                cout << "Podaj gestosc grafu (np. 0.25, 0.5, 0.75, 1.0): ";
                cin >> density;
                if (auto* listGraph = dynamic_cast<AdjacencyListGraph*>(graph.get())) {
                    listGraph->generateRandomGraph(V, density);
                } else if (auto* matrixGraph = dynamic_cast<AdjacencyMatrixGraph*>(graph.get())) {
                    matrixGraph->generateRandomGraph(V, density);
                } else {
                    cout << "Reprezentacja grafu nieobslugiwana.\n";
                }
                break;
            }
            case 0:
                cout << "Zakonczono.\n";
                break;
            default:
                cout << "Niepoprawny wybor.\n";
        }
    } while (option != 0);

    return 0;
}
