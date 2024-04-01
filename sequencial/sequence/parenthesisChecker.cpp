#include<bits/stdc++.h>
using namespace std;


int main(){
    stack<char> st;
    string str  = "[[]]";

    bool check = true;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '['){
            st.push(str[i]);
        }else if(st.empty() && str[i]==']'){
            check  = false;
            break;
        }else if(!st.empty()){
            st.pop();
        }
    }

    if(check == false){
        cout<<"not a correct parenthesis";
    }else if(check == true && st.empty()){
        cout<<"correct parenthesis";
    }else if(check == true && !st.empty()){
        cout<<"not a correct parenthesis";
    }
}