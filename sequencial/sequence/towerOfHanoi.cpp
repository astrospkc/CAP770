#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char fromRod, char auxRod, char toRod){
    if(n==0){
        return;
    }

    towerOfHanoi(n-1, fromRod, auxRod, toRod);
    cout<<"Move disk "<<n<<" from "<<fromRod<<" to rod "<<toRod<<endl;
    towerOfHanoi(n-1, auxRod, toRod, fromRod);
}


int main(){

    int n  = 3;

    towerOfHanoi(n, 'A','C','B');
}