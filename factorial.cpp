#include<iostream>
using namespace std;
int factorial(int x){
	int f=1;
	for(;x>0;x--){
	f=f*x;
}
	return f;
}	
int main(){
	int t;
cout<<"Enter no. to find its factorial:"<<endl;
cin>>t;
cout<<"factorial of"<<t<<"="<<factorial(t);
return 0;
	}
