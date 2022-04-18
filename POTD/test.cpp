#include <iostream>
#include <queue>
using namespace std;

int main () {
    int x, y;
    cin >> x >> y;
    queue<pair<int, int>> q;
    q.push(pair(x, y));
    cout << q.front().first << " " << q.front().second << endl;
    return 0; 
}