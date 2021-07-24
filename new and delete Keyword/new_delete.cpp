#include <iostream>
using namespace std;

/*
int main() {
    int *p;
    *p = 200;
    cout << "*p = " << *p << endl;
    
    return 0;
}
*/
//This returns an error because we did not give an adress to p, so we can't store 200 into it. 

/*
int main() {
    int *p = (int *) malloc(sizeof(int));
    *p = 200;
    cout << "*p = " << *p << endl;
    free(p);

    return 0;
}
*/
//This is the C language way to correct the error. However C++ provides the new keyword for this

int main() {
    int *p = new int;
    *p = 200;
    cout << "*p = " << *p << endl;
    delete p;

    return 0;
}