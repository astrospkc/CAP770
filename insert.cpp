#include<bits/stdc++.h>
using namespace std;

int main(){
    int  arr[100];

    int n;
    cout<<"enter the number of elements you want to insert: "<<endl;
    cin>>n;
    int len = sizeof(arr[0])/sizeof(arr);
    if(n>len){
        cout<<"print valid number btw 1-100"<<endl;
        cin>>n;
    }else{
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

