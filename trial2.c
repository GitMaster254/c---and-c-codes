#include <stdio.h>
int main (){
	printf("Enter year:");
	int yr;
	scanf("%d",&yr);
	int p;
	for(p=0;p<=12;p++)
	{
	int A=yr-1;
	int i=((yr-1)%4)*5;
		i+=((yr-1)%100)*4;
		i+=((yr-1)%400)*6;
		i=i%7;
if(i==0)
printf("\nFirst January %d falls on Monday",yr);
else if(i==1)
printf("\nFirst January %d falls on Tuesdy ",yr);
else if(i==2)
printf("\nFirst January %d falls on Wednesday",yr);
else if(i==3)
printf("\nFirst January %d falls on Thursday",yr);
else if(i==4)						
printf("\nFirst January %d falls on Friday",yr);		
else if(i==5)		
printf("\nFirst January %d falls on Saturday",yr);		
else
printf("\nFirst January %d falls on Sunday",yr);	
yr--;
}
}
