#include<bits/stdc++.h>
using namespace std;

class Stack{
    int size;
    int * arr;
    int top;

    public:
    Stack(){
        size = 20;
        top = -1;
        arr =new int[size];


    }

    void push( int a){
        top++;
        arr[top] = a;
    }

    int pop(){
        int s = arr[top];
        top--;
        return s;
    }

    int top(){
        return arr[top];
    }
};




int main(){
    Stack s;
    s.push(9);
    cout<<s.pop();
    // cout<<s.top();



}