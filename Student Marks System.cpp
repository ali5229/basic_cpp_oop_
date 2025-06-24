#include<iostream>
using namespace std;
struct student{
	char name[20];
	int num;};
void maxreg(student arr[],int an);
void maxss1(student arr1[],int am);
void maxss2(student arr2[],int ak);
void maxdep(student arra[],student arrb[],student arrc[],int x,int y,int z);
int main()
{   int n; char ch;
 student str[3],str1[3],str2[3];
  cout<<"************Enter Name and Marks*********"<<endl;
  cout<<"For BScs REg:"<<endl;
  for(int i=0;i<3;i++)
  { cout<<"Enter Name:";
    for(int k=0;k<20;k++){ cin>>str[k].name;
	} cout<<"Enter marks:"; cin>>str[i].num;
  } cout<<"FOr BSCS ss1:"<<endl;
   for(int i=0;i<3;i++)
  { cout<<"Enter Name:";
    for(int k=0;k<20;k++){ cin>>str1[k].name;
	} cout<<"Enter marks:"; cin>>str1[i].num;
  } cout<<"For BSCS SS2:"<<endl;
   for(int i=0;i<3;i++)
  { cout<<"Enter Name:";
    for(int k=0;k<20;k++){ cin>>str2[k].name;
	} cout<<"Enter marks:"; cin>>str2[i].num;
  }
  cout<<"************CHOOSE YOUR OPTION***********"<<endl;
  cout<<"1. High marks in BSCS REG:"<<endl;
  cout<<"2. High marks in BSCS SS1:"<<endl;
  cout<<"3. High marks in BSCS SS2:"<<endl;
  cout<<"4. High marks in BSCS Department:"<<endl;
  cin>>n;
    switch(n)
    { case 1: { maxreg(str,3); break;}
      case 2: { maxss1(str1,3);break;}
	  case 3: { maxss2(str2,3);break;}
	  case 4:{ maxdep(str,str1,str2,3,3,3);break;}
	  default:{ cout<<"Invalid input";break;}} 
	  cout<<"\n***************THE END**************";
      return 0;}
	 void maxreg(student arr[],int an)
	 { int max1=0;
	    for(int i=0;i<an;i++)
	    { if(arr[i].num>arr[max1].num) max1=i;
		} cout<<"The student with highest marks is "<<arr[max1].name;
		  cout<<"\nTHe numbers are "<<arr[max1].num;
		 }	
      void maxss1(student arr1[],int am)
      { int max2=0;
      for(int k=0;k<am;k++){ if(arr1[k].num>arr1[max2].num) max2=k;
	  } cout<<"The student with highest marks is "<<arr1[max2].name;
		  cout<<"\nTHe numbers are "<<arr1[max2].num;
	  }
	  void maxss2(student arr2[],int ak)
	  {  int max3=0;
      for(int u=0;u<ak;u++){ if(arr2[u].num>arr2[max3].num) max3=u;
	  } cout<<"The student with highest marks is "<<arr2[max3].name;
		  cout<<"\nTHe numbers are "<<arr2[max3].num;
	 }
	 void maxdep(student arra[],student arrb[],student arrc[],int x,int y,int z)
	 { int max1=0;
	 for(int u=0;u<x;u++){ if(arra[u].num>arra[max1].num) max1=u;}
	   int max2=0;
	   for(int o=0;o<y;o++){ if(arrb[o].num>arrb[max2].num) max2=o;}
	   int max3=0;
	   for(int p=0;p<z;p++){ if(arrc[p].num>arrc[max3].num) max3=p;}
	   if(arra[max1].num>arrb[max2].num&&arra[max1].num>arrc[max3].num){
	   	cout<<"The student with highest marks is "<<arra[max1].name;
	   	cout<<"\nThe marks are "<<arra[max1].num;
	   }
	   if(arrb[max2].num>arra[max1].num&&arrb[max2].num>arrc[max3].num){
	   	cout<<"The student with highest marks is "<<arrb[max2].name;
	   	cout<<"\nThe marks are "<<arrb[max2].num;
	   }
	   if(arrc[max3].num>arrb[max2].num&&arrc[max3].num>arra[max1].num){
	   	cout<<"The student with highest marks is "<<arrc[max3].name;
	   	cout<<"\nThe marks are "<<arrc[max3].num;
	   }
	   
	 }
