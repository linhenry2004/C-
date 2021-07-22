#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
  ifstream myfile("txt_IO.txt");

  if(!myfile.is_open()) {
    cout << "Failed" << endl;
    return 1;
  }

  long begin, end;
  char ch;
  begin = myfile.tellg();
  myfile.seekg (0, ios::end);
  end = myfile.tellg();
  cout << "File size: " << end-begin << " bytes" << endl;
  cout << "File content: " << endl;
  myfile.seekg(0, ios::beg);
  while(!myfile.eof()) {
    myfile.get(ch);
    if(!myfile.eof())
      cout << ch;
  }
  myfile.close();
  return 0;
}
