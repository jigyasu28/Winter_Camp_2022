#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *right = NULL;
    Node *left = NULL;
    Node(int num)
    {
        data = num;
    }
};

bool flag=true;

int checkBalance(Node* root){
    if(!root)
      return 0;
    int left=checkBalance(root->left);
    int right=checkBalance(root->right);
    if(!flag)
      return 0;
    if(abs(left-right)>1)
      flag=false;
    return max(left, right)+1;
}

int32_t main(){
   // Code here.
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(4);
    root->right->right = new Node(3);
    // root->right->right->right = new Node(3);
    // root->right->right->right->right = new Node(3);
    // root->right->right->right->right->right = new Node(3);
    int val=checkBalance(root);
    if(flag)
      cout<<"Balance binary tree "<<'\n';
    else 
      cout<<"Not balanced "<<'\n';
    return 0;
}