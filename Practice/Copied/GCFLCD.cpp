#include <iostream>
using namespace std;

int main() {
  int a, b, i, M=0, m=0;
  cout<<"Please insert two whole numbers: ";
  cin>>a>>b;
  for(i=1; i<a && i<b; i++) {
    if(!(a%i) && !(b%i))
      M = i;
  }
  cout<<a<<" and "<<b<<" has a GCF of "<<M<<endl;
  if(a<b) i=a;
  else i=b;
  while(1) {
    if(!(i%a) && !(i%b)) {
      m=i;
      break;
    }
  i++;
  }
  cout<<a<<" and "<<b<<" has a LCD of "<<m<<endl;
  return 0;
}
