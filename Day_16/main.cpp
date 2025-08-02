#include <iostream>
using namespace std;

class Graph {
private:
    int** adjMatrix;
    int vertexCount;

public:
    // Constructor
    Graph(int v) : vertexCount(v) {
        adjMatrix = new int*[vertexCount];
        for (int i = 0; i < vertexCount; i++) {
            adjMatrix[i] = new int[vertexCount];
            for (int j = 0; j < vertexCount; j++) {
                adjMatrix[i][j] = 0;
            }
        }
    }

    // Destructor
    ~Graph() {
        for (int i = 0; i < vertexCount; i++) {
            delete[] adjMatrix[i];
        }
        delete[] adjMatrix;
    }

    // Add edge between two vertices
    void addEdge(int u, int v) {
        if (u >= 0 && u < vertexCount && v >= 0 && v < vertexCount) {
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1; // For undirected graph
        }
    }

    // Print the adjacency matrix
    void print() {
        for (int i = 0; i < vertexCount; i++) {
            for (int j = 0; j < vertexCount; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(4); // Create graph with 4 vertices
    
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    
    cout << "Adjacency Matrix:" << endl;
    g.print();
    
    return 0;
}