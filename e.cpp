#include <iostream>
using namespace std;
int main(){
	int fact=1;
	double e=1.0;
	for(int i=1;i<10;i++){
		fact*=i;
		e+=1.0/fact;
	cout<<"e="<<e<<endl;
		}
}
