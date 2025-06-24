#include<iostream>
#include<cstring>
using namespace std;

class  Person{
	protected:
	  char name[40];
	public:
		void getname() 
		{
		cout<<"\nEnter the name ";cin>>name;
		}
		void putdata() const
		{
		cout<<"\nThe Name is "<<name<<endl;
		}
		virtual void getdata()=0;
		virtual bool isout()=0;
};
class Student : public Person{
	float gpa;
	public:
		void getdata()
		{
			Person::getname();
			cout<<"\nEnter Gpa "; cin>>gpa;
		}
		void putdata() const
		{
		Person::putdata();	
		cout<<"\nThe GPa is "<<gpa;
		}
		bool isout()
		{
			if(gpa>3)
			 return true;
			 else false;
		}
};
class Professor : public Person{
	int pub;
	public:
		void getdata()
		{
			Person::getname();
			cout<<"\nEnter Publications "; cin>>pub;
			
		}
		void putdata(){
			Person::putdata();
			cout<<"\nPublications are "<<pub;
		}
		bool isout(){
			return (10>pub)? true:false;
		}
};
int main(){
	Person* ptr[100];
	int n=0;
	char choice;
	do{
		cout<<"\nStudent or Professor"; cin>>choice;
		if(choice=='s')
					ptr[n]=new Student;
		else
			ptr[n]=new Professor;
		ptr[n++]->getdata();
		cout<<"\nContinue?"; cin>>choice;
	}while(choice=='y');
	for(int i=0;i<=n;i++){
		ptr[i]->putdata();
	}
	return 0;
}

