#include <iostream>
#include "extern2.cpp"

using namespace std;
extern void f(int);
int a;
int main(void){
  f(5);
  cout << a << endl;
  return 0;
}
//extern keyword: Tells them that this variable is called somewhere else already. 
