#include <iostream>
using namespace std;
int main (void) {
  const int x = 1;
  x++; //error found because const keyword makes sure it cannot be changed
}
