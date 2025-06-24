#include<iostream>
using namespace std;
class vehicle{
	protected:
	int erg_no,cost;
	public:
		vehicle(): erg_no(0),cost(0){}
	    vehicle(int m, int n): erg_no(m),cost(n){}
	    
		virtual void start()=0;
		virtual void stop()=0;
		virtual void show()=0;
};
class Lightweight: public vehicle{
	public:
	Lightweight(): vehicle(){}
	Lightweight(int m, int n): vehicle(m,n){}
	void start(){
		cout<<"\nLightweight vehicle has started";
	}
	void stop(){
		cout<<"\nLightweight vehicle has stopped";
	}
	void show(){
		cout<<"\nLightweight vehicle's price is"<<cost;
		cout<<"\nLightweight vehicle's erg no is"<<erg_no;
	}
};
class heavyweight: public vehicle{
	public:
	heavyweight(): vehicle(){}
	heavyweight(int m, int n): vehicle(m,n){}
	 void start(){
		cout<<"\nheavyweight vehicle has started";
	}
	 void stop(){
		cout<<"\nheavyweight vehicle has stopped";
	}
	 void show(){
		cout<<"\nheavyweight vehicle's price is"<<cost;
		cout<<"\nheavyweight vehicle's erg no is"<<erg_no;
	}
};
int main(){
	Lightweight b(32,67899);
	heavyweight c(42,78400);
	Lightweight* bp;
	heavyweight* cp;
	bp=&b; cp=&c;
	bp->start();
	bp->stop();
	bp->show();
    cp->start();
	cp->stop();
	cp->show();
	return 0;
}
