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

class Pair{
    public:
    Node* head;
    Node* tail;
};

Pair reverseLL2(Node* head)
{
    if(head == NULL or head -> next == NULL)
    {
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }

    Pair smallAns = reverseLL2(head->next);
    smallAns.tail -> next = head;
    head -> next = NULL;
    Pair ans;
    ans.tail = head;
    ans.head = smallAns.head;
    return ans;
}

Node* reverseLL_Better(Node* head)
{
    return reverseLL2(head).head;
}

Node* reverseLL(Node* head)
{
    if(head == NULL or head -> next == NULL)
    {
        return head;
    }

    Node* smallAns = reverseLL(head -> next);
    Node* temp = smallAns;

    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = head;
    head -> next = NULL;
    return smallAns;
}

Node* reverseLL_best(Node* head)
{
    if(head == NULL or head -> next == NULL)
    {
        return head;
    }
    
    Node* smallAns = reverseLL_best(head->next);
    Node* tail = head -> next;
    tail -> next = head;
    head -> next = NULL;
    return smallAns;
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

void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* head = takeInput();
    head = reverseLL_Better(head);
    print(head);
}