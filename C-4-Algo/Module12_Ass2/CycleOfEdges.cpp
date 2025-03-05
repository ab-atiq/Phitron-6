#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000; // Maximum number of nodes
int parent[MAXN + 1], size[MAXN + 1];

// Find with path compression
int find(int u) {
    if (parent[u] == u) return u;
    return parent[u] = find(parent[u]); 
}

// Union by size
bool unite(int u, int v) {
    int rootU = find(u);
    int rootV = find(v);
    if (rootU == rootV) return false; // Cycle detected

    // Attach the smaller tree to the larger tree
    if (size[rootU] > size[rootV]) {
        parent[rootV] = rootU;
        size[rootU] += size[rootV];
    } else {
        parent[rootU] = rootV;
        size[rootV] += size[rootU];
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
        size[i] = 1;
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
