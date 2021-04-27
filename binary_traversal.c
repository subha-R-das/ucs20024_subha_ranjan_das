#include <stdio.h>  
#include <stdlib.h>  
   
//Represent a node of binary tree  
struct node{  
    int item;  
    struct node *left;  
    struct node *right;  
};  
   
   
//createNode() will create a new node  
struct node* createNode(int data){  
    //Create a new node  
    struct node *newNode = malloc(sizeof(struct node));  
    //Assign data to newNode, set left and right children to NULL  
    newNode->item= data;  
    newNode->left = NULL;  
    newNode->right = NULL;  
      
    return newNode;  
}  
   
//insertleft() will add new node to the left of binary tree  
struct node* insertLeft(struct node* root, int data) {
  root->left = createNode(data);
  return root->left;
}
// Insert on the right of the node
struct node* insertRight(struct node* root, int data) {
  root->right = createNode(data);
  return root->right;
}
//inorder() will perform inorder traversal on binary tree  
void inorderTraversal(struct node *root) {  
        
    //Check whether tree is empty  
    if(root == NULL){  
        printf("Tree is empty\n");  
          return;  
     }  
    else {  
            
        if(root->left!= NULL)  
            inorderTraversal(root->left);  
        printf("%d ->", root->item);  
        if(root->right!= NULL)  
          inorderTraversal(root->right);  
            
    }        
}  
void preorderTraversal(struct node *root) {  
        
    //Check whether tree is empty  
    if(root == NULL){  
        printf("Tree is empty\n");  
          return;  
     }  
    else {  
       printf("%d ->", root->item);
        if(root->left!= NULL)  
            preorderTraversal(root->left);    
        if(root->right!= NULL)  
          preorderTraversal(root->right);  
            
    }        
} 
void postorderTraversal(struct node *root) {  
        
    //Check whether tree is empty  
    if(root == NULL){  
        printf("Tree is empty\n");  
          return;  
     }  
    else {  
            
        if(root->left!= NULL)  
            postorderTraversal(root->left);  
        if(root->right!= NULL)  
          postorderTraversal(root->right);
		  printf("%d ->", root->item); 
            
    }        
}           
int main()  
{  
    struct node* root = createNode(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertLeft(root->left, 4);
  insertRight(root->left, 5);

  printf("Inorder traversal \n");
  inorderTraversal(root);  
  printf("\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\nPostorder traversal \n");
  postorderTraversal(root); 
    return 0;
}
