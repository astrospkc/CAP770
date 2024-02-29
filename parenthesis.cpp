#include<bits/stdc++.h>
using namespace std;

int main(){
    int x =0,i=0;
    cout<<"enter the expression";
    string exp;
    getline(cin, exp);

    while(exp[i] != '\0'){
        if(exp[i]=='('){
            x++;
        }
        if(exp[i]==')'){
            x--;
        }
        if(x<0){
            break;
        }
        i++;
    }

    if(x==0){
        cout<<"valid";
    }else{
        cout<<"invalid";
    }
}