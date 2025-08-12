#include<iostream>
using namespace std;

int findActual(int n){
    int actual = 0;
    int place =1 ;
    while(n>0){
        int digit = n%10;
        if(digit>4){
          digit-=1;
        }
        actual+=digit*place;
        place*=9;
        n/=10;
    }
    return actual;
}

int main(){
    cout<<findActual(51);
    return 0;
}