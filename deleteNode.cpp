#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
    ~Node()
    {
        int value=this->data;
        //memory free
        if(this->next!=NULL)
        {
           delete next;
           this->next=NULL;
        }
        cout<<"Free value:"<<value<<endl;
    }
};

void deleteNode(Node* &head,int pos)
{
    //delete the first node
    if(pos==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    //delete node in any position or at the end
    else
    {
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<pos)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next =curr->next;
        curr->next=NULL;
        delete curr;
    }
}


void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void insertAtEnd(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

int main()
{
    int size=0,pos=0;
    cout<<"Enter number of nodes:"<<endl;
    cin>>size;
    cout<<"Enter the data of nodes"<<endl;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    Node* node1=new Node(arr[0]);
    Node* head=node1;
    Node* tail=node1;
    //print(head);
    for(int i=1;i<size;i++){
        insertAtEnd(tail,arr[i]);
    }
    cout<<"Values of the nodes before deleting:"<<endl;
    print(head);
    cout<<"Enter the position of the node to be deleted:"<<endl;
    cin>>pos;
    deleteNode(head,pos);
    cout<<"Values of the nodes after deleting:"<<endl;
    print(head);
    return 0;
}