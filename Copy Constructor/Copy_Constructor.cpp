#include <iostream>
using namespace std;

class StringTest {
    private: 
        char *str;
        int len;
        static int strings_count;
    public: 
        StringTest(const char *s);
        ~StringTest();

        friend ostream & operator << (ostream & os, const StringTest & st);
};

int StringTest::strings_count = 0;

StringTest::StringTest(const char *s) {
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    strings_count++;
    cout << "#" << strings_count << ": \"" << str << "\" object created \n";
}

StringTest::~StringTest() {
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

    cout << "str1: " << str1 << endl;
    cout << "***********************" << endl;

    cout << "Initialize one object to another:\n";
    StringTest str2 = str1;
    cout << "str2: " << str2 << endl;

    cout << "End of main()\n";
    cout << "***********************" << endl;
    return 0;
}