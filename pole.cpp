#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
class ECD {
private:
    int day;
    int month;
    int year;
    int firstJanIndex;
    int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string daysNames[7] = { "Mo", "Tu", "We", "Th", "Fr", "Sa", "Su" };
    string monthsNames[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
public:
    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }
   const string* getDaysNames(){return daysNames;}
    int getFirstJanIndex() { return firstJanIndex; }
    const  string *getMonthsNames(){return monthsNames;}

    // Mutator methods
    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }
    int setFirstJan() {
int d =((5 *((year - 1) % 4))+(4 *((year - 1) % 100)) + (6 *((year- 1) % 400))) % 7;
        d=firstJanIndex;
        return firstJanIndex;
    }
    void isLeap() {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            daysPerMonth[1] = 29;
        }
        else {
            daysPerMonth[1] = 28;
        }
    }
    int serviceDay() {
    	isLeap();
    	int days;
    	for(int i=0;i<getMonth();i++){
    		days+=day-1;}
   return((days+getFirstJanIndex())%7);
    	   
    	 }
  int calfingDay() {
        int days = 282-60;
        int totalDays;
     for (int i = 0; i < getMonth() - 1; i++) {
         totalDays += daysPerMonth[i];
        }
        totalDays += day + days;
        return (((totalDays - 1) + firstJanIndex) % 7);
    }
    void calfing() {
        cout << "Served on " << daysNames[serviceDay()] << " " << day << "-" << monthsNames[month - 1] << "-" << year << endl;
     int cd = calfingDay();
int cd_day = day + 282;
     int cd_month = month;
        int cd_year = year;
while (cd_day > daysPerMonth[cd_month - 1]) {
 cd_day -= daysPerMonth[cd_month - 1];
            cd_month++;
            if (cd_month > 12) {
                cd_month = 1;
                cd_year++;
            }
        }
        cout << "Calfing on " << daysNames[cd] << " " << cd_day << "-" << monthsNames[cd_month - 1] << "-" << cd_year << endl;
    }
    };
int main(){
ECD ecd;
	ecd.setYear(2019);
	ecd.setMonth(6);
	ecd.setDay(1);
	ecd.setFirstJan();
	ecd.calfing();
	}
	
    
