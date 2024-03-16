#include<iostream>
using namespace std;
int main(){
	int yr;
	cout<<"Enter year:"<<endl;
	cin>>yr;
	int i;
cout<<"January "<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=i%7;
	int date=1-i;
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(date<=0)
 	cout<<"\t"; 
 		
	else if(date>31)
	break;

	else cout<<date<<"\t";
	date=date+1;
}
cout<<endl;
}
cout<<"February "<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=(i+31)%7;
	int Date=1-i;
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(Date<=0)
 	cout<<"\t"; 
 		
	else if(Date>28)
	break;

	else cout<<Date<<"\t";
	Date=Date+1;
}
cout<<endl;
}
cout<<"March "<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=(i+59)%7;
	int dAte=1-i;
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(dAte<=0)
 	cout<<"\t"; 
 		
	else if(dAte>31)
	break;

	else cout<<dAte<<"\t";
	dAte=dAte+1;
}
cout<<endl;
}
cout<<"April "<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=(i+90)%7;
	int daTe=1-i;
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(daTe<=0)
 	cout<<"\t"; 
 		
	else if(daTe>30)
	break;

	else cout<<daTe<<"\t";
	daTe=daTe+1;
}
cout<<endl;
}
cout<<"May "<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=(i+120)%7;
	int datE=1-i;
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(datE<=0)
 	cout<<"\t"; 
 		
	else if(datE>31)
	break;

	else cout<<datE<<"\t";
	datE=datE+1;
}
cout<<endl;
}
cout<<"June "<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=(i+151)%7;
	int dat=1-i;
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(dat<=0)
 	cout<<"\t"; 
 		
	else if(dat>30)
	break;

	else cout<<dat<<"\t";
	dat=dat+1;
}
cout<<endl;
}
cout<<"July "<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=(i+181)%7;
	int dte=1-i;
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(dte<=0)
 	cout<<"\t"; 
 		
	else if(dte>31)
	break;

	else cout<<dte<<"\t";
	dte=dte+1;
}
cout<<endl;
}
cout<<"August "<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=(i+212)%7;
	int A=1-i;
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(A<=0)
 	cout<<"\t"; 
 		
	else if(A>30)
	break;

	else cout<<A<<"\t";
	A=A+1;
}
cout<<endl;
}
cout<<"September "<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=(i+242)%7;
	int B=1-i;
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(B<=0)
 	cout<<"\t"; 
 		
	else if(B>31)
	break;

	else cout<<B<<"\t";
	B=B+1;
}
cout<<endl;
}
cout<<"October "<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=(i+273)%7;
	int C=1-i;
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(C<=0)
 	cout<<"\t"; 
 		
	else if(C>31)
	break;

	else cout<<C<<"\t";
	C=C+1;
}
cout<<endl;
}
cout<<"November "<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=(i+304)%7;
	int D=1-i;
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(D<=0)
 	cout<<"\t"; 
 		
	else if(D>30)
	break;

	else cout<<D<<"\t";
	D=D+1;
}
cout<<endl;
}
cout<<"December"<<yr<<endl;
cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	i=((yr-1)%4)*5;
	i+=((yr-1)%100)*4;
	i+=((yr-1)%400)*6;
	i=(i+334)%7;
	int E=1-i;
for(int w=0;w<6;w++)
{  
	for(int d=0;d<7;d++)
 {
 	if(E<=0)
 	cout<<"\t"; 
 		
	else if(E>31)
	break;

	else cout<<E<<"\t";
	E=E+1;
}
cout<<endl;
}

}
