#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class ECD {
private:
    int day;
    int month;
    int year;
    int firstJanIndex;
    int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string daysNames[7] = {"Mo", "Tu", "We", "Th", "Fr", "Sa", "Su"};
    string monthsNames[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

public:
    // Mutators and Accessors
    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }
    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

    // Method to calculate index of the day on which first of January falls
    int setFirstJan() {
        int a = (year - 1) % 4;
        int b = (year - 1) % 100;
        int c = (year - 1) % 400;
        int d = (5 * (year - 1) / 4 + 4 * b / 100 + 6 * c / 400) % 7;
        firstJanIndex = d;
        return d;
    }

    // Method to check if the year is a leap year and update the number of days in February
void isLeap() {
 if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
     daysPerMonth[1] = 29;
        } else {
      daysPerMonth[1] = 28;
        }
    }

    // Method to calculate index of the day the cow was served
    int serviceDay() {
        isLeap();
        int days = 0;
        for (int i = 0; i < month - 1; i++) {
            days += daysPerMonth[i];
        }
        days += day - 1;
        return (days + firstJanIndex) % 7;
    }

    // Method to calculate index of the day the cow is expected to calf down
    int calfingDay() {
        isLeap();
        int days = 0;
        for (int i = 0; i < 9; i++) {
            days += daysPerMonth[i];
        }
        days -= 60;
        return (days + firstJanIndex) % 7;
    }

    // Method to display the date of service and expected calfing down date
    void calfing() {
        isLeap();
        cout << "Served on " << daysNames[serviceDay()] << " " << setfill('0') << setw(2) << day << "-" << monthsNames[month - 1] << "-" << year << endl;
        int calfDay = (282 - 60 + serviceDay()) % 7;
        int calfDate = day + (282 - 60 - serviceDay()) + ((calfDay - calfingDay() + 7) % 7);
        int calfMonth = month;
        if (calfDate > daysPerMonth[calfMonth -


.
