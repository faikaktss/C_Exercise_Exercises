#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left  = nullptr;
    struct Node *right = nullptr;
}

Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = nullptr;
    temp->right = nullptr;
    return temp;
}

Node* insert(int data , Node* root)
{
    if(root == nullptr)
        return newNode(data);
    if(data<root->data)
        root->left = insert(root->left,data);
    else if(data>root->data)
        root->right = insert(root->right,data);
    return root;
}
void printPreorder(struct Node* node)
{
    if(node==nullptr)
        return ;
    cout<<node->data<<" ";
    printPreorder(node->left);
    printPreorder(node->right);
}

void printInorder(struct Node* node)
{
    if(node==nullptr)
        return;
    printInorder(node->left);
    cout<<node->data<<" ";
    printInorder(node->right);
}

void printPostorder(struct Node* node)
{
    if(node==nullptr)
        return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout<<node->data<<endl;
}

int main(void)
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(6);
    root->left->left->right = newNode(7);

    
}