#include<bits/stdc++.h>
using namespace std;

int main()
{  
    //    sizeof(arr[0])/sizeof(arr)
    int n;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;
    vector<int> arr(n,0);
    int i, num;
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    while(n>0){
        cout<<"First enter the index and number to insert in that position"<<endl;
        cin>>i>>num;
        arr[i]=num;
        n--;
        cout<<arr[i]<<endl;

    }

    for(int j=0; j<arr.size(); j++){
        cout<<arr[j]<<" ";
    }
}