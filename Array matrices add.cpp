#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ int r,c,i,k; 
cout<<"Enter Columns:"; cin>>c; cout<<"Enter Rows:"; cin>>r;
 int a[r][c],b[r][c];
 cout<<"Input the elements of first Matrix:"<<endl;
 for(i=0;i<r;i++)
{ for(k=0;k<c;k++)
   { cout<<"a"<<"["<<i<<"]["<<k<<"]:"; cin>>a[i][k]; }
}
cout<<"Input the elements of second Matrix:"<<endl;
 for(i=0;i<r;i++)
{ for(k=0;k<c;k++)
  {  cout<<"b"<<'['<<i<<"]["<<k<<"]:"; cin>>b[i][k]; }
}
cout<<"Resultant Matrix:"<<endl;
for(i=0;i<r;i++)
{ for(k=0;k<c;k++) 
  { if(k>0){ cout<<' ';}
    cout<<setw(5)<<a[i][k]+b[i][k];
  } cout<<endl;
}
 return 0;
}
