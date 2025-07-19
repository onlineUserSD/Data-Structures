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

Node* removeNode(Node* head,int k){
    if(head==NULL)return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete(temp);
        return head;
    }

    Node* temp=head;
    Node* prev=NULL;
    int cnt=0;
    while(temp!=NULL){
       cnt++;
       if(cnt==k){
        prev->next=prev->next->next;
        delete(temp);
        break;
       }
       prev=temp;
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
    //print(head);
    head=removeNode(head,6);
    print(head);

}

