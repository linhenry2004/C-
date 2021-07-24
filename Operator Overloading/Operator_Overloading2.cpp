#include <iostream>
using namespace std;

class StringTest {
    private: 
        char *str;
        int len;
        static int strings_count;
    public: 
        StringTest(const char *s);
        StringTest & operator =(const StringTest & st);
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
    cout << "Operating default constructor... now" << endl;
    cout << "#" << strings_count << ": \"" << str << "\" default object created \n";
}

StringTest & StringTest::operator=(const StringTest & st) {
    if(this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    cout << "Executing assignment operator... now" << endl;
    return *this;
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

    cout << "Assign one object to another:\n";
    StringTest bright;
    bright = str1;
    cout << "bright: " << bright << endl << endl;
    cout << "End of main()" << endl << endl;

    return 0;
}