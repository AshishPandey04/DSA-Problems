#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;
    // constructor
    Node(int val){
        this->prev=NULL;
        this->data=val;
        this->next=NULL;
    }
};
void insertAtHead(int val,Node* &head,Node* &tail){
    // LL is empty
    if(head==NULL && tail==NULL){
        Node* newNode=new Node(val);
        head=newNode;
        tail=newNode;
    }else{
        Node* newNode=new Node(val);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}
void insertAtTail(int val,Node* &head, Node* &tail){
    // LL is empty
    if(head==NULL && tail==NULL){
        Node* newNode=new Node(val);
        head=newNode;
        tail=newNode;
    }else{
        Node* newNode=new Node(val);
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
}
int length(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}
void print(Node* &head){
    Node* temp=head;
    // JAB tak temp null ke equal nahi hain print karoo , jaese hi null ke equal huaa means ll khatam hogya 
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void reversePrint(Node* &tail){
    Node* temp=tail;
  
    while(temp!=0){
        cout<<temp->data<<"->";
        temp=temp->prev;
    }
cout<<"NULL"<<endl;
}

void insertAtPos(int pos,int val,Node* &head, Node* &tail){
    int len = length(head);

    if(pos==1){
        insertAtHead(val,head,tail);
        return;
    }
    else if(pos==len+1){
        insertAtTail(val,head,tail);
        return ;
    }
    else{
        Node*temp=head;
        for(int i=0;i<pos-2;i++){
            temp=temp->next;
        }
         Node *newNode= new Node(val);
         Node* nextNode=temp->next;
         temp->next=newNode;
         newNode->prev=temp;
         newNode->next=nextNode;
         nextNode->prev=newNode;
    }

}
void deleteNode(int pos ,Node* &head, Node* &tail){
    // if DLL is empty
    int len = length(head);
    if(head==NULL && tail==NULL){
        cout<<"empty "<<endl;
        return;
    }
    // single element
    else if (head==tail){
        Node *temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
    }
    //multiple node , but delete first node 
    else if (pos==1){
        Node *temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    else if(pos==len){
          Node *temp=tail;
          tail=tail->prev;
          tail->next=NULL;
          temp->prev=NULL;
          delete temp;
    }
    else{
        
          Node* temp=head;
          for(int i=0;i<=pos-2;i++){
            temp=temp->next;
          }
          Node* prevNode=temp->prev;
          Node* nextNode=temp->next;
          prevNode->next=nextNode;
          nextNode->prev=prevNode;
          temp->next=NULL;
          temp->prev=NULL;
          delete temp;
        
       

    }
}
bool search(int val,Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main()
{
    // Node *newNode= new Node(10);
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(20,head,tail);
    insertAtHead(200,head,tail);
    // print(head);
    // reversePrint(tail);
    insertAtTail(2,head,tail);
    insertAtTail(0,head,tail);
    // print(head);
    insertAtPos(1,500,head,tail);
    // print(head);
     insertAtPos(3,700,head,tail);
    //  print(head);
     insertAtPos(7,900,head,tail);
     print(head);

     deleteNode(7,head,tail);
     print(head);
    
}