#include <iostream>
using namespace std;
void sum(int, int);

int main() {
  int x,y,result;
  cout<<"Please insert two whole numbers: "<<endl;
  cin>>x>>y;
  if(x<y) sum(x,y);
  else sum(y,x);

  return 0;
}

void sum(int a, int b) {
  int s = 0;
  for(int i = a; i <= b; i++) {
    s+=i;
  }
  cout<<"The sum from "<<a<<" to "<<b<<" equals "<<s<<endl;
  return;
}
