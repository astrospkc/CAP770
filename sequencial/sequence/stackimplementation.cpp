#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
    int n;
    vector<int> stack;
    int stacksize;
    public:

    Stack(int n){
        this->n = n;
        // this->stack = stack;
        this->stacksize = -1;
    }

    void push(int val){
        if(stacksize!=n-1){
            stack.push_back(val);
            ++stacksize;
         
        }

    }
    int pop(){
        if(stacksize!=-1){
            int val = stack[stacksize];
            stack.pop_back();
            stacksize--;
            return val;
        }else{
            return -1;
        }

    }
    int top(){
        if(stacksize!=-1){
            return stack[stacksize];
        }
    }

    int isFull(){
        if(stacksize==n-1){
            return 1;
        }else{
            return 0;
        }

    }
    int isEmpty(){
        if(stacksize==-1){
            return 1;
        }else{
            return 0;
        }
    }
    void display(){

       for(int i=stacksize;i>=0; i--){
        cout<<stack[i]<<" ";
       }
       cout<<endl;
    }
};

int main(){
    Stack st = Stack(5);
    st.push(4);
    st.push(5);
    st.push(2);
    st.push(7);

    st.display();
    st.pop();
    st.display();

    

}   