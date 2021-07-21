#include <iostream>
using namespace std;

int power(int, int);
int main (void) {
  int x, n;
  cout << "Please insert two numbers: ";
  cin >> x >> n;
  int result = power (x, n);
  cout << result << endl;
  return 0;
}
int power(int x, int n) {
  int k = x;
  for (int i = 0; i < n; i++) {
    x = x * k;
  }
  return x;
}