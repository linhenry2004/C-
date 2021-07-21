/*
#if condition
    Algorithm;
#else 
    Algorithm;
#endif

#ifdef define
    Algorithm;
#endif

#ifndef define -> Opposie of ifdef
    Algorithm;
#endif

#if defined == #ifdef
#if !(defined) == #ifndef
*/

#include <iostream>
#define RICE
#undef NOODLE
using namespace std;
int main (void) {
    #ifdef RICE
        cout << "I like rice\n";
    #else
        cout << "I hate rice\n";
    #endif
    #ifndef RICE
        cout << "I like rice\n";
    #else
        cout << "I hate rice\n";
    #endif
    #ifdef NOODLE
        cout << "I like noodle\n";
    #else
        cout << "I hate noodle\n";
    #endif
    #ifndef NOODLE
        cout << "I like noodle\n";
    #else
        cout << "I hate noodle\n";
    #endif
    return 0;
}