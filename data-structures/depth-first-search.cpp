#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// Function to perform DFS traversal
void DFS(vector<vector<int>> &graph, int start)
{
    int numNodes = graph.size();
    vector<bool> visited(numNodes, false);
    stack<int> stk;

    stk.push(start);
    visited[start] = true;

    while (!stk.empty())
    {
        int current = stk.top();
        stk.pop();
        cout << current << " ";

        for (int neighbor : graph[current])
        {
            if (!visited[neighbor])
            {
                stk.push(neighbor);
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

    // Perform DFS traversal starting from node 0
    cout << "DFS Traversal starting from node 0: ";
    DFS(graph, 0);
    cout << endl;

    return 0;
}
