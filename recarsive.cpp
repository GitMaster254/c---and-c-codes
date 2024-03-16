#include<iostream>
using namespace std;
int fact(int y)
{
	int f=1;
	for(;y>0;y--){
	 f=f*y;
	}
	return f;
}
int factorial(int x)
{
	if(x==1)
	return 1;
	else
	return x*factorial(x-1);
	}
int main(){
	cout<<"output="<<factorial(9)<<endl;
	cout<<"output2="<<fact(9);
	}
