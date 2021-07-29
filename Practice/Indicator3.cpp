#include <iostream>
using namespace std;
void swap(void*, void*, int);
int main(void){
  int a = 5, b = 3;
  double c = 6.6, d = 2.2;
  swap(&a, &b, sizeoff(int));
  swap(&c, *d, sizeoff(double));
  cout<<"a = "<<a<<" b = "<<b<<endl;
  cout<<"c = "<<c<<" d = "<<d<<endl;
  return 0;
}

void swap(void* a, void* b, int size){
  int i;
  char *p = (char *)a;
  char *q = (char *)b;
  char tmp;
  for (i = 0;i<size;i++, p++, q++){
    tmp = *p;
    *p = *q;
    *q = tmp;
  }
}
