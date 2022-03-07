#include <iostream>
#include <list>
using namespace std;

void sort(long long arr[], int size)
{
    for (int j = 1; j < size; j++)
    {
        long long temp = arr[j];
        int index = j;
        while (index > 0 && temp < arr[index - 1])
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    long long array[n];
    list<long long> result;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, n);
    for (int i = 0; i < n; i++)
    {
        if (result.back() != array[i])
        {
            result.push_back(array[i]);
        }
    }
    cout << result.size() << endl;
    return 0;
}