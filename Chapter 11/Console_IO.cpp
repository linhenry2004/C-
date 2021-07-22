#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << 40 << endl
         << oct << 40 << endl
         << hex << 40 << endl
         << dec << 40 << endl;
    return 0;
}
/*
Keywords: 
dec, oct, hex
setbase(int n): n進位
setw(n): 欄位寬度為n
setfill(char c): 不到填充寬度時以c字元填充
*/