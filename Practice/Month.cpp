#include <iostream>
using namespace std;

int main(){
  string month;
  cout<<"Please insert today's month: ";
  cin>>month;
  if(month == "December" || "January" || "Febuary") {
    cout<<month<<" is in Winter."<<endl;
  }
  else if(month == "March" || "April" || "May") {
    cout<<month<<" is in Spring."<<endl;
  }
  else if(month == "June" || "July" || "August") {
    cout<<month<<" is in Summer."<<endl;
  }
  else if(month == "September" || "October" || "November") {
    cout<<month<<" is in Autumn."<<endl;
  }
  else {
    cout<<"I don't know what you're saying"<<endl;
  }

  return 0;
}
