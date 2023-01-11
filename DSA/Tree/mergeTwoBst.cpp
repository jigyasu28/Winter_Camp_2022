#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *right = NULL;
    Node *left = NULL;
    Node(int num)
    {
        data = num;
    }
};

void inOrder(Node* root, vector<int>& v){
    // cout<<"check1\n";
    if (!root)
      return;
    inOrder(root->left, v);
    v.push_back(root->data);
    inOrder(root->right, v);
}

void merge(vector<int> v1, vector<int> v2, vector<int>& ans){
    int i=0, j=0;
    for(int k=0;k<(v1.size()+v2.size());k++){
        if(i<v1.size() && j<v2.size()){
            if(v1[i]>v2[j]){
               ans.push_back(v2[j]);
               j++;
            }
            else{
                ans.push_back(v1[i]);
                i++;
            }
        }
        else if(i<v1.size()){
            ans.push_back(v1[i]);
            i++;
        }
        else{
            ans.push_back(v2[j]);
            j++;
        }
    }
}

void findCommon(vector<int> v1, vector<int> v2, set<int>& s){
     int i=0, j=0;
     for(int k=0;k<(v1.size()+v2.size());k++){
          if(i<v1.size() && j<v2.size()){
             if(v1[i]==v2[j]){
                s.insert(v1[i]);
                i++;
                j++;
             }
             else if(v1[i]>v2[j])
                j++;
             else
                i++;
          }
          else 
            break;
     }
}

int32_t main(){
   // Code here.
    Node *root = new Node(9);
    root->left = new Node(4);
    root->right = new Node(12);
    root->left->left = new Node(0);
    root->left->right = new Node(8);
    root->right->left = new Node(11);
    root->right->right = new Node(15);
    Node *root2 = new Node(5);
    root2->left = new Node(3);
    root2->right = new Node(10);
    root2->left->left = new Node(2);
    root2->left->right = new Node(4);
    root2->right->left = new Node(8);
    root2->right->right = new Node(13);
    vector<int> v1, v2, ans;
    set<int> s;
    inOrder(root, v1);
    inOrder(root2, v2);
    merge(v1 ,v2, ans);
    for(auto it: ans)
      cout<<it<<" ";
      cout<<'\n';
    findCommon(v1, v2, s);
    for(auto it=s.begin();it!=s.end();it++)
       cout<<*it<<" ";
    cout<<'\n';
    return 0;
}