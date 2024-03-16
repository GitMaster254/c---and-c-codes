#include <stdio.h>
int main (){
	
		int yr=2022;
	int p;
		int A=yr-1;
		int a=5*(A%4);
		int b=4*(A%100);
		int c=6*(A%400);
		int sum=a+b+c;
		int i=sum%7;
	for(i=0;i<=6;i++){	
if(i==0)
printf("\nFirst January%d falls on Monday",yr);
else if(i==1)
printf("\nFirst January%d falls on Tuesdy ",yr);
else if(i==2)
printf("\nFirst January%d falls on Wednesday",yr);
else if(i==3)
printf("\nFirst January%d falls on Thursday",yr);
else if(i==4)						
printf("\nFirst January%d falls on Friday",yr);		
else if(i==5)		
printf("\nFirst January%d falls on Saturday",yr);		
else 
printf("\nFirst January%d falls on Sunday",yr);	
yr--;
}
}
