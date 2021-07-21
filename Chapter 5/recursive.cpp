#include <iostream>
using namespace std;
int factorial (int);
int main (void) {
  int n;
  cout << "Input n: ";
  cin >> n;
  cout << factorial(n) << endl;
}
int factorial (int n) {
  if (n == 1) {
    return 1;
  }
  return n * factorial(n-1);
}
