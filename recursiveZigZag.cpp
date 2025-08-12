#include<iostream>
using namespace std;
void zigZag( int arr[], int start,int end){
    if(start>end) return;
    cout<<arr[start]<<" ";
    if(start!=end) cout<<arr[end]<<" ";
    zigZag(arr, start+1, end-1);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    zigZag(arr, 0, n-1);
    return 0;
}