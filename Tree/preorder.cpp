// preorder traversal after Creating a tree.

#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d){ // constructor.
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;

    }
};

node* buildTree(node* root){

    cout << "Enter the data:" << endl;
    int data;
    cin >> data;
    root = new node(data); //Creating node.
    // Base case.
    if(data == -1){
        return NULL;
    }
    // Recursive call.
    cout << "Enter data for inserting in left of "<< data << endl;
    root->left = buildTree(root->left); // function calling itself for left child.
    cout << "Enter data for inserting in right of "<< data << endl;
    root->right = buildTree(root->right); // function calling itself for right child.
    return root; // after all calling return root.

}
void preorder(node* root){
    //base case.
    if(root == NULL){
        return ;
    }
    // recursive call..
    cout << root-> data << " "; // N
    preorder(root->left); // L
    preorder(root->right); // R

}

int main() {

    node* root = NULL;

    //CREATING A TREE.
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"preorder traversal: ";
    preorder(root);

    return 0;

}