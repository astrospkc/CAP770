#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class LinkedList{
    private:
    Node* head;

    public:

    LinkedList(){
        head = nullptr;
    }
    ~LinkedList(){
        Node* currect  = head;;
        while(current != nullptr){
            Node* newNode = new Node(value)
        }
    }
}