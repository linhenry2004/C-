//How to allow a function return a 2D array
//Arrays can be treated as a pointer, esecially when being returned in a function
#include <iostream>
using namespace std;
int** TimesTable ();
int main() {
    int **table = TimesTable();
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << table[j][i] << ' ';
        }
        cout << endl;
    }
}
int** TimesTable() {
    int** temp;
    temp = new int*[9];
    for (int i = 1; i < 10; i++) {
        temp[i-1] = new int[9];
        for (int j = 1; j < 10; j++) {
            temp[i-1][j-1] = i * j;
        }
    }
    return temp;
}