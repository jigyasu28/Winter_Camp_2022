// Checking for palindrome in linkedlist.
#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Node
{
    char data;
    Node *next;
    Node(char c)
    {
        data = c;
        next = NULL;
    }
};

Node *head = NULL, *last = NULL, *head2 = NULL;

void insert(char c)
{
    Node *temp = new Node(c);
    if (head == NULL)
    {
        head = temp;
        last = head;
        return;
    }
    last->next = temp;
    last = temp;
}

void reverseLinkedList()
{
    if (head == NULL)
        return;
    Node *prev = NULL, *curr = head;
    while (curr)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    head2 = prev;
}

int32_t main()
{
    // Code here.
    string str1, str2 = "";
    cin >> str1;
    for (int i = 0; i < str1.size(); i++)
    {
        insert(str1[i]);
    }
    reverseLinkedList();
    Node *temp = head2;
    while (temp)
    {
        str2 += temp->data;
        temp = temp->next;
    }
    if (str1 == str2)
        cout << "Palindrome" << '\n';
    else
        cout << "Not Palindrome" << '\n';
    return 0;
}