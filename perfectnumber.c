#include <stdio.h>
int main(){
	int i;
	int number=16;
	int sum =0;
for(i=1;i<number;i++)
	{
	if(number%i==0)	
	sum++;
	}
	if(sum==number)
	printf("\n%d is perfect number",number);
	else
	printf("\n%d is not perfect number",number);
		
	return 0;
	}
