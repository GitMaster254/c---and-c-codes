#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double a=9.0;
	double approx=a/2.0;
	double error=a-pow(approx,2);
while(error<0 && error>-11.26){
	double better=0.5*(approx + a/approx);
	approx=better;
	error=a-(approx*approx);
	
	}
cout<<"sqrt of "<<a<<"="<<approx<<endl;
cout<<"error ="<<error;
	return 0;
}
	
