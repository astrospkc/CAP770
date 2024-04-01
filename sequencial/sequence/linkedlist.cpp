#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    Node* next;
    int data;

    Node(int val):data(val),next(nullptr){}


};

class Linkedlist{
    private:
    Node* head;

    public:
    Linkedlist():head(nullptr){}
    ~Linkedlist(){
        Node* current = head;
        while(current != nullptr){
            Node* next =current->next;
            delete current;
            current = next;
        }
    }

    void insert(int val){
        Node* newNode = new Node(val);
        newNode->next= head;
        head = newNode;
    }

    void display(){
        Node* curr = head;
        while(curr!= nullptr){
            cout<<curr->data;
            curr = curr->next;
        }
        cout<<endl;
    }
};

int main(){
    Linkedlist list;
    list.insert(3);
    list.insert(5);
    list.insert(8);
    list.insert(0);

    list.display();
    return 0;
}