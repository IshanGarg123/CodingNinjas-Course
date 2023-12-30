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

void insertNode(Node* head, int n, int data)
{
    Node* temp = new Node(data); 
    Node* temp1 = head;
    for(int i=0;i<n-1;i++)
    {
        temp1 = temp1 -> next; 
    }
    temp -> next = temp1-> next;
    temp1 -> next = temp;
}

int main()
{
    Node *head2 = takeInput();
    print(head2);
    // statically 
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    n1.next = &n2;
    Node n3(3);
    n2.next = &n3;

    print(head);

    cout << n1.data << " " << n2.data << endl;
    cout << head -> data << endl;

    // Dynamically
    Node* n6 = new Node(10);
    Node* head1 = n6;
    Node* n7 = new Node(20);
    n6 -> next = n7;
    Node* n8 = new Node(30);
    n7 -> next = n8;
    print(head1);
}