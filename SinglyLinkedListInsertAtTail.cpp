#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtTail(Node *&head,int data){
    Node* newNode=new Node(data);
    Node *temp=head;
    if(head==NULL){
        newNode->next=head;
        head=newNode;
    }
    
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
        
    }
}
void display(Node * head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"->NULL"<<endl;
}

int main(){

    Node *head=NULL;
    insertAtTail(head,1);
    display(head);
    insertAtTail(head,2);
    display(head);
    insertAtTail(head,3);
    display(head);
    insertAtTail(head,4);
    display(head);

    return 0;
}
