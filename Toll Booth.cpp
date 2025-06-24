#include<iostream>
#include "conio.h"
using namespace std;
const char ESC=27;

class tollBooth{
	unsigned numcars;
	double cash;
	public:
		tollBooth():numcars(0),cash(0.00){}
		void payingCar(){
			numcars++;
			cash+=0.50; cout<<"\n---done---";
		}
		void nopayCar(){
			numcars++;cout<<"\n---done---";
		}
		void display(){
			cout<<"\n\nTotal Cars Passed: "<<numcars;
			cout<<"\nTotal Money: "<<cash;
		}
};
int main(){
	tollBooth plaza;
	char ch;
	cout<<"\nPress 1 for to add record of payed cars\n\nPress 2 to add record of unpayed cars\n\nPress Esc key to exit and display results";
	do{  ch=getche();
		if(ch=='1')
			plaza.payingCar();
		if(ch=='2')
			plaza.nopayCar();
	 } while(ch!=ESC);
plaza.display();
return 0;}
