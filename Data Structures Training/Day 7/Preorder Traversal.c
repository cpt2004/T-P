#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void preorder(struct node *root) {
    if (root == NULL)
        return;
    printf(" %d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
int main() {
    struct node *root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left = createNode(60);
    root->right->right = createNode(70);
    printf("Preorder traversal of binary tree is: ");
    preorder(root);
    return 0;
}