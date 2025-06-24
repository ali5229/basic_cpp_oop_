#include<iostream>
#include<cstring>
using namespace std;
class Publication{
	protected:
	char title[40];
		float price;
	public:
		void getdata(){
			cout<<"Enter the title :"; cin>>title; 
			cout<<"Enter the price :"; cin>>price;
		}
		void putdata(){
			cout<<"THe title is "<<title;
			cout<<"The price is "<<price;
		}
		virtual string oversize()=0;
};
class Book: public Publication{
	int page_count;
		public:
		void getdata(){
			Publication::getdata();
			cout<<"\nEnter the page count :"; cin>>page_count;
			}
		void putdata(){
		Publication::putdata();
		cout<<"\nThe page count is "<<page_count;
		oversize();
		}
		string oversize(){
			if(page_count>500)
			  return "\nOversize";
		}
	
};
class Tape: public Publication{
	float ptime;
	 public:
	 	void getdata(){
		    Publication::getdata();
			cout<<"\nEnter the play time :"; cin>>ptime;
			}
		void putdata(){
			Publication::putdata();
			cout<<"\nThe play time is "<<ptime;
			oversize();
			}
		string oversize(){
			if(ptime>90) return "\nOversize";
		}

};
int main(){
	Publication *ptr[50];
	int i=0;
	char opt;
	do{ cout<<"Enter B for Book"<<endl;
	cout<<"Enter T for Tape"<<endl;
	cin>>opt;
	if(opt=='b'|| opt=='B'){
		ptr[i]=new Book();
		ptr[i]->getdata();
		i++;
	}
	else if(opt=='t'|| opt=='T'){
		ptr[i]=new Tape();
		ptr[i]->getdata();
		i++;
	}
	else cout<<"Invalid Option, Try again(y/n)";
	cout<<"\nDO u want to continue(y/n) ";
	cin>>opt;
	}while(opt=='y'|| opt=='Y');
	cout<<endl;
	for(int j;j<i;j++){
		ptr[j]->putdata();
		
		j++;
	}
	return 0;
}
