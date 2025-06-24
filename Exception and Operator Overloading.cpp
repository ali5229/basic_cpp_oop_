#include<iostream>
#include<stdexcept>
using namespace std;
class Distance : public runtime_error
{
	int feet;
	float inches;
	public:
		Distance(): feet(0),inches(0.0f),runtime_error(""){}
	Distance operator +(Distance a){
		Distance temp;
		temp.feet=feet+a.feet;
		temp.inches=inches+a.inches;
		while(temp.inches>12){
			temp.feet+=temp.inches/12;
		}
		if(temp.feet>50){
			throw runtime_error("\nFeets exceeded 50");
		}
		 return temp;
	}	
	friend istream& operator >> (istream& a,Distance& obj);
    friend ostream& operator <<  (ostream& b,Distance& obj);
	 
};
	istream& operator >> (istream& a,Distance& obj){
		cout<<"\nEnter the feets ";
		a>>obj.feet;
		cout<<"\nEnter the inches ";
        a>>obj.inches;
        while(obj.inches>12){
        	obj.feet=obj.feet+obj.inches/12;
		}
		return a;
  	}
  	ostream& operator << (ostream& b,Distance& obj) {
  		b<<"\nFeets are "<<obj.feet;
  		b<<"\bInches are "<<obj.inches;
  		return b;
	  }

int main(){
	Distance a,b,c;
	cout<<"\nEnter First Distance ";
	cin>>a;
	cout<<"\nEnter Second Distance "; 
	cin>>b;
	try{
		c=a+b;
		cout<<c;
	}
	
	catch (runtime_error& e){
		cout<<"\nError "<<e.what();
	}
	cout<<"\nProgram Ended";
	return 0;
}
