#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal
void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);

    // Traverse root
    printf("%d -> ", root->key);

    // Traverse right
    inorder(root->right);
  }
}

// Insert a node
struct node *insert(struct node *root, int key) {
  // Return a new node if the tree is empty
  if (root == NULL) 
  {
  return newNode(key);
}
  // Traverse to the right place and insert the node
  else if (key < root->key){
  
    root->left = insert(root->left, key);
  }else{
  
    root->right = insert(root->right, key);
}
  return root;
} 
// Driver code
int main() {
  struct node *root = NULL;
  root = insert(root, 8);
  root = insert(root, 13);
  root = insert(root, 1);
  root = insert(root, 56);
  root = insert(root, 70);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  printf("Inorder traversal: \n");
  inorder(root);
  printf("\n(in BST inorder traversal arranges the number i n)");
}
