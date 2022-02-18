#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream inout;
    inout.open("city.txt", ios::out);
    inout << "Dallas"
          << " "
          << "Houston"
          << " "
          << "Atlanta"
          << " ";
    inout.close();

    inout.open("city.txt", ios::out | ios::app);
    inout << "Savannah"
          << " "
          << "Austin"
          << " "
          << "Chicago";
    inout.close();

    string city;
    inout.open("city.txt", ios::in);
    while (!inout.eof())
    {
        inout >> city;
        cout << city << " ";
    }

    inout.close();
    return 0;
}
/* 
ios::in 打開用於讀取的檔案
ios::out 打開用於寫入的檔案
ios::app 附加資料於檔尾
ios::ate 打開用於輸出的檔案
ios::trune 若檔案已存在則刪除其內容(此項對ios::out是預設值)
ios::binary 打開以用於二元輸入與輸出檔案
*/