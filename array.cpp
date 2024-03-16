#include <iostream>
using namespace std;
int main(){
int Marks[2];
	Marks[0]=67;
	Marks[1]=93;
	Marks[2]=56;
	int sum;
	int x;
	while(x<3){
	sum+=Marks[x];
	x++;
	}
	cout<<"Total="<<sum<<endl;
	cout<<"Marks 1="<<Marks[0]<<endl;
	}