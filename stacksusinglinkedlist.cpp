#include <iostream>
#include <stack>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
bool isempty(Node * head)
{
    if (head == NULL)
    {
        return true;
    }
    return false;
}


void push(Node *&head,int data,int size,int count)
{   if (size == count)
    {
        cout << "stack overflow"<<endl;
    }
    else{
    Node *newnode = new Node(data);
    newnode->next = head;
    head = newnode;
    }
    

}
void pop(Node *& head)
{
    cout << head->data<<endl;
    head = head->next;
}
void print(Node * head)
{   if (isempty(head)){
    cout << "stack underflow";
    }
    else{
        Node * temp = head;
    while(temp!=NULL){
        cout << temp->data<<"->";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
    }
}

int main()
{   int size;
    cin >> size;
    int count = 0;

    Node *head=NULL;
    push(head,2,size,count);
    count++;
    push(head,3,size,count);
    count++;
    push(head,3,size,count);
    print(head);
    pop(head);
    count--;
    isempty(head);
    pop(head);
    count--;
    print(head);

    
}