#include <iostream>
using namespace std;

class StringTest {
    private: 
        char *str;
        int len;
        static int strings_count;
    public: 
        StringTest(const char *s);
        StringTest(const StringTest & st);
        StringTest();
        ~StringTest();

        friend ostream & operator << (ostream & os, const StringTest & st);
};

int StringTest::strings_count = 0;

StringTest::StringTest(const char *s) {
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    strings_count++;
    cout << "Operating..." << endl;
    cout << "#" << strings_count << ": \"" << str << "\" object created \n";
}

StringTest::StringTest() {
    len = 4;
    str = new char[30];
    strcpy(str, "Baseball");
    strings_count++;
    cout << "Operating defaul..." << endl;
    cout << "#" << strings_count << ": \"" << str << "\" default object created \n";
}

StringTest::StringTest(const StringTest & st) {
    len = st.len;
    str = new char[len + 1];
    strings_count++;
    strcpy(str, st.str);
    cout << "Operating copied..." << endl;
    cout << "#" << strings_count << ": \"" << str << "\" object created \n";
}

StringTest::~StringTest() {
    cout << "Operating function..." << endl;
    cout << "\"" << str << "\" object deleted, ";
    --strings_count;
    cout << strings_count << " left\n";
    delete [] str;
}

ostream & operator << (ostream & os, const StringTest & st) {
    os << st.str;
    return os;
}

int main() {
    StringTest str1("Tabletennis");
    cout << "str1: " << str1 << endl << endl;
    StringTest str2;
    cout << "str2: " << str2 << endl << endl;
    cout << "Initialize one object to another:\n";

    StringTest bright = str1;
    cout << "bright: " << bright << endl << endl;
    cout << "End of main()\n\n";
    return 0;
}