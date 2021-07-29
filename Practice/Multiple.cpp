#include <iostream>
using namespace std;
int M (int, int);
int main () {
  int x, y, num;
  cout<<"請輸入相乘的兩數：";
  cin>>x>>y;
  cout<<x<<"*"<<y<<"="<<M(x, y);

  return 0;
}
int M (int x, int y) {
  return x * y;
}
