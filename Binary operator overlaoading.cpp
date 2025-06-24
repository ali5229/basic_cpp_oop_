#include<iostream>
#include<cstring>
using namespace std;
const int size=80;
class String{
	char str[size];
	public:
		String(){
			strcpy(str,"");
		}
	void get() {
	 cout<<"\nEnter string :"; cin>>str;
	}
	void show(){
		cout<<str;
	}
	String operator + ( String s){
		if(strlen(str)+strlen(s.str)<size){
			String temp;
			strcpy(temp.str,str);
			strcat(temp.str,s.str);
			return temp;
		}
		else{
			cout<<"\nString overload"; exit(1);
		}
	}
};
int main(){
	String a,b,c;
	a.get();
	b.get();
	c=a+b;
	cout<<"\nThe concatenated strings are ";
	c.show();
	return 0;
}
