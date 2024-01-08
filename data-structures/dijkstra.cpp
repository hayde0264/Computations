#include <iostream>
#include <limits>
#include <queue>
#include <vector>

using namespace std;

#define INF numeric_limits<int>::max()

// Graph edge representation
struct Edge
{
    int dest;
    int weight;
};

// Function to perform Dijkstra's algorithm
void dijkstra(vector<vector<Edge>> &graph, int source)
{
    int numNodes = graph.size();
    vector<int> dist(numNodes, INF);
    vector<bool> visited(numNodes, false);

    dist[source] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, source));

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        if (visited[u])
            continue;
        visited[u] = true;

        for (const Edge &e : graph[u])
        {
            int v = e.dest;
            int weight = e.weight;

            if (!visited[v] && dist[u] != INF && dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    // Print shortest distances from the source
    cout << "Shortest distances from node " << source << ":\n";
    for (int i = 0; i < numNodes; ++i)
    {
        cout << "Node " << i << ": ";
        if (dist[i] == INF)
        {
            cout << "INF\n";
        }
        else
        {
            cout << dist[i] << endl;
        }
    }
}

// Example usage
int main()
{
    int numNodes = 6;
    vector<vector<Edge>> graph(numNodes);

    // Add edges and weights to the graph (example graph)
    graph[0].push_back({1, 7});
    graph[0].push_back({2, 9});
    graph[0].push_back({5, 14});
    graph[1].push_back({0, 7});
    graph[1].push_back({2, 10});
    graph[1].push_back({3, 15});
    graph[2].push_back({0, 9});
    graph[2].push_back({1, 10});
    graph[2].push_back({3, 11});
    graph[2].push_back({5, 2});
    graph[3].push_back({1, 15});
    graph[3].push_back({2, 11});
    graph[3].push_back({4, 6});
    graph[4].push_back({3, 6});
    graph[4].push_back({5, 9});
    graph[5].push_back({0, 14});
    graph[5].push_back({2, 2});
    graph[5].push_back({4, 9});

    int sourceNode = 0; // Set the source node

    // Run Dijkstra's algorithm from the source node
    dijkstra(graph, sourceNode);

    return 0;
}
