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

Node* takeInput(){
    int data;
    cin >> data;
    Node* head;
    Node* tail;
    if(data!=-1)
    {
        tail = new Node(data);
        head = tail;
    }
    
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

int length(Node* head)
{
    Node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp -> next;
    }
    return count;
}

void printIthNode(Node *head, int i)
{
    Node* temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        if(i == count)
        {
            cout << temp -> data << endl;
            break;
        }
        temp = temp -> next;
        count++;
    }
}

Node* deleteNode(Node* head, int pos)
{
    if(head == NULL)
    {
        return head;
    }

    Node* temp = head;
    int count = 0;

    if(pos == 0)
    {
        Node* newHead = temp -> next;
        temp -> next = NULL;
        delete temp;
        head = newHead;
        return head;
    }

    while(temp->next!=NULL)
    {
        if(count == pos - 1)
        {
            Node* temp1 = temp -> next;
            temp -> next = temp1 -> next;
            temp1 -> next = NULL;
            delete temp1;
            break;
        }
        temp = temp -> next;
        count++;
    }

    return head;
}

int main()
{
    Node* head = takeInput();
    cout << length(head) << endl;

    printIthNode(head, 3);
}