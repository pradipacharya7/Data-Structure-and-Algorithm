#include <iostream> 
using namespace std; 
  

struct Node 
{ 
    int data; 
    struct Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
  

void printPostorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
    printPostorder(node->left); 
  
    printPostorder(node->right); 

    cout << node->data << "\t "; 
} 
  
void printInorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
    cout << node->data << "\t"; 
    printInorder(node->left); 
    printInorder(node->right); 
    
     
} 
  
void printPreorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    cout << node->data <<"\t"; 
  
    printPreorder(node->left);  
  
    printPreorder(node->right); 
}  
  
int main() 
{ 
    struct Node *root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->right = new Node(6);
	root->right->left = new Node(10);  
    root->right->right = new Node(11); 
    
    cout << "\nPreorder traversal of binary tree is \n"; 
    printPreorder(root); 
  
    cout << "\nInorder traversal of binary tree is \n"; 
    printInorder(root);  
  
    cout << "\nPostorder traversal of binary tree is \n"; 
    printPostorder(root); 
  
    return 0; 
	
	 
  
} 
