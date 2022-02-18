#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void showState(const fstream &);

int main()
{
    fstream inout;
    inout.open("temp.txt", ios::out);

    inout << "Dallas";
    cout << "Normal operation (no errors)" << endl;
    showState(inout);

    inout.close();

    inout.open("temp.txt", ios::in);

    string city;
    inout >> city;
    cout << "End of file (no errors)" << endl;
    showState(inout);

    inout.close();

    inout >> city;
    cout << "Bad operation (errors)" << endl;
    showState(inout);

    return 0;
}

void showState(const fstream &stream)
{
    cout << "Stream status: " << endl;
    cout << " eof(): " << stream.eof() << endl;
    cout << " fail(): " << stream.fail() << endl;
    cout << " bad(): " << stream.bad() << endl;
    cout << " good(): " << stream.good() << endl;
}

/*
ios::eofbit 當輸入物件到達尾端時，條件為真
ios::failbit 當運作失敗時，條件為真
ios::hardfail 當錯誤產生無法恢復時，條件為真
ios::badbit 當一無料的運作發生時，條件為真
ios::goodbit 當前面所提到的串太為元值皆無發生時，條件為真

eof() 當eofbit被設定時，則回傳true
fail() 當failbit或hardfail被設定時，則回傳true
bad() 當badbit被設定時，則回傳true
good() 當goodbit被設定時，則回傳true
clear() 清除所有位元值
*/