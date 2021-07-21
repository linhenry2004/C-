#include <iostream>
using namespace std;

int main(){
  double C,F;
  cout<<"Please insert the temperature in Degrees Celsius: ";
  cin>>C;
  F = C * 9 / 5 + 32;
  cout<<C<<" Degrees Celsius is equal to "<<F<<" Degrees Fahrenheit.";

  return 0;
}
