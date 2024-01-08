#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Function to perform BFS traversal
void BFS(vector<vector<int>> &graph, int start)
{
    int numNodes = graph.size();
    vector<bool> visited(numNodes, false);

    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int current = q.front();
        cout << current << " ";
        q.pop();

        for (int neighbor : graph[current])
        {
            if (!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

// Example usage
int main()
{
    // Define a graph using adjacency lists
    int numNodes = 6;
    vector<vector<int>> graph(numNodes);

    // Add edges
    graph[0] = {1, 2};
    graph[1] = {0, 3, 4};
    graph[2] = {0, 4};
    graph[3] = {1, 5};
    graph[4] = {1, 2, 5};
    graph[5] = {3, 4};

    // Perform BFS traversal starting from node 0
    cout << "BFS Traversal starting from node 0: ";
    BFS(graph, 0);
    cout << endl;

    return 0;
}
