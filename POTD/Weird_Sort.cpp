#include <queue>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<long long> pq;
    for (int i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        pq.push(temp);
    }
    while (!pq.empty())
    {
        long long now = pq.top();
        pq.pop();
        cout << now << " ";
    }
}