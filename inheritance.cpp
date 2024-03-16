#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class shape2D{
	private:
	string name;
	string doc;
	public:
	void setName(string nm){
		name=nm; 
		}
	string getName(){
		return name;
		}
	void setDoc(string dc){
		doc=dc;
		}
	string getDoc(){
		return doc;
		}
	double area(){
		return 0.0;
		}
	double perimeter(){
		return 0.0;
		}
	string display(){
	ostringstream out;
	out<<"Name="<<getName()<<endl;
	out<<"Doc="<<getDoc()<<endl;
		}
	};
class circle:public shape2D{
	private:	
	int rad;
	public:
	void setRad(double r){
		rad=r; 
		}
	double getRad(){
		return rad;
		}
	double area(){
		return 3.14*getRad()*getRad();
		}
	double perimeter(){
		return 2*3.14*getRad();
		}
		void dispay(){
			cout<<"Perimeter="<<perimeter()<<endl;
			cout<<"Name="<<getName()<<endl;
			out<<"Area="<<area()<<endl;
			}
/*	string display{
	ostringstream out;
 out<<"Area="<<area()<<endl;
out<<"Perimeter="<<perimeter()<<endl;
return circle ::display()+out.str(); 
		 } 
return shape2D::display()+out.str(); */
};	
int main(){
	circle c;	
	c.setName("Circle");	
	c.setDoc("15-03-2023");
	c.setRad(7);
	//cout<<c.display();
	c.display();
}		
