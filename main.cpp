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

struct timeLad{
    int hours;
    int minutes;
    int seconds;
    timeLad(int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }
};

void computeTimeDifference(timeLad t1, timeLad t2) {
    timeLad * newTime = new timeLad(
            t1.hours - t2.hours,
            t1.minutes - t2.minutes,
            t1.seconds - t2.seconds
            );
    cout << "Time difference: " << newTime->hours << ":" << newTime->minutes << ":" << newTime->seconds << "\n";
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
    timeLad * t1 = new timeLad(hours,minutes,seconds);
    timeLad * t2 = new timeLad(endHours,endMinutes,endSeconds);
    computeTimeDifference(*t1,*t2);

    return 0;
}
