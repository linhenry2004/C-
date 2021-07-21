#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

struct CARD {
    int flower;
    int num;
};

//typedef - Rename struct
//typedef struct CARD card;

int main (void) {
    string f1[] = {"Spades", "Hearts", "Diamonds", "Clubbs"};
    int choice;
    CARD player, banker;
    srand(time(NULL));
    cout << "1) Big or 2) Small";
    cin >> choice;
    do {
        player.flower = rand() % 4;
        player.num = rand() % 13;
        banker.flower = rand() % 4;
        banker.num = rand() % 13;
        if(player.num == 12)
            cout << "Your card is " << f1[player.flower]<<" A" << endl;
        else
            cout << "Your card is " << f1[player.flower]<<" " << player.num+2 << endl;
        if(banker.num == 12) 
            cout << "The computer got " << f1[banker.flower] << " A" << endl;
        else
            cout << "The computer got " << f1[banker.flower] << " " << banker.num+2 << endl;
        if(choice == 1) {
            if((player.num*10+player.flower) > (banker.num*10+banker.flower))
                cout << "You won!" << endl;
            else
                cout << "You lost!" << endl;
        } else {
            if((player.num*10+player.flower) < (banker.num*10+banker.flower))
                cout << "You won!" << endl;
            else
                cout << "You lost!" << endl;
        }
        cout << "Play again? 1) Big 2) Small 0) Quit";
        cin >> choice;
    } while(choice != 0);
    return 0;
}