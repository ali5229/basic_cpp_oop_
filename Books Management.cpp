//Q-11
#include<iostream>
using namespace std;
class BOOK{
	int bookno; string booktitle; float price;
	float TOTAL_COST(int n){
		int cost=price*n;
		return cost;
	}
	static int no;
	public:
	BOOK(): bookno(0),booktitle("\0"),price(0.0f){
	no++;}
	BOOK(int n, string m, float d): bookno(n),booktitle(m),price(d){
	no++;}
	void INPUT(){
		cout<<"\nEnter Book Number :"; cin>>bookno; cin.ignore();
		cout<<"Enter Book Title :"; getline(cin,booktitle);
		cout<<"Enter Price of Book :"; cin>>price;
	    
	}
	int showno(){
	  return no;
	}
	void const PURCHASE(); 
		~BOOK(){
		}
};
int BOOK::no=0;
void const BOOK::PURCHASE(){
	 int m;
		cout<<"\nBook number :"<<bookno;
		cout<<"\nBook Title :"<<booktitle;
		cout<<"\nPrice :"<<price;
		cout<<"\nEnter Number of copies to be purchased :"; cin>>m;
		cout<<"\nTotal Cost is Rs "<<TOTAL_COST(m);
	
}

int main(){
	BOOK a,b(3,"GoodBye Mr.Chips",343.5);
	a.INPUT();
	a.PURCHASE();
	b.PURCHASE();
	cout<<"\nNumber of Books added:"<<a.showno();
	return 0;
}
