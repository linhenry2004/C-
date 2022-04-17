#include <iostream>
#include <vector>
using namespace std;

int n, m;
bool vis[1001][1001];
char map[1001][1001];

bool isValid (int x, int y) {
    if (x < 1 || x > n || y < 1 || y > m) {
        return false;
    }

    if (map[x][y] == '#' || vis[x][y] == true) {
        return false;
    }

    return true;
}

void dfs (int x, int y) {
    vis[x][y] = true;

    if (isValid(x, y - 1)) {
        dfs(x, y - 1);
    }

    if (isValid(x, y + 1)) {
        dfs(x, y + 1);
    }

    if (isValid(x - 1, y)) {
        dfs(x - 1, y);
    }

    if (isValid(x + 1, y)) {
        dfs(x + 1, y);
    }
}

int main () {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> map[i][j];
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (map[i][j] == '.' && vis[i][j] == false) {
                dfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}