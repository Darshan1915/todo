#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};


void preorder_traversal (node *root)
{
  if (root == NULL)
    return;
  // Print the data
  cout << root->data << " ";
  // Visit Left subtree
  preorder_traversal (root->left);
  // Visit right subtree
  preorder_traversal (root->right);
}
void inorder_traversal (node *root)
{
  if (root == NULL)
    return;
  // Visit Left subtree
  inorder_traversal (root->left);
  // Print the data
  cout << root->data << " ";
  // Visit right subtree
  inorder_traversal (root->right);
}
void postorder_traversal (node *root)
{
  if (root == NULL)
    return;
  // Visit Left subtree
  postorder_traversal (root->left);
  // Visit right subtree
  postorder_traversal (root->right);
  // Print the data
  cout << root->data << " ";
}


int main(){
    node *root = new node(1);

    root->left = new node(2);
    root->right = new node(3);

    root->left->left  = new node(4);
    root->right->right = new node(5);

    preorder_traversal (root);
    cout<<endl;
    inorder_traversal(root);
    cout<<endl;
    postorder_traversal(root);

    return 0;
}




/*
void preorder_traversal (Tree * root)
{
  if (root == NULL)
    return;
  // Print the data
  cout << root->data << " ";
  // Visit Left subtree
  preorder_traversal (root->left);
  // Visit right subtree
  preorder_traversal (root->right);
}

void inorder_traversal (Tree * root)
{
  if (root == NULL)
    return;
  // Visit Left subtree
  inorder_traversal (root->left);
  // Print the data
  cout << root->data << " ";
  // Visit right subtree
  inorder_traversal (root->right);
}

void postorder_traversal (Tree * root)
{
  if (root == NULL)
    return;
  // Visit Left subtree
  postorder_traversal (root->left);
  // Visit right subtree
  postorder_traversal (root->right);
  // Print the data
  cout << root->data << " ";
}*/