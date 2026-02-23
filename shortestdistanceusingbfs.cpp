#include<bits/stdc++.h>
using namespace std;
vector<int> shortestdistance(){
    queue<int> q;
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;
    vector<vector<int>> adjList(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    vector<bool> explored(n, false);
    vector<int> status(n, -1);
    int source;
    cout << "Enter source node: ";
    cin >> source;
    q.push(source);
    explored[source] = true;
    status[source] = 0;

    while (!q.empty()) {
        int currentNode = q.front();
        q.pop();
        for (int neighbor : adjList[currentNode]) {
            if (!explored[neighbor]) {
                explored[neighbor] = true;
                status[neighbor] =status[currentNode] + 1;
                q.push(neighbor);
            }
        }
    }

    return status;
}

int main(){
    vector<int> distances = shortestdistance();
    for (int i = 0; i < distances.size(); i++) {
        cout << "Distance from source to node " << i << ": " << distances[i] << endl;
    }        
    return 0;
}