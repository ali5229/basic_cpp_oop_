#include<iostream>
using namespace std;
int main()
{ int a[10],min,temp;
 cout<<"Enter unsorted array:"<<endl;
 for(int i=0;i<10;i++)
 { cin>>a[i];
 }
cout<<"Array in unsorted order:"<<endl;
 for(int i=0;i<10;i++)
 {
 cout<<a[i]<<endl; }
 for(int i=0;i<9;i++)
 {
 	min=i;
 	for(int j=i+1;j<10;j++)
 	{ if(a[min]>a[j])
 	   min=j;
 	if(min!=1){temp=a[i]; a[i]=a[min]; a[min ]=temp; }
	 }
	
	}cout<<"array in sorted order"; for(int i=0;i<10;i++)
 {
 cout<<a[i]<<endl; }
    

return 0;
}
