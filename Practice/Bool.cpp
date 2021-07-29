#include <iostream>
using namespace std;

int main(){
  int number;
  bool check = false;

  cout<<"Please inesert a number: ";
  cin>>number;
  check = (number>=100 && number<=999);
  cout<<check<<endl;

  return 0;
}
