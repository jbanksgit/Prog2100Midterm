#include <iostream>

using namespace std;

int checkSign(int inpu) {
    if (inpu == 0) {
        return 0;
    } else if (inpu < 0) {
        return -1;
    } else if (inpu > 0) {
        return 1;
    }
    return 0;
}

void computeTimeDifference(int h, int m, int s, int eh, int em, int es) {
    //--------------------------------------------------------//
    int newSeconds = s - es;
    /*int carrySeconds = 0;
    if(checkSign(newSeconds) == -1){
        carrySeconds = 1;
        newSeconds = newSeconds + 60;
    }*/
    //--------------------------------------------------------//
    int newMinutes = m - em;
    /*newMinutes -= (carrySeconds * 60);
    int carryMinutes = 0;
    if(checkSign(newMinutes) == -1){
        carryMinutes = 1;
        newMinutes =  newMinutes + 60;
    }*/
    //--------------------------------------------------------//
    int newHours = h - eh;
    /*newHours -= carryMinutes;
    int carryHours = 0;
    if(checkSign(newHours) == -1){
        carryHours = 1;
        newHours = newHours + 24;
    }*/
    //--------------------------------------------------------//
    cout << "Time difference: " << newHours << ":" << newMinutes << ":" << newSeconds << "\n";
}


int main() {
    // Part 1: Find largest number out of an array
    cout << "Enter a cool value: " << "\n";
    int yeet;
    cin >> yeet;
    cout << "\n" << "You entered: " << yeet << "\n";
    int *foo = new int[yeet];

    for (int i = 0; i < yeet; ++i) {
        cout << "Enter a value for the array: " << "\n";
        int yoot;
        cin >> yoot;
        foo[i] = yoot;
    }
    cout << "Your incredibly exciting array: " << "\n";
    for (int i = 0; i < yeet; ++i) {
        cout << "[" << i << "] " << (foo[i]) << "\n";
    }

    int largest = 0;
    for (int i = 0; i < yeet; ++i) {
        if (foo[i] > foo[largest]) {
            largest = i;
        }
    }

    cout << "The largest element in your array was index [" << largest << "] with a value of: " << foo[largest] << "."
         << "\n";

    // Part 2: Calculate Time Difference

    int hours;
    int minutes;
    int seconds;
    int endHours;
    int endMinutes;
    int endSeconds;

    cout << "Please, enter a time in hours, minutes, and seconds respectively." << "\n";
    cin >> hours;
    cin >> minutes;
    cin >> seconds;

    cout << "Please, enter an  END time in hours, minutes, and seconds respectively." << "\n";
    cin >> endHours;
    cin >> endMinutes;
    cin >> endSeconds;

    cout << "Your start time: " << hours << ":" << minutes << ":" << seconds << "\n";
    cout << "Your end time: " << endHours << ":" << endMinutes << ":" << endSeconds << "\n";

    computeTimeDifference(hours, minutes, seconds, endHours, endMinutes, endSeconds);

    return 0;
}
