#include <iostream>
using namespace std;

int main() {
    int year = 2023;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month = 2;
    int numDays = days[month-1];
    int startingDay = 2; // Feb 1, 2023 is a Wednesday

    // Print calendar header
    cout << "   February " << year << endl;
    cout << "Su\tMo\tTu\tWe\tTh\tFr\tSa\n";

    // Print blank spaces for days before the 1st of February
  for (int i = 0; i < startingDay; i++) {
        cout << "   ";
    }

    // Print the dates of February
    for (int i = 1; i <= numDays; i++) {
        // Print the date with appropriate spacing
        if (i < 10) {
            cout << "\t";
        }
        cout << i << "\t";

        // Move to next line after Saturday
        if ((i + startingDay - 1) % 7 == 0) {
            cout << endl;
        }
    }

    // Add a new line at the end of the calendar
    cout << endl;

    return 0;
}
