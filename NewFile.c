#include <stdio.h>
int main(){
	int n;
	int sum=0;
	int r;
	 n=33;
	for(;n!=0;n=n/10)
	{
		r=n%10;
		sum=sum+r;
		}
		printf("sum=%d",sum);
		return 0;
		}
	
