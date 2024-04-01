#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* next;
    int data;

    
    Node(int val){
        next = nullptr;
        data= val;
    }

};

class Queue{
    private:
    Node* rear;
    Node* front;

    public:
    Queue(){
        rear = nullptr;
        front = nullptr;
    }
    void enqueue(int val){
        Node* node = new Node(val);
        if(isEmpty()){
            rear =node;
            front = node;
        }else{
            rear->next = node;
            rear = node;
        }
    }

    int dequeue(){
        if(isEmpty()){
            return -1;
        }else{
            int deq = front->data;
            Node* temp  = new Node(deq);
            front = front->next;
            delete temp;
            return deq;
            
        }
    }

    bool isEmpty(){
        return front==nullptr;

    }

    int peek(){
        id
    }
}