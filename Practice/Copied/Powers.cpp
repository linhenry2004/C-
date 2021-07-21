#include <iostream>
using namespace std;
int power(int, int);

int main(void) {
  int x, n;
  cout<<"Please insert two whole numbers: ";
  cin>>x>>n;
  cout<<x<<" ^ "<<n<<" = "<< power(x, n);
  return 0;
  }
  int power(int x, int n) {
    int i, k;
    k = x;
    for(i = 1; i < n;i++)
      x = x*k;
    return x;
  }
