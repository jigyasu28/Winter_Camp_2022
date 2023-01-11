#include <bits/stdc++.h>
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

Node* bst=NULL;
void preOrder(Node* root, vector<int>& v){
    if(!root)
      return;
    v.push_back(root->data);
    preOrder(root->left, v);
    preOrder(root->right, v);
}

void inOrder(Node* root){
    // cout<<"check1\n";
    if (!root)
      return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

Node* makeBst(Node* root, int val){
    // cout<<"check2 "<<'\n';
    if(!root){
        // root=new Node(val);
        // cout<<"check "<<val<<'\n';
        return new Node(val);
    }
    if(val>root->data){
        root->right=makeBst(root->right, val);
    }
    else{
        root->left=makeBst(root->left, val);
    }
    return root;
}

int32_t main()
{
    // Code here.
    Node *root = new Node(90);
    root->left = new Node(95);
    root->right = new Node(25);
    root->left->left = new Node(35);
    root->left->right = new Node(48);
    root->right->left = new Node(150);
    root->right->right = new Node(1);
    vector<int> nodes;
    preOrder(root, nodes);
    bst=new Node(nodes[0]);
    Node* temp=bst;
    for(int i=1;i<nodes.size();i++){
        temp= makeBst(temp, nodes[i]);
        cout<<'\n';
    }
    inOrder(temp);
    return 0;
}