/*
Ofstream: 進行輸出寫入檔案的類別
ifstream: 進行從檔案讀取輸入的類別
fstream: 可以進行讀與寫的類別

open(filename, mode)
modes:
ios::in - Read
ios::out - Write
ios::ate - Read from the end
ios::app - Append
ios::trunc - If fikle exists, delete the content
ios::binary - Open in binary mode

close() method: Closes the file

is_open() method:
  bad(): If it failed to open, return true
  eof(): If read to the end, return true
  good(): If bad() or eof() returned true, return false

get(char)
put(char)
*/

#include <iostream>
#include <fstream>
using namespace std;
int main() {
  char ch;
  ifstream fin;
  fin.open("/Users/henrylin/C-Plus-Plus/Chapter 11/txt_IO.txt");

  if(!fin.is_open()) {
    cout << "Failed" << endl;
    return 1;
  }

  while (!fin.eof()) {
    fin.get(ch);
    cout << ch;
  }

  fin.close();
  return 0;
}
