#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int search(int [], int, int);

int main(void) {
    int i, a[30], key, result;
    cout << "Which value do you want to find: ";
    cin >> key;
    srand(time(NULL));
    for(i = 0; i < 30; i++) { a[i] = rand() % 10; }
    result = search(a, 30, key);
    if(result == -1) {
        cout << "Not found!";
    } else {
        cout << "Found in index " << result << endl;
    }
    return 0;
}
int search(int a[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        return i;
    }
    return -1;
}