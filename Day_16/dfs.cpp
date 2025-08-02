#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Graph {
private:
    int** adjMatrix;
    int vertexCount;

public:
    Graph(int v) : vertexCount(v) {
        adjMatrix = new int*[vertexCount];
        for (int i = 0; i < vertexCount; i++) {
            adjMatrix[i] = new int[vertexCount];
            for (int j = 0; j < vertexCount; j++) {
                adjMatrix[i][j] = 0;
            }
        }
    }

    ~Graph() {
        for (int i = 0; i < vertexCount; i++) {
            delete[] adjMatrix[i];
        }
        delete[] adjMatrix;
    }

    void addEdge(int u, int v) {
        if (u >= 0 && u < vertexCount && v >= 0 && v < vertexCount) {
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1; // Undirected graph
        }
    }

    void DFS(int startVertex) {
        vector<bool> visited(vertexCount, false);
        stack<int> stack;

        stack.push(startVertex);
        visited[startVertex] = true;

        cout << "DFS Traversal: ";
        
        while (!stack.empty()) {
            int current = stack.top();
            stack.pop();
            cout << current << " ";

            // Visit all adjacent vertices (in reverse order for correct traversal)
            for (int i = vertexCount - 1; i >= 0; i--) {
                if (adjMatrix[current][i] == 1 && !visited[i]) {
                    stack.push(i);
                    visited[i] = true;
                }
            }
        }
        cout << endl;
    }

    void print() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < vertexCount; i++) {
            for (int j = 0; j < vertexCount; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    
    g.print();
    g.DFS(0); // Start DFS from vertex 0
    
    return 0;
}