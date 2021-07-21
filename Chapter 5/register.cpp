#include <iostream>
using namespace std;

int main (void) {
  register int i;
  for (i = 0; i < 10000; i++) {
    cout << i << ' ';
  }
  return 0;
}
//register keyword: Allows the variable to be stored in the CPU, which makes calculations faster.
