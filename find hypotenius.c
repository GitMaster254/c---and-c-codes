#include <stdio.h>
#include<math.h>
int main(){
	int x1,x2;
	int y1,y2;
	x1=10;
	x2=5;
	y1=12;
	y2=6;
	double d=pow((x1,x2),2);
	d+=pow((y1-y2),2);
	d=sqrt(d);
	printf("%lf is the Hypotenius",d);
	}
	
