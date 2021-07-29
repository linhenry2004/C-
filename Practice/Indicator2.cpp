#include <iostream>
using namespace std;
void swap(int *, int *);
int main(void){
  int a=4, b=3;
  swap(&a, &b);
  cout<<"a = "<<a<<" b = "<<b<<endl;
  return 0;
}
void swap(int *x, int *y){
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
