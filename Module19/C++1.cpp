#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

Node* midpoint(Node* head)
{
    Node* slow = head;
    Node* fast = head -> next;
    while(fast!=NULL and fast-> next!= NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

Node* takeInput(){
    int data;
    cin >> data;
    Node* tail = new Node(data);
    Node* head = tail;
    cin >> data;
    while(data != -1)
    {
        Node* newNode = new Node(data);
        tail -> next = newNode;
        tail = tail -> next;
        cin >> data;
    }
    return head;
}


int main()
{
    Node* head = takeInput();
    Node* mid = midpoint(head);
    cout << mid -> data << endl;
}