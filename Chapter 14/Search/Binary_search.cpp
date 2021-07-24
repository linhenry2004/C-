#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
#define SWAP(x, y, t) (t = x, x = y, y = t)
void sort(int [], int);
int binsearch(int [], int, int, int);
int main(void) {
    int i, a[30], key, result;
    cout << "Insert the value you want to find: ";
    cin >> key;
    srand(time(NULL));
    for (i = 0; i < 30; i++) { a[i] = rand() % 10; }
    sort (a, 30);
    result = binsearch(a, 0, 29, key);
    if(result == -1) {
        cout << "Not found!";
    } else {
        cout << "Found in index " << result << endl;
    }
    return 0;
}
void sort(int a[], int n) {
    int i, j, temp, min;
    for(i = 0; i < n-1; i++) {
        min = i; 
        for(j = i+1; j < n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        SWAP(a[i], a[min], temp);
    }
}
int binsearch(int a[], int left, int right, int key) {
    int middle = (left + right) / 2;
    if (left > right) { return -1; }
    if(key == a[middle]) { return middle; }
    else if(key > a[middle]) { return binsearch(a, middle+1, right, key); }
    else { return binsearch(a, left, middle, key); }
}