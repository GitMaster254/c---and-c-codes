#include <iostream>
using namespace std;
class circle{ 
	private:
	int rad;
	public:
	void setRad(int r){
		rad=r;
		}	
	int getRad(){
		return rad;
		}
	double area(){ 
	return 3.1415*getRad()*getRad();
		}
	void display(){
cout<<"Area="<<area();
		}
	};
int main(){
circle c;
c.setRad(7);
c.display();
	}
