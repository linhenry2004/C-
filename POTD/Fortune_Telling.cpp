// https://codeforces.com/contest/1634/problem/B

#include <iostream>
using namespace std;

int main()
{
    int numCases, a;
    unsigned long sum, ans;
    cin >> numCases;
    string respond[numCases];
    for (int i = 0; i < numCases; i++)
    {
        cin >> a >> sum >> ans;
        unsigned long x;
        for (int j = 0; j < a; j++)
        {
            cin >> x;
            sum += x;
        }
        bool same = (ans % 2 == sum % 2);
        if (same)
        {
            respond[i] = "Alice";
        }
        else
        {
            respond[i] = "Bob";
        }
    }
    for (int i = 0; i < numCases; i++)
    {
        cout << respond[i] << endl;
    }
    return 0;
}