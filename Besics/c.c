#include <stdio.h> 
#include <stdlib.h> 
 
// Structure for a BST node 
struct Node { 
    int key; 
    struct Node *left, *right; 
}; 
 
// Create a new node 
struct Node* newNode(int item) { 
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
 
// Insert a new node with a given key 
struct Node* insert(struct Node* node, int key) { 
    // If the tree is empty, return a new node 
    if (node == NULL) return newNode(key); 
 
    // Otherwise, recur down the tree 
    if (key < node->key) 
        node->left = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key); 
 
    // return the (unchanged) node pointer 
    return node; 
} 
 
// Search a given key in a given BST 
struct Node* search(struct Node* root, int key) { 
    // Base Cases: root is null or key is present at root 
    if (root == NULL || root->key == key) 
        return root; 
 
    // Key is greater than root's key 
    if (root->key < key) 
        return search(root->right, key); 
 
    // Key is smaller than root's key 
    return search(root->left, key); 
//BCA – 205 Data structure    1323443 
} 
 
// Inorder traversal of the tree 
void inorder(struct Node* root) { 
    if (root != NULL) { 
        inorder(root->left); 
        printf("%d ", root->key); 
        inorder(root->right); 
    } 
} 
 
// Driver program to test the functions 
int main() { 
    struct Node* root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
 
    printf("Inorder traversal of the BST: "); 
    inorder(root); 
    printf("\n"); 
 
    // Search for a key in the BST 
    int key = 60; 
    struct Node* found = search(root, key); 
    if (found) 
        printf("%d found in the BST\n", key); 
    else 
        printf("%d not found in the BST\n", key); 
        printf("Rohit kumar Roll no: 1323448\n"); 
    
}