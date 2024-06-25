#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    // constructor
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~node()
    {
        int val = this -> data;

        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< data << endl;
    }
};

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length of linkedlist
int getLength(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// insert at head
void insertAtHead(node* &head,node* &tail, int d)
{
    // empty list
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// insert at tail
void insertAtTail(node* &tail, node* &head, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(d);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// insert at middle
void insertAtMiddle(node *&head, node *&tail, int d, int position)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head,tail ,d);
        return;
    }

    node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail,head, d);
        return;
    }

    node *nodeToInsert = new node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

// delete node from start , middle and tail-------------------------------------------------------
void deleteNode(node* &head , int position)
{
    //deleting first or start node 
    if(position == 1)
    {
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        // memory free of start node
        delete temp;
    }
    else
    {
        //deleting any middle or last node
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;

        while( cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    print(head);
    cout << getLength(head) << endl;

    insertAtHead(head,tail, 11);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    insertAtHead(head,tail, 15);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    insertAtTail(tail,head, 20);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    insertAtTail(tail,head, 25);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    insertAtMiddle(head, tail, 67, 4);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    deleteNode(head , 1);
    print(head);

    deleteNode(head , 4);
    print(head);

    deleteNode(head , 2);
    print(head);

    return 0;
}