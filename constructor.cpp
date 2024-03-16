#include <iostream>
using namespace std;
class circle{
	private:
	int rad;
	public:
	circle(){}
	void setRad(int r){
		rad=r;
		}
	int getRad(){
		return rad;
		}
	float area(){ return 3.1415*getRad()*getRad();}
	void display(){
		cout<<"Area="<<area()<<"\cms"<<endl;
		}
		};
int main(){
	circle c;
	c.setRad(7);
	c.display();
	}
