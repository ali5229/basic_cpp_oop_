#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main()
{  int b=45000,n,a,p,d,w;
 menu:      cout<<"1. Check Balance\n2. Deposit Amount\n3. Withdraw\n4. Exit"<<endl;
            cout<<"\n\nEnter Your Choice :"; cin>>n;
            if(n==1)
      {       cout<<"Your current balance is :"<<b<<" Rupees."<<endl;
              cout<<"To use menu again press 0:"; cin>>p;
                  if(p==0) { system("CLS"); goto menu;  } }
            else if(n==2)
      {       cout<<"Enter Amount to deposit :"; cin>>d; b+=d; cout<<"\n__________DONE__________\n";
              cout<<"To use menu again press 0:"; cin>>p;
                  if(p==0) { system("CLS"); goto menu; } }  
	        else if(n==3)
      { fab:  cout<<"\nEnter The withdraw amount :";
	   cin>>w;if(w%500==0){ b-=w; cout<<"\n__________DONE__________\n";  
              cout<<"To use menu again press 0:"; cin>>p;
                 if(p==0) { system("CLS"); goto menu; } } else {cout<<"\nInvalid input try again"; goto fab;}} 
            else if(n==4)
              cout<<"Thanks for choosing us. Have a nice day.";
            
   		  return 0; }
 
