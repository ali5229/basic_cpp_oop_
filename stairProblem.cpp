#include<iostream>
using namespace std;

int stairWays(int stairs){
    if(stairs==1) return 1;
    if(stairs==2) return 2;
    int prev1= 2;
    int prev2=1;
    int current;
    for(int i=3; i<=stairs; i++){
        current=prev1+prev2;
        prev2=prev1;
        prev1=current;
    }
    return prev1;
}
int main(){
    int stairs = 7;
    cout<<"Number of climbiing ways is "<<stairWays(stairs);
}