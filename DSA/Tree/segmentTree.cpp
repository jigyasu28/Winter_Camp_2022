#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;
    Node(int val){
      data=val;
    }
};

void segmentTree(Node* root, vector<int>& arr, int start, int end){
    if(!root)
      return;
    // cout<<"check "<<'\n';
    if((end-start)==0){
        // cout<<"check "<<end<<" "<<start<<" "<<arr[start]<<'\n';
        root=new Node(arr[start]);
        return;
    }
    int mid=(start+end)/2, sum1=0, sum2=0;
    for(int i=start;i<mid;i++)
      sum1+=arr[i];
    for(int i=mid;i<end;i++)
      sum2+=arr[i];
    // cout<<sum1<<" "<<mid<<" "<<sum2<<'\n';
    root->left=new Node(sum1);
    root->right=new Node(sum2);
    // cout<<start<<" check "<<mid<<" "<<end<<'\n';
    if((mid-start)>1)
      segmentTree(root->left, arr, start, mid);
    if((end-mid)>1)
      segmentTree(root->right, arr, mid+1, end);
}

void preOrder(Node* root){
    if(!root)
      return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int32_t main(){
   // Code here.
   int sum=0;
   vector<int> arr={1, 3, 4, 7};
   for(auto it: arr)
     sum+=it;
   Node* root=new Node(sum);
   segmentTree(root, arr, 0, arr.size());
   preOrder(root);
   return 0;
}