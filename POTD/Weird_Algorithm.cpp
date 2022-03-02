// https://cses.fi/problemset/task/1068

#include <iostream>
using namespace std;

int algo(int num)
{
    if (num == 1)
    {
        cout << num << endl;
        return 0;
    }
    else
    {
        cout << num << " -> ";
    }

    if (num % 2 == 0)
    {
        return algo(num / 2);
    }
    else
    {
        return algo(num * 3 + 1);
    }
}

int main()
{
    int n;
    cout << "Please insert a number: ";
    cin >> n;
    algo(n);
    return 0;
}