#include <bits/stdc++.h>
using namespace std;
struct node
{
    // public:

    int data;
    struct node *left;
    struct node *right;
};
node *newNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
void printInorder(struct node *node)
{
    if (node == NULL)
        return;

    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Inorder transversal of binary tree is \n";
    printInorder(root);

    return 0;
}