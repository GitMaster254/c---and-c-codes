#include <stdio.h>
int main()
{
	 int frs=1;
	 int scn=3;
	 printf("%d and %d is the order\n",frs,scn);
	 if(scn>frs)
	 { int t=frs;
	 	frs=scn;
	 	scn=t;
	 	}
	 	printf("%d and %d is its inverse",frs,scn);
	}
