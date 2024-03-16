#include <stdio.h>
int main(){
	int raw=6;
	while(raw>=0)
	{
		int cols=0;
		while(cols<=raw)
		{
		printf(" * ");
		cols++;	
		}
		raw--;
		printf("\n");
	}
}
