#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    
    Node* next;
    Node(int val):data(val), next(nullptr){}
};

class LinkedListStack{

    private:
    Node* head;
    Node* temp;

    public:
    int pop(){
        
        if(head!=nullptr && head->next==nullptr){
            head = nullptr;
        }else{
            temp =  head;
            while(temp->next!=nullptr){
                temp = temp->next;

            }
            int val = temp->data;
        }
    };
    void peek();
    void top();
    void push(int val){
        Node* newNode = new Node(val);
        newNode->next  = head;
        head = newNode;
    };
    void isEmpty();
}