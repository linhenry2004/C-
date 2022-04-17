#include <iostream>
#include <vector>
#include <set>
using namespace std;

#define maxn 2e5 + 1

vector <set<int>> g(maxn);
vector <bool> vis(maxn);
vector <int> lead;

void dfs (int u) {
    vis[u] = true;
    for (auto v : g[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

int main () {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].insert(b);
        g[b].insert(a);
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            lead.push_back(i);
            dfs(i);
        }
    }
    cout << lead.size() - 1 << endl;
    for (int i = 0; i < lead.size() - 1; i++) {
        cout << lead[i] << " " << lead[i + 1] << endl;
    }
    return 0;
}