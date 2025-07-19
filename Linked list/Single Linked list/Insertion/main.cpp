#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int value){
        data=value;
        next=NULL;
    }
    Node(int value,Node* next1){
        data=value;
        next=next1;
    }
};

Node* insertHead(Node* head,int val){
    return new Node(val,head);
}


Node* insertTail(Node* head,int val){
    if(head==NULL)return new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
   // Node* newNode=new Node(val);
    temp->next=new Node(val);
    return head;
}

Node* insertk(Node* head,int ele,int k){
    if(head==NULL){
        if(k==1)return new Node(ele);
    }
    if(k==1){
        Node* temp=new Node(ele,head);
        return temp;
    }
    Node* temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        if(c==k-1){
            Node* newNode=new Node(ele);
            newNode->next=temp->next;
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return head;
}


Node* insertBeforeVal(Node* head,int ele,int val){
    if(head==NULL){
         return NULL;
    }
    if(head->data==val){
        Node* temp=new Node(ele,head);
        return temp;
    }
    Node* temp=head;
    
    while(temp->next!=NULL){
         
        if(temp->next->data==val){
            Node* newNode=new Node(ele);
            newNode->next=temp->next;
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return head;
}

Node* arraytoLL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1; i<arr.size(); i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    vector<int>aarr={1,4,3,6,84,3};
    Node* head=arraytoLL(aarr);
    head=insertBeforeVal(head,34,3);
    print(head);

}