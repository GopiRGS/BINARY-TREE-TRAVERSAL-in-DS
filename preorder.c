#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode(int data){
    struct node *node = (struct node *)malloc (sizeof(struct node));
    node -> data = data;
    node -> left = node -> right = NULL;
    return node;
};
void postorder(struct node *root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);

}
int main(){
    struct node *root = newnode(2);
    root -> left = newnode(1);
    root -> right= newnode(3);
    root -> left ->left = newnode(7);
    root -> left -> right = newnode(67);
    postorder(root);
}
