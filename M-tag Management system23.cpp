#include<iostream>
#include<ios>
#include<limits>
#include<cstring>
#include<cstdlib>
using namespace std;
struct info{
 int num;
 string city;
 string name;
 string cname;
 string root;
 int balance;
 string pnum;
};
info abc[50];
void update(int);
void deleted(int);
void display(int);
void searchnum();
void searchcnam();
void searchpnam();
void prog_to_file();
void file_to_prog();
int count=0;
int main()
{ int n,c; char ch,ch1,ch2;

  
 do{ 
    system("CLS");cout<<"\n\n\t*************Welcome To M-Tag Management System************"<<endl;   cout<<"\n\n1. Manage Data\n\n2. Search Data\n\n3. Exit";
     cout<<"\n\nEnter Your Choice:"; cin>>n;
    switch(n)
   { case 1: {cout<<"\n\na. Add Data\n\nb. Update Data\n\nc. Delete Data\n\nd. Display Data\n\ne. Exit\n\nEnter Your Choice:";  cin>>ch; cin.ignore();
    	switch(ch)
         { case 'a': { do{cout<<"Enter Car Name:"; getline(cin,abc[count].cname);
		  			cout<<"Enter Owner name:"; getline(cin,abc[count].name);
				    cout<<"Enter Car M-tag Number:"; cin>>abc[count].num; cin.ignore();
        			cout<<"Enter Car Registered Number:"; getline(cin,abc[count].city);
     				cout<<"Enter Current Balance:"; cin>>abc[count].balance;cin.ignore();
					cout<<"Enter route(end with comma):"; getline(cin,abc[count].root); 
	 				cout<<"Enter the Phone Number:"; getline(cin,abc[count].pnum); count++; 
     				cout<<"Enter Data again(y/n):"; cin>>ch2;cin.ignore();
					    }while(ch2=='y'&&count<50);
					 
			        
					 break;}
         case 'b': {int snum; cout<<"\nEnter M-tag Number of required Customer:"; cin>>snum; update(snum);break;}
         case 'c': {int delnum; cout<<"\nEnter M-tag Number of Required Customer:"; cin>>delnum; deleted(delnum); break;}
         case 'd': {int dnum; cout<<"\nEnter M-tag Number of Required Customer:"; cin>>dnum; display(dnum); break;}
         case 'e': { break;}
          }
		  cout<<"\nUse Main Menu Again(y/n):"; cin>>ch1; break;}
  case 2: {cout<<"1. Search By M-tag Number\n2. Search By Car Name\n3. Search By Person Name\n4. Exit\nEnter Choice:";cin>>c; cin.ignore();   
       switch(c)
    { case 1: { searchnum(); break;}
      case 2: { searchcnam(); break;}
      case 3: { searchpnam(); break;}
      case 4: { break;}  
	  
	     cout<<"\nUse Main Menu Again(y/n):"; cin>>ch1;
                break;}
	 	cout<<"\nUse Main Menu Again(y/n):"; cin>>ch1; break;}             
   
   case 3: { ch1='n';
            break; }
   default:{ cout<<"\nInvalid Choice, Try again(y/n):"; cin>>ch1; 
	break;
   }
}
}
while(ch1=='y');

return 0;}
void update(int upd)
{
 string str1;
for(int i=0;i<50;i++)
{
 if(upd==abc[i].num)
{int p; cout<<"\n\n1. Update M-tag Number\n\n2. Update Owner Name\n\n3. Update Car Name\n\n4. Update Owner Phone Number\n\n5. Update Route\n\n6. Update Balance\n\n7. Update Car City code\n\nEnter Choice:"; cin>>p; cin.ignore();
 switch(p){
 case 1: { cout<<"\nEnter New M-tag Number:"; cin>>abc[i].num; cin.ignore(); break; }
 case 2: { cout<<"\nEnter The new owner name:"; getline(cin,str1); abc[i].name=str1; break; }  
 case 3: {cout<<"\nEnter the new car name:"; getline(cin,str1); abc[i].cname=str1; break; }
 case 4: { cout<<"\nEnter the new Owner Phone Number:"; getline(cin,str1); abc[i].pnum=str1;  break; }  
case 5:{  cout<<"\nEnter the new Route(end with comma):"; getline(cin,str1); abc[i].root+=str1;  break;}
case 6:{int o; cout<<"\n1. Deposit\n2. Deduct:"; cin>>o;
  if(o==1){int mon; cout<<"\nEnter the Amount to deposit:"; cin>>mon;abc[i].balance+=mon; cin.ignore();}
  else { int mon; cout<<"\nEnter the amount to deduct:";cin>>mon; abc[i].balance-=mon;cin.ignore(); }
  break;}
  case 7:{ cout<<"\nEnter New Registered Car Number:"; getline(cin,str1); abc[i].city=str1; 
	break;
  }
  }
  }
  }
  cout<<"_____________DONE____________";}
