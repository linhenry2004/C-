#include <iostream>
using namespace std;
enum Seasons
{
    Spring,
    Summer,
    Fall,
    Winter
};

int main()
{
    Seasons season;
    season = Summer;
    switch (season)
    {
    case Spring:
        cout << "It might be warm outside!" << endl;
        break;
    case Summer:
        cout << "It might be hot outside!" << endl;
        break;
    case Fall:
        cout << "It might be cool outside!" << endl;
        break;
    case Winter:
        cout << "It might be cold outside!" << endl;
        break;
    }
    return 0;
}