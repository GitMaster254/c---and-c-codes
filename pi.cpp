#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double pi=0.0;
	int n=1;
	while(n<20){
		pi+=pow(-1,n+1)*4.0/(2*n-1);
	    cout<<"pie="<<pi<<endl;
	    n++;
	    }
return 0;
}
		
