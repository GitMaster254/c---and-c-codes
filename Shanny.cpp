#include <iostream>
using namespace std;
class date{ 
	private: 
	int year;
	int firstJanIndex;
	public:
	void setYear(int yr){
		year=yr;
		 }
	int getYear(){
		return year;
		 }		
	void setFirstJanIndex(int Index ){
Index=((getYear()-1)%4)*5;
Index+=((getYear()-1)%100)*4;
Index+=((getYear()-1)%400)*6;
Index= Index % 7;
		}
	 int getFisrtJanIndex(){
    	return firstJanIndex;
    	}
    void display(){
 cout<<"index="<<firstJanIndex<<endl;
 cout<<"Year entered ="<<getYear();
    	 }
    };
int main(){
date d;
d.setYear(2023);
d.display();
	}
