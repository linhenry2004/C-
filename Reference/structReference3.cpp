#include <iostream>
using namespace std;
struct says {
    char word[20];
    int times;
};

says & calls (says &);
int main () {
    says x = {"Hello world", 0};
    x = calls(x);
    cout << "It's #" << x.times << " called" << endl << endl;

    x = calls(x);
    cout << "It's #" << x.times << " called" << endl << endl;

    getchar();
    return 0;
}

says & calls(says &ref) {
    says *p = new says;
    *p = ref;
    cout << p->word << endl;
    p -> times++;
    return *p;
}