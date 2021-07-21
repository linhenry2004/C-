#include <iostream>
using namespace std;

int main(){
  int English, History, Science, Math;
  float average;
  cout<<"Please insert your English, History, Science, and Math grades: ";
  cin>>English>>History>>Science>>Math;
  average = (float) (English+History+Science+Math)/4;
  cout<<"Your average score is: "<<average<<endl;

  return 0;
}
