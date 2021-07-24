#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
#define SWAP(x, y, t) (t = x, x = y, y = t)
void sort(int [], int);

int main(void) {
    int i, a[30];
    srand(time(NULL));
    for(i = 0; i < 30; i++) { a[i] = rand() % 100; }
    for(i = 0; i < 30; i++) { cout << a[i] << " "; }
    cout << endl;
    sort(a, 30);
    for(i = 0; i < 30; i++) { cout << a[i] << " "; }
    cout << endl;
    
    return 0;
}

void sort(int a[], int n) {
    int temp, min;
    for (int i = 0; i < n-1; i++) {
        min = i;
        for (int j = i+1; j < n; j++) {
            if(a[j] < a[min])
                min = j;
        }
        SWAP(a[i], a[min], temp);
    }
}