#include<iostream>
#include<unordered_map>
using namespace std;

int findOdd(int arr[], int arr_length){
    unordered_map<int,int> mp;
    for(int i=0;i<arr_length;i++){
      mp[arr[i]]+=1;
    }
    for(int i=0; i<mp.size() ;i++){
        if(mp[arr[i]]<2) return arr[i];
    }
    return NULL;
}

int main(){
    int arr[] = { 9, 11, 13, 3, 11, 9, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findOdd(arr,n);
    return 0 ;
}