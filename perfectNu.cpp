#include <iostream>

using namespace std;

int main(){
	
	int p=28;
	
for(;p<=10000;p++){
	
	int s=0;
	
 for(int f=1;f<=p/2;f++){
 	
	if (p % f==0)
	
	 s+=f;
	
	}
	if(s==p)
	
	cout<<s<<endl;
}
}
