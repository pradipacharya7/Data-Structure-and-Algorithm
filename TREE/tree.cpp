#include <iostream> 
#include<conio.h>
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
void display(struct Node* node)
{

	if(node==NULL)
	 return;
	cout<<node->data<<"\t";
	display(node->left);
	display(node->right);
	
}
int main() 
{ 
    struct Node *root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->right = new Node(5); 
    root->right->left = new Node(10);  
    root->right->right = new Node(11); 
    display(root);
    getche();
    return 0;
}
