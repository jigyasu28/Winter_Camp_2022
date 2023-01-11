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

void preOrder(Node *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root)
{
    if (!root)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (!root)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        cout << q.front()->data << " ";
        if (q.front()->left)
            q.push(q.front()->left);
        if (q.front()->right)
            q.push(q.front()->right);
    }
}

void countLeafNodeDfs(Node *root, int &count)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        count++;
        return;
    }
    countLeafNodeDfs(root->left, count);
    countLeafNodeDfs(root->right, count);
}

void countLeafNodeBfs(Node *root, int &count)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        if (!q.front()->left && !q.front()->right)
            count++;
        if (q.front()->left)
            q.push(q.front()->left);
        if(q.front()->right)
            q.push(q.front()->right);
        q.pop();
    }
}

void checkSymmetric(Node* root1, Node* root2, bool& symmetric){
    
    
}

int32_t main()
{
    // Code here.
    //           5
    //        6      7
    //     8    NA  9  10
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right=new Node(4);
    root->right->left = new Node(4);
    root->right->right = new Node(3);
    preOrder(root);
    cout << '\n';
    inOrder(root);
    cout << '\n';
    postOrder(root);
    cout << '\n';
    levelOrder(root);
    cout << '\n';
    int count = 0;
    countLeafNodeDfs(root, count);
    cout << count << '\n';
    count = 0;
    countLeafNodeBfs(root, count);
    cout<<count<<'\n';
    bool symmetric=true;
    checkSymmetric(root->left, root->right, symmetric);
    return 0;
}