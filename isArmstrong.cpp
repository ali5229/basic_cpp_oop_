#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n){
    int digit = 0;
    int sum=0;
    int temp_n=n;
    while(temp_n>0){
        digit++;
        temp_n/=10;
    }
    temp_n=n;
    while(temp_n>0){
        int current_digit=temp_n%10;
        sum+=pow(current_digit,digit);
        temp_n/=10;
    }
    if(sum==n) return true;
    else return false;
}
int main(){
    int n = 321;
    if(isArmstrong(n)) cout<<"Given number is an Armstrong";
    else cout<<"Given number is not an armstrong";
    return 0;
}