void deleted(int del)
{ 
for(int i=0;i<50;i++)
{ 
  if(del==abc[i].num)
 { int p; p=i;
  for(int j=p;j<50;j++){ abc[i]=abc[i+1];}
  }
  }
  cout<<"_____________DONE____________";}  
void display(int dis)
{int temp; 
   for(int i=0;i<50;i++){ if(dis==abc[i].num){  temp=i; 
	cout<<"\nCar M-tag Number: "<<abc[temp].num; 
	cout<<"\nCar Number: "<<abc[temp].city;
	cout<<"\nCar Name: "<<abc[temp].cname;
	cout<<"\nOwner Name: "<<abc[temp].name;
	cout<<"\nOwner Phone Number: "<<abc[temp].pnum;
	cout<<"\nCurrent Balance: "<<abc[temp].balance;
	cout<<"\nRoute: "<<abc[temp].root;  }}}

void searchnum()
{ int temp; int dis;
  cout<<"Enter M-tag Number: "; cin>>dis;
 for(int i=0;i<50;i++)
 { if(dis==abc[i].num){  temp=i;} }
	cout<<"\nCar Number: "<<abc[temp].city<<endl;
	cout<<"Car Name: "<<abc[temp].cname;
	cout<<"\nOwner Name: "<<abc[temp].name;
	cout<<"\nOwner Phone Number: "<<abc[temp].pnum;
	cout<<"\nCurrent Balance: "<<abc[temp].balance;
	cout<<"\nRoute: "<<abc[temp].root; }  

void searchcnam()
{ 
   string cname2; int temp;
   cout<<"Enter Car Na1me: "; getline(cin,cname2);
     for(int i=0;i<50;i++)
 {  if(cname2==abc[i].cname) temp=i;
 }  cout<<"Car M-tag Number: "<<abc[temp].num;
    cout<<"\nCar Number: "<<abc[temp].city<<endl;
	cout<<"Car Name: "<<abc[temp].cname;
	cout<<"\nOwner Name: "<<abc[temp].name;
	cout<<"\nOwner Phone Number: "<<abc[temp].pnum;
	cout<<"\nCurrent Balance: "<<abc[temp].balance;
	cout<<"\nRoute: "<<abc[temp].root; 
 }
void searchpnam()
{ 
   string cname2; int temp;
   cout<<"Enter Person Name: "; getline(cin,cname2);
     for(int i=0;i<50;i++)
   {  if(cname2==abc[i].name) temp=i;  
   }
    cout<<"Car M-tag Number: "<<abc[temp].num;
    cout<<"\nCar Number: "<<abc[temp].city<<endl;
	cout<<"Car Name: "<<abc[temp].cname;
	cout<<"\nOwner Name: "<<abc[temp].name;
	cout<<"\nOwner Phone Number: "<<abc[temp].pnum;
	cout<<"\nCurrent Balance: "<<abc[temp].balance;
	cout<<"\nRoute: "<<abc[temp].root; 

}

