#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c = n%10;
    cout<<c<<endl;
    n/=10;
 c = n%10;
    cout<<c<<endl;
    n/=10;
    c=n%10;
    cout<<c<<endl;
    n/=10;
    c=n%10;
    cout<<c<<endl;
    
    return 0;
}