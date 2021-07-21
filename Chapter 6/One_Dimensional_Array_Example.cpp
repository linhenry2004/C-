#include <iostream>
using namespace std;
int S(int, int);
int main(void) {
    int f[5], x, ans = 0;
    for (int i = 0; i < 5; i++) {
        cout << "請輸入方程式中" << i << "次項的係數: ";
        cin >> f[i];
    }
    cout << "請輸入欲計算的便數值: ";
    cin >> x;
    for (int i = 0; i < 5; i++) {
        ans = ans + S(x, i) * f[i];
    }
    cout << "f(" << x << ") = "<< ans << endl;
    return 0;
}
int S(int x, int n) {
    int temp = x;
    if (n==0) return 1;
    for (int i = 1; i < n; i++) {
        x = x * temp;
    }
    return x;
} 