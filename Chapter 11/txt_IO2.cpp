#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream my_write_file("txt_IO.txt");

  if(!my_write_file.is_open()) {
    cout << "Failed" << endl;
    return 1;
  }

  my_write_file << "This is the first line" << endl;
  my_write_file << "This is the second line" << endl;

  ifstream my_read_file("txt_IO.txt");

  if(!my_read_file.is_open()) {
    cout << "Failed" << endl;
    return 1;
  }

  string input_string;
  while(!my_read_file.eof()) {
    input_string = "";
    my_read_file >> input_string;
    if(!my_read_file.eof()) {
      cout << input_string << endl;
    }
  }
  return 0;
}
