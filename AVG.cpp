#include <iostream>
using namespace std;
int average(int*a,int size){
int sum;
int i=0;
while(i<size){
sum+=a[i];
i++;
		}
int avg=sum/size;
return avg;
	}
int main(){
int data[2]={5,15};
cout<<"average of the array="<<average(data,2);
	}
