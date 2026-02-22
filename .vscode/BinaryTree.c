#include<stdio.h>
#include<stdlib.h>

struct Node{
    int key;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int item){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key=item;
    node->left=node->right=NULL;
    return node;
}

struct Node* insert(struct Node* node, int key){
    if(node==NULL){
        return newNode(key);
    }
    if(key<node->key){
        node->left=insert(node->left,key);
    }
    else if(key>node->key){
        node->right=insert(node->right,key);
    }
    return node;
}

void print(struct Node* root){
    if(root!=NULL){
        print(root->left);
        printf("%d->",root->key);
        print(root->right);
    }
}

int main(){
    struct Node* root=NULL;
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,5);
    root=insert(root,10);
    root=insert(root,15);
    root=insert(root,25);
    root=insert(root,30);
    print(root);
    
    return 0;
}

