#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int d)
    {
        this -> data = d;
        this -> next = NULL;
    }

    ~node()
    {
        int val = this -> data;

        if(this -> next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<< " memory is free for node with data: " << data << endl;
    }
};

void insertNode(node* &tail , int element , int d)
{
    //assuming that the element is present in the list
    if(tail == NULL)
    {
        node* newnode = new node(d);
        tail = newnode;
        newnode -> next = newnode;
    }
    else
    {
        //non-empty list
        //assuming that the emement is present in the list

        node* curr = tail;

        while(curr -> data != element)
        {
            curr = curr -> next;
        }

        //element found -> curr is representing element vala node
        node* temp = new node(d);
        temp -> next = curr -> next;
        curr -> next  = temp;
    }
}

//traversal
void print(node* &tail)
{
    node* temp = tail;

    //empty list
    if(tail == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }

    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
    cout << endl;
}

//delete operation
void deleteNode(node* tail , int value)
{
    //empty list
    if(tail == NULL)
    {
        cout << "list is empty, chech again" << endl;
        return;
    }
    else
    {
        //non-empty
        //assuming that value is present in linked list
        node* prev = tail;
        node* curr = prev -> next;

        while(curr -> data != value)
        {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //one node linked-list
        if(curr == prev)
        {
            tail = NULL;
        }

        // >=2 node linked-list
        else if(tail == curr)
        {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

int main()
{
    node* tail = NULL;

    insertNode(tail ,5 ,3);
    print(tail);

    insertNode(tail ,3 ,8);
    print(tail);

    // insertNode(tail ,8 ,10);
    // print(tail);

    // insertNode(tail ,10 ,1);
    // print(tail);

    // insertNode(tail ,8 ,75);
    // print(tail);

    deleteNode(tail , 3);
    print(tail);

    return 0;
}