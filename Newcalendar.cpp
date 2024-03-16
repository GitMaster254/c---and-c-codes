#include<iostream>
using namespace std;
int main(){
	int yr;
	cout<<"Enter year:"<<endl;
	cin>>yr;
	int i;
cout<<"February"<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=(i+31)%7;
	int date=1-i;
	cout<<"="<<i;
	/*
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(date<=0)
 	cout<<"\t"; 
 		
	else if(date>28)
	break;

	else cout<<date<<"\t";
	date=date+1;
}
cout<<endl;
}*/
}
