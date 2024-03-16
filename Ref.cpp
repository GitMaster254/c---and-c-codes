#include <iostream>
using namespace std;
int multi(int *p){
	*p=*p*3;
	return *p;
	}
int main(){
	int a=10;
	cout<<multi(&a)<<endl;
	 cout<<&a;
	}
