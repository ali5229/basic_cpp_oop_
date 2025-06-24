//Q-5
#include<iostream>
using namespace std;
class Employee{
      int Eid;
      double Esalary;
      string Ename;
public:
		Employee(): Eid(0),Esalary(0.0f),Ename("\0"){
		}
		void get(){
    		cout<<"Enter Id of Employee: "; cin>>Eid; cin.ignore();
    		cout<<"Enter Name of Employee: "; getline(cin,Ename);
    		cout<<"Enter Salary of Employee: "; cin>>Esalary;
					}
		void show(){
    		cout<<"Id is "<<Eid<<"\nName is "<<Ename<<"\nSalary is "<<Esalary<<endl;
					}
		void set(int m,double n,string ch){
    		Eid=m; Esalary=n; Ename=ch;
					}
		double returnSalary(){
    		return Esalary;
					}

        };
int main()
{ Employee e1,e2;
e1.get();
e2.set(12,45000.0,"Muhammad Aslam");
if(e1.returnSalary()>e2.returnSalary())
{
    e1.show();
}
else
{
    e2.show();
}
return 0;
}

