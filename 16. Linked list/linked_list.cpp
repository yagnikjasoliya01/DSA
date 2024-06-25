#include<iostream>
using namespace std;

//insertion and deletion of node --------------------------------------------------------

class node
{
    public:
    int data;
    node* next;

    node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    ~node(){
        int value = this -> data;

        // memory free
        if(this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }

        cout << "memory is free for node with data: " << value << endl ;
    }
};

// insert at head -------------------------------------------------------
void insertAtHead(node* &head , int d)
{
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}


// insert at tail--------------------------------------------------------------
void insertAtTail(node* &tail , int d)
{
    node* temp = new node(d);
    tail -> next = temp ;
    tail = temp;
}

// insert at middle--------------------------------------------------------------
void insertAtMiddle(node* &head ,node* &tail, int position , int d)
{
    //insert at start
    if(position == 1)
    {
        insertAtHead(head , d);
        return;
    }


    node* temp = head;

    int  cnt = 1;

    while(cnt < position-1)
    {
        temp = temp -> next;
        cnt++;
    }

    //inserting at last position
    if(temp -> next == NULL)
    {
        insertAtTail(tail , d);
        return;
    }


    node* nodeToInsert = new node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}


// delete node from start , middle and tail-------------------------------------------------------
void deleteNode(node* &head , int position)
{
    //deleting first or start node 
    if(position == 1)
    {
        node* temp = head;
        head = head -> next;
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

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

void print(node* &head)
{
    node* temp = head;

    while(temp != NULL)
    {
        cout << temp -> data << endl ;
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    node* node1 = new node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    node* head = node1;
    node* tail = node1;

    print(head);
    insertAtHead(head , 39);
    print(head);
    
    insertAtTail(tail, 56);
    print(head);    

    insertAtMiddle(head ,tail , 1 , 67);
    print(head);    

    insertAtMiddle(head ,tail, 5  , 54);
    print(head); 

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    deleteNode(head , 1);
    print(head);


return 0;
}


