#include <iostream>
using namespace std;
class ECD{
    private :
    int day;
    int month;
    int year;
    int firstJanIndex ;
    int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string daysNames[7] = {"Mo","Tu","We","Th","Fr","Sa","Su"};
    string monthsNames[12] = {"January","February","March", "April","May", "June","July","August","September","October","Novermber","December"};
   
    public:
    //Calculate the day and complete date (d/m/yyyy) of calfing down given the date on which the cow is served:
    void calcCalfingDownDate(int servedDay, int servedMonth, int servedYear){

        //Calculate the index of the first day in January of given year
        int firstJanIndex = (5 * (servedYear - 1) % 4 + 4 * (servedYear - 1) % 100 + 6 * (servedYear - 1) % 400) % 7;
        
        //Calculate the number of days passed since the cow was served
        int daysPassed = 0;
        for (int i = 0; i < servedMonth - 1; i++){
            daysPassed += daysPerMonth[i];
        }
        daysPassed += servedDay;

        //Calculate the number of days until calfing down
        int daysUntilCalfingDown = 282 - daysPassed;

        //Calculate the day, month and year of calfing down
        int daysUntilNextMonth = daysPerMonth[servedMonth - 1] - servedDay;
        int calfingDownDay;
        int calfingDownMonth = servedMonth;
        int calfingDownYear = servedYear;

        if (daysUntilCalfingDown < daysUntilNextMonth){
            calfingDownDay = servedDay + daysUntilCalfingDown;
        } else {
            calfingDownDay = daysUntilCalfingDown - daysUntilNextMonth;
            calfingDownMonth = servedMonth + 1;

            //Check if the new month is January of the next year
            if (calfingDownMonth == 13){
                calfingDownMonth = 1;
                calfingDownYear = servedYear + 1;
            }
        }

        //Print the date of calfing down
        cout << calfingDownDay << "/" << calfingDownMonth << "/" << calfingDownYear << endl;

        //Print the last 3 months of the gestation period
        int monthToPrint = calfingDownMonth - 1;
        int yearToPrint = calfingDownYear;

        //Loop for printing the calendar of the last 3 months
        for (int i = 0; i < 3; i++){
            int daysInMonth;
            string monthName;

            //Check if the month is January
            if (monthToPrint == 0){
                monthToPrint = 12;
                yearToPrint--;
            }

            //Get the name and number of days in the month
            daysInMonth = daysPerMonth[monthToPrint - 1];
            monthName = monthsNames[monthToPrint - 1];

            //Print the month name
            cout << monthName << " " << yearToPrint << endl;

            //Print the day names
            for (int i = 0; i < 7; i++){
                cout << daysNames[i] << "\t";
            }
            cout << endl;

            //Print the calendar of the month
            for (int i = 0; i < firstJanIndex; i++){
                cout << "\t";
            }
            for (int i = 1; i <= daysInMonth; i++){
                if ((i + firstJanIndex) % 7 == 0){
                    cout << i << endl;
                } else {
                    cout << i << "\t";
                }
            }
            cout << endl;

            //Update month, year and firstJanIndex variables
            monthToPrint--;
            firstJanIndex = (firstJanIndex + daysInMonth) % 7;
        }
    }
};
