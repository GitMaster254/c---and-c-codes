#include <stdio.h>
int main()
{
	int a=15;
	int b=10;
	int max;
	max=a;
	if(b>a)
	max=b;
	int lcm;
	int c;
	for(c=max;max>=max;c++)
	{
		if(c%a==0 && c%b==0){
		lcm=c;
		break;
		}
	}
	printf("lcm of %d and %d is %d",a,b,c);
	}
	
