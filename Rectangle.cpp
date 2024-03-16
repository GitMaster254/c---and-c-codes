#include <iostream>
using namespace std;
class Rectangel{ 
	private:
	double length;
	double width;
	public:
	void setLen(double l){
		length=l; 
		}
		
	double getLen(){
		return length; }
		
	void setWid(double w){
		width=w; }
		
	double getWid(){
		return width; }
		
	double area(){
		double a=getLen()*getWid();
		return a; }	
		
	/*Rectangel(int l,int w){
		length=l;
		width=w;
		}*/
	Rectangel(){} 
	void display(){
cout<<"area="<<area()<<"cm"<<endl;	
}	

	};
int main(){
	//Rectangel r;
	Rectangel x;
	x.setLen(5);
	x.setWid(3);
//	r.setLen(5);
//	r.setWid(2); 
	x.display();
	}
	
