/*
new keyword: 
pointer = new type
pointer = new type[amount]

delete keyword: 
delete pointer
delete [] pointer
*/
#include <iostream>
using namespace std;
int f(int n, int[]);
int main(void) {
    int i, n, *cache;
    cin >> n;
    cache = new int[n];
    for(i = 0; i < n; i++) {
        cache[i] = 0;
    }
    cout << "f(" << n << ") = " <<f(n-1, cache) << "\n";
    delete [] cache;
    return 0;
}
int f(int n, int cache[]) {
    if(cache[n] == 0) {
        if(n == 0||n == 2) {
            return 1;
        } else {
            cache[n] = f(n-1, cache) + f(n-2, cache);
        }
    }
    return cache[n];
}