#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int parent[N];
int sz[N];

void make(int v) {
    parent[v] = v;
    sz[v] = 1;
}

int find(int v) {
    if(v == parent[v]) return v;
    // Path compression
    return parent[v] = find(parent[v]);
}

void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if(a != b) {
        // Union by sz
        if(sz[a] < sz[b]) {
            swap(a, b);
        }
        parent[b] = a;
        sz[a] += sz[b];  // Update sz of the new parent
    }
}

int main() {
    int n, m;
    cin >> n >> m;  // Input number of nodes and edges
    
    vector<pair<int, pair<int,int>>> edges;
    for(int i = 0; i < m; ++i) {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({wt, {u, v}});
    }
    sort(edges.begin(), edges.end());  // Sort edges by weight

    for(int i = 1; i <= n; ++i) make(i);  // Initialize DSU

    int total_cost = 0;
    for(auto &edge : edges) {
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if(find(u) == find(v)) continue;  // Skip if in same component
        Union(u, v);
        total_cost += wt;
        cout << u << " " << v << endl;  // Print edges in MST
    }
    cout << total_cost << endl;  // Print total weight of MST
    
    return 0;
}