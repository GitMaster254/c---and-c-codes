#include <stdio.h>
#include <math.h>
int main(){
	int i=0;
	float pie=0.0;
	while(i<2)
	{
		pie+=pow(-1,i+1)/2*i-1;
		i+=i;
	}
	printf("%4f\n",pie);
	}
