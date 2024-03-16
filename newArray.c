#include <stdio.h>
int main()
{
double avr[5]={87.4,46.3,49.2,39.0,70.9};
double sum;
	for(int i=0;i<5;i++){
		sum+=avr[i];
		}
		printf("%lf",sum);
		return 1;
		}