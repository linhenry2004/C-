#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(void) {
    char s1[] = "Hello ";
    char s2[10];
    cout << "What's your name?";
    gets(s2);
    strncat(s1, s2, 5);
    cout << s1 << endl;

    cout << "\n";

    char s [ ] = "string is fun!";
    char key; 
    cout << "The string is 'String is fun!'. Which Character?";
    cin >> key; 
    if (strchr(s, key)) {
        cout << "Found " << key << " in string! The character is here ->" << strchr(s, key) << "\n";
    } else {
        cout << "Can't find " << key << " in string \n";
    }

    cout << "\n";

    char s3[] = "string is fun!";
    char s4[] = "string is";
    if(!strcmp(s3, s4)) {
        cout << "s1 and s2 are same (by strcmp)\n";
    }
    if(!strncmp(s3, s4, 5)){
        cout << "s1 and s2 are same (by strncmp)\n";
    }

    cout << "\n";

    char s5[] = "string is fun!";
    char s6[] = "string";
    strcpy(s5, s6);
    cout << s5 << endl;

    cout << "\n";

    int len;
    char s7[] = "string is fun!";
    len = strlen(s);
    cout << "string s is " << len << " characters long \n";
    return 0;
}

/*
<cstring> or <string.h> methods: 
char *strcat(char *str1, const char *str2)
char *strncat(char *str1, const char *str2, len) 
 - len is the number of characters taken from str2

char *strchr(const char *str, int ch)
char *strrchr(const char *str, int ch)

strcmp(const char *str1, const char *str2)
strncmp(const char *str1, const char *str2, len)

strcpy(char *to, const char *from)
strncpy(char *to, const char *from, len)

strlen(const char *str)
*/