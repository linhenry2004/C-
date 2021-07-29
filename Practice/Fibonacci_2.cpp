#include <iostream>
using namespace std;
int f(int);
int main(void) {
  int n;
  cout<<"Input n: ";
  cin>>n;
  cout<<"f("<<n<<") = "<<f(n);
  return 0;
}
int f(int n){
  int i, sum, pre, fi;
  pre = 0;
  fi = 1;
  for (i = 1; i < n; i++) {
    sum = pre + fi;
    pre = fi;
    fi = sum;
  }
  return fi;
}
