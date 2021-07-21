#include <iostream>
using namespace std;
int SQRT(int);
int main() {
  int n;
  cout<<"Input n: ";
  cin>>n;
  cout<<"The square root of "<<n<<" is "<<SQRT(n);
  return 0;
}
int SQRT(int n) {
  int i;
  if (n<1) return -1;
  for(i = 1; i < n; i++)
    if(i*i>n) break;
  if((i*i-n) < (n - (i-1)*(i-1)))
    return i;
  else
    return i-1;
}
