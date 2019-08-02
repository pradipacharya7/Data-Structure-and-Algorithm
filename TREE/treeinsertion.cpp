#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
    int key;
    struct Node *left, *right;
};


struct Node *newNode(int item)
{
    struct Node *temp = new(Node);
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node* insert(struct Node* root, int key)
{
    if (root== NULL) return newNode(key);

    if (key < root->key)
        root->left  = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);

    return root;
}

int search(struct Node* root, int key) 
{ 

    if (root==NULL||root->key == key) 
       return root->key; 
     

    if (root->key < key) 
       return search(root->right, key); 
  
    
    return search(root->left, key); 
} 
struct Node * minValueNode(struct Node* Node) 
{ 
    struct Node* current = Node; 
    while (current && current->left != NULL) 
        current = current->left; 
  
    return current; 
} 



struct Node* deleteNode(struct Node* root, int key) 
{
	    if (root == NULL) return root; 
		if (key < root->key) 
        root->left = deleteNode(root->left, key); 
        else if (key > root->key) 
        root->right = deleteNode(root->right, key);
        else
    { 
        
        if (root->left == NULL) 
        { 
            struct Node *temp = root->right; 
            free(root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            struct Node *temp = root->left; 
            free(root); 
            return temp; 
        } 
        struct Node* temp = minValueNode(root->right); 
        root->key = temp->key; 
        root->right = deleteNode(root->right, temp->key); 
        } 
    return root;



}
void display(struct Node *root)
{
   if(root==NULL)
   return;
   cout<<root->key<<"\t";
	display(root->left);
    display(root->right);

}

int main()
{
  
    struct Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    display(root);
    cout<<"\n Item "<<search(root,80)<<" found.";
    printf("\n Delete 20 \n"); 
    root = deleteNode(root, 20); 
    printf("Inorder traversal of the modified tree \n"); 
    display(root); 
  
    cout<<"\n Delete 30\n"; 
    root = deleteNode(root, 30); 
    cout<<"Inorder traversal of the modified tree \n";
    display(root); 
	cout<<" \n Delete 50 \n";  
    root = deleteNode(root, 50); 
    cout<<"Inorder traversal of the modified tree \n";
    display(root); 
	return 0;
}
