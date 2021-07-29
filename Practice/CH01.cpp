#include <iostream>
#define rate 0.0168
using namespace std;

int main(){
  int myAccount;
  cout<<"Please insert your sum: ";
  cin>>myAccount;
  cout<<"After including the interest: "<<myAccount + myAccount*rate<<endl;

  return 0;
}
