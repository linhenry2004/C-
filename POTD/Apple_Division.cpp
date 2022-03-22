#include <iostream>
#include <algorithm>
using namespace std;

long long totalSum = 0;

long long findMin (long long arr[], int n, long long currSum) {
    if (n == 0) {
        return abs((totalSum - currSum) - currSum);
    }

    return min(findMin(arr, n - 1, currSum + arr[n - 1]), findMin(arr, n - 1, currSum));
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        totalSum += arr[i];
    }
    cout << findMin(arr, n, 0) << endl;
    return 0;
}