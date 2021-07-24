#include <iostream>
using namespace std;

class TV {
    public: 
        int channel;
        int volumeLevel;
        bool on;

        TV() {
            on = true;
        }

        void turnOn() {
            on = true;
        }

        void turnOff() {
            on = false;
        }

        void setChannel(int newChannel) {
            if (on && newChannel >= 1 && newChannel <= 120) {
                channel = newChannel;
            }
        }

        void setVolume(int newVolumelevel) {
            if (on && newVolumelevel >= 1 && newVolumelevel <= 7) {
                volumeLevel = newVolumelevel;
            }
        }

        void channelUp() {
            if (on && channel < 120) {
                channel++;
            }
        }

        void channelDown() {
            if (on && channel > 1) {
                channel--;
            }
        }

        void volumeUp() {
            if (on && volumeLevel < 7) {
                volumeLevel++;
            }
        }

        void volumeDown() {
            if (on && volumeLevel > 1) {
                volumeLevel--;
            }
        }
};

int main() {
    TV tv1;
    tv1.turnOn();
    tv1.setChannel(30);
    tv1.setVolume(3);

    TV tv2;
    tv2.turnOn();
    tv2.channelUp();
    tv2.channelUp();
    tv2.volumeUp();

    cout << tv1.channel << endl << tv1.volumeLevel << endl;
    cout << tv2.channel << endl << tv2.volumeLevel << endl;
}