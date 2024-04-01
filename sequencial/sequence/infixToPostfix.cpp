#include<bits/stdc++.h>
using namespace std;

int precedence(char e){
    if(e=='*' || e=='/'){
        return 2; // higher precedence
    }
    else if(e=='+' || e=='-'){
        return 1; // lower precedence
    }
    return 0;
} // Added missing closing brace

int main(){

    stack<char> st;
    string exp = "3+4*8";
    string str;

    for(int i=0; i<exp.length(); i++){
        if(exp[i]>='0' && exp[i]<='9'){ // Corrected condition
            str += exp[i];
        }else{
            // check precedence
            if(st.empty()){
                st.push(exp[i]);
            }else{
                // check the precedence whether it is greater or smaller if the top is greater then push the current one.
                if(precedence(st.top()) < precedence(exp[i])){ // Corrected condition
                    st.push(exp[i]);
                }else{
                    char s = st.top(); // Changed st.pop() to st.top()
                    st.pop(); // Pop the top element after using it
                    str += s;
                    st.push(exp[i]);
                }
            }
        }
    }

    // Pop remaining operators from the stack
    while (!st.empty()) {
        str += st.top();
        st.pop();
    }

    cout << "Postfix expression: " << str << endl;

    return 0;
}
