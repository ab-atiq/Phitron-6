#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000; // Maximum number of nodes
int parent[MAXN + 1], sz[MAXN + 1];

// Find with path compression
int find(int u) {
    if (parent[u] == u) return u;
    return parent[u] = find(parent[u]); 
}

// Union by size (using sz instead of size)
bool unite(int u, int v) {
    int rootU = find(u);
    int rootV = find(v);
    if (rootU == rootV) return false; // Cycle detected

    // Attach the smaller tree to the larger tree
    if (sz[rootU] > sz[rootV]) {
        parent[rootV] = rootU;
        sz[rootU] += sz[rootV];
    } else {
        parent[rootU] = rootV;
        sz[rootV] += sz[rootU];
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e;
    cin >> n >> e;

    // Initialize DSU
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }

    int cycleEdges = 0;

    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        if (!unite(a, b)) {
            cycleEdges++; // Edge that forms a cycle
        }
    }

    cout << cycleEdges << '\n';
    return 0;
}
