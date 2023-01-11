#include<bits/stdc++.h>
using namespace std;
#define int long long

struct Node{
    int data;
    Node* next=NULL;
    Node(int d){
        data=d;
    }
};

Node* head=NULL;
void insert(int val){
    Node* temp=new Node(val);
    if(head==NULL){
        head=temp;
        return;
    }
    Node* ins=head, * prev=NULL;
    while(ins && ins->data<val){
        prev=ins;
        ins=ins->next;
    }
    temp->next=ins;
    if(prev)prev->next=temp;
    else head=temp;
}

void deleteDuplicate(){
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            Node* del=temp->next;
            temp->next=temp->next->next;
            delete(del);
        }
        else temp=temp->next;
    }
}

int si(Node* head){
   int sz=0;
   Node* temp=NULL;
   temp=head;
   while(temp){
      cout<<temp->data<<" ";
      sz++;
      temp=temp->next;
   }
   cout<<'\n';
   return sz;
}

int32_t main(){
  // Code here.
  int n; cin>>n;
  for(int i=0;i<n;i++){
     int ele; cin>>ele;
     insert(ele);
  }   
  int count=si(head);
  cout<<count<<'\n';
  deleteDuplicate();
  count=si(head);
  cout<<count<<'\n';
  return 0;
}