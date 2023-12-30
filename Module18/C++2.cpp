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

void print(Node *head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
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

Node* insertNode(Node* head, int n, int data)
{
    Node* temp = new Node(data); 
    Node* temp1 = head;

    if(n==0)
    {
        temp -> next = head;
        head = temp;
        return head;
    }

    for(int i=0;i<n-1;i++)
    {
        if (temp1 == NULL)
        {
            return head;
        }
        temp1 = temp1 -> next; 
    }
        temp -> next = temp1 -> next;
        temp1 -> next = temp;
        return head;
}

int main()
{
    Node* head = takeInput();
    print(head);

    int i,data;
    cin >> i >> data;
    head = insertNode(head,i,data);
    print(head); 
}