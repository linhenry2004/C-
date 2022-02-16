#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream output;
    output.open("scores.txt");
    output << "John"
           << " "
           << "T"
           << " "
           << "Smith"
           << " " << 90 << endl;
    output << "Eric"
           << " "
           << "K"
           << " "
           << "Jones"
           << " " << 85 << endl;
    output.close();
    cout << "Done" << endl;
    return 0;
}