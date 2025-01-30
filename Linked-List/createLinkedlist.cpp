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
// length of LL
int length(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}

void insertAtPos(int pos,int val,Node* &head, Node* &tail){
    int len=length(head);
    // assume ur giving valid pos;
    if(pos==1){
        insertAtHead(val,head,tail);
    }else if(pos==len+1){
        insertAtTail(val,head,tail);
    }
    else{
        int c=1;
        Node* temp=head;
        while(temp!=NULL){
            if(c==pos-1){
                Node* newNode=new Node(val);
                newNode->next=temp->next;
                temp->next=newNode;
                break;

            }
            c++;
            temp=temp->next;
        }


    }

}
void deleteNode(int pos,Node* &head,Node* &tail){
    // if LL is empty
    if(head==NULL && tail == NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    else if(head==tail){
        Node* temp = head;
        head=NULL;
        tail=NULL;
        delete temp; 
    }else{
        // agar pehla element delete karna ho 
        if(pos==1){
            Node* temp=head;
            head=temp->next;
            temp->next=NULL;
            delete temp;
        }else{
            Node* temp=head;
            int c=1;
            while(temp!=NULL){
                if(c==pos-1){
                    Node* nodeToBeDelete=temp->next;
                    temp->next=nodeToBeDelete->next;
                    nodeToBeDelete->next=NULL;
                    delete nodeToBeDelete;
                    break;
                }
                temp=temp->next;
                c++;
            }
        }
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

int main(){
    Node* head=NULL;
    Node* tail = NULL;

    insertAtTail(10,head,tail);
    insertAtTail(20,head,tail);
    insertAtTail(30,head,tail);
    insertAtPos(2,200,head,tail);
print(head);
deleteNode(3,head,tail);
print(head);
deleteNode(3,head,tail);
print(head);
// bool isFound=search(30,head);
// bool isFound=search(300,head);
// cout<<isFound<<endl;

// int len=length(head);
// cout<<len<<endl;


    

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