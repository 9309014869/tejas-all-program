#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node*insert(struct node *p,int key){
    struct node *t;
    if(p==NULL){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=key;
        t->left=t->right=NULL;
        return t;
    }
    if(key<p->data){
        p->left=insert(p->left,key);
    }
    else if (key>p->data){
        p->right=insert(p->right,key);
    }
    return p;
}
void print(struct node *p){
    if(p==NULL){
        return p;
    }
    else{
        printf("%d",p->data);
        print(p->left);
        print(p->right);
    }
}



int main() {
    struct node *root;
    root=insert(root,30);
    insert(root,20);
    insert(root,40);
print(root);
    return 0;
}
