#include <iostream>
using namespace std;
int A (int, int);
int S (int, int);
int M (int, int);
int D (int, int);

int main () {
  int x, y;
  char choice;
  cout<<"請輸入計算式：";
  cin>>x>>choice>>y;

  if (choice=='+') cout<<x<<"+"<<y<<"="<<A(x, y);
  else if (choice=='-') cout<<x<<"-"<<y<<"="<<S(x, y);
  else if (choice=='*') cout<<x<<"*"<<y<<"="<<M(x, y);
  else if (choice=='/') cout<<x<<"/"<<y<<"="<<D(x, y);
  else cout<<"WTF??";
}

int A (int x, int y) {
  return x + y;
}

int S (int x, int y) {
  return x - y;
}

int M (int x, int y) {
  return x * y;
}

int D (int x, int y) {
  return (float) x / y;
}
