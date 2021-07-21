#include <iostream>
using namespace std;
int f(void);

int main (void) {
  int i;
  for (i = 1; i < 5; i++) {
    cout << "x = " << f( ) << endl;
  }
}
int f (void) {
  static int x = 0;
  return x++;
}
//static keyword: allows the variable to be called only once. See results for more info.
