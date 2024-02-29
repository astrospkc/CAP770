#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"enter expression";
    string s;
    getline(cin,s);

    stack<char> st;
    char ch;


    for(int i=0; i<s.length(); i++){

        if(st.empty()&& s[i]=='('){
            st.push(s[i]);
        }else if(!st.empty() && s[i]=='('){
            st.push(s[i]);
        }else if(!st.empty() && s[i]==')'){
            st.pop();
        }
    }

    if(!st.empty()){
        cout<<"expression is invalid";
    }else{
        cout<<"expression valid";
    }
}