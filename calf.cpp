#include <iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter year of choise:"<<endl;
	cin>>year;
    int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   if(year%4 == 0 &&(year%100!= 0 || year%400==0)){
    daysPerMonth[1]=29;}
    else{
    daysPerMonth[1]=28; }
    cout<<daysPerMonth[1]<<endl;
    
    if(daysPerMonth[1]=29)
    {
    cout<<"then its a leap year\n";
    }else{
    cout<<"its not a leap year";
}
}
