#include <iostream>
using namespace std;
int CtoF (double);
int FtoC (double);

int main(void){
  int i, temp;
  cout<<"Please insert 1 for Celsius to Fahrenheit or 2 for Fahrenheit to celsius:";
  cin>>i;
  if(i == 1){
    cout<<"Please insert the temperature in celsius: ";
    cin>>temp;
    CtoF(temp);
  }
  else if(i==2){
    cout<<"Please insert the temperature in Fahrenheit: ";
    cin>>temp;
    FtoC(temp);
  }
  else
    cout<<"Please insert either 1 or 2.";
    return 0;
}

int CtoF(double temp){
  double outcome;
  outcome = temp * 9 / 5 + 32;
  cout<<temp<<" Degrees celsius is equal to "<<outcome<<" Degrees Fahrenheit.";
}

int FtoC(double temp){
  double outcome;
  outcome = temp - 32 * 5 / 9;
  cout<<temp<<" Degrees Fahrenheit is equal to "<<outcome<<" Degrees Celsius.";
}
