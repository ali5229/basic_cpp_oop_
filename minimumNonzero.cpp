//Give an array we have to find the minimum most non-zero number.

#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int findMinNonZero(vector<int> arr, int size){
    sort(arr.begin(), arr.end());
    int count=1;
    for(int i=0; i<size; i++){
        if( arr[i]!=count) return count;
        count++;
    }
    return count;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    int size = arr.size();
    int minNonZero = findMinNonZero(arr,size);
    cout<<"The minimum missing non zero number in the list is "<<minNonZero;
    return 0;
}