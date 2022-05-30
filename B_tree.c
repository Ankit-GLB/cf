#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node * create(int n){
    struct node * newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = n;
    newnode ->left = NULL;
    newnode ->right = NULL;
    return newnode;
}

struct node * create_left(struct node * root,int n){
    root ->left = create(n);
    return root ->left;
}
struct node * create_right(struct node * root, int n){
    root -> right = create(n);
    return root -> right;
}

void preorder(struct node * root){
    if(root == NULL){
        return;
    }
    printf("%d\t",root->data);
    preorder(root -> left);
    preorder(root -> right);
}
void postorder(struct node * root){
    if(root == NULL){
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    printf("%d\t",root->data);
}
void inorder(struct node * root){
    if(root == NULL){
        return;
    }
    inorder(root ->left);
    printf("%d\t",root-> data);
    inorder(root -> right);
}
int main(){
    struct node * root = create(1);
    create_left(root,2);
    create_right(root,3);

    create_left(root->left,4);
    create_right(root->left,5);
    create_left(root->right,6);
    create_right(root->right,7);

    //now we perform traversal

    printf("Preorder Traversal:\n");
    preorder(root);
    printf("\n");
    printf("Postorder Traversal:\n");
    postorder(root);
    printf("\n");
    printf("Inorder Traversal:\n");
    inorder(root);
    return 0;
}