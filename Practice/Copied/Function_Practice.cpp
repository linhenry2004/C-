#include <iostream>
using namespace std;
int S (int);
int main () {
  int i,j,k, num;
  while(true){
    cout<<"請輸入一整數：";
    cin>>num;
    cout<<"1+2+3+...+"<<num<<"="<<S (num)<<endl;
  }
  return 0;
}

int S (int n){
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    sum+=i;
  }
  return sum;
}
