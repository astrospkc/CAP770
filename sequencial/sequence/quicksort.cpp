#include<bits/stdc++.h>
using namespace std;


int partition( int low, int high, vector<int>& arr){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }

        while(arr[j]>=pivot&& j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }

    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(int low, int high, vector<int>& arr){
    if(low<high){
        int pi = partition(low, high, arr);
        qs(low, pi-1, arr);
        qs(pi+1, high , arr);
    }

    
}


int main(){

    vector<int> arr  ={2,1,4,3,5,6,9};
    int low = 0;
    int high = arr.size()-1;

    qs(low, high, arr);

    for(int i =0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}