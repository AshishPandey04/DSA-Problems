#include<iostream>
using namespace std;

class Node{
 public:
    int data ;
    Node* next;

    // constructor 
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};
// return head of new LL after insertion 
Node* insertAtHead(int value , Node* &head , Node* &tail){
    // if LL is empty -> head and tail points to NULL 
    // it means u r creating first node
    if(head== NULL && tail == NULL){
        // create new node 
        Node* newNode=new Node(value);
        // head ko newNode par point and tail ko bhi 
        head = newNode;
        tail=newNode;
    }
    else{
        // LL empty nahi hain 
        // step1 create a newNode by inserting on head ;
        Node* newNode=new Node(value);
        // newNode ke next ko head par point karoo
        newNode->next=head;
        // head ko newNode par point karoo
        head = newNode;

    }
    return head;
}
void insertAtTail(int value,Node* &head,Node* &tail){
    //agr ll empty huaa 
    if(head==NULL && tail==NULL){
        Node* newNode=new Node(value);
        head=newNode;
        tail=newNode;
    }else{
        // LL is not empty 
        Node* newNode=new Node(value);
        tail->next=newNode;
        tail=newNode;


    }

}
void print(Node* &head){
    Node* temp=head;
    // JAB tak temp null ke equal nahi hain print karoo , jaese hi null ke equal huaa means ll khatam hogya 
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



int main(){
    Node* head=NULL;
    Node* tail = NULL;

    insertAtTail(10,head,tail);
    insertAtTail(20,head,tail);
    insertAtTail(30,head,tail);
print(head);


    

//     // LL is empty 
//     head=insertAtHead(10,head, tail);
//     print(head);
//     // LL now have 1 node 
//     // 10->NULL
//     head=insertAtHead(20,head, tail);
//     print(head);
//     // have 2 node 
//     // 20->10->NULL
//    head = insertAtHead(30,head, tail);
//     //30->20->10->NULL

// // print LL 
// print(head);









   // creating node 
    // static memory  or stack memmory
    // Node first ;
   // dynamic memory 
    // Node* first = new Node(10);
    
}