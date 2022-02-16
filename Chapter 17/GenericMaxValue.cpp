#include <iostream>
#include <string>
using namespace std;

template <typename T> //With this, the function maxValue can find the maximum for integers, characters, and even strings.
T maxValue(T value1, T value2)
{
    if (value1 > value2)
    {
        return value1;
    }
    else
    {
        return value2;
    }
}

int main()
{
    cout << "Maximum between 1 and 3 is " << maxValue(1, 3) << endl;
    cout << "Maximum between 1.5 and 0.3 is " << maxValue(1.5, 0.3) << endl;
    cout << "Maximum between 'A' and 'N' is " << maxValue('A', 'N') << endl;
    cout << "Maximum between \"NBC\" and \"ABC\" is " << maxValue(string("NBC"), string("ABC")) << endl;

    return 0;
}