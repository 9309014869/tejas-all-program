/* Online C Compiler and Editor */
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int height;
    struct node*left,*right;
};
struct node  *insert(struct node *p,int key){
   struct node *t;
    if(p==NULL){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=key;
        t->left=NULL;
        t->right=NULL;
        return t;
        }
        else{
        if(key<p->data){
            p->left=insert(p->left,key);
        }
        else{
            p->right=insert(p->right,key);
        }
        }
    return p;
}
struct node *search(struct node*p,int key){
    if(p==NULL){
        return ;
    }
    else if(key==p->data){
        return p;
    }
    else{
        if(key<p->data){
            return insert(p->left,key);
        }
        else{
            return insert(p->right,key);
        }
        return -1;
    }
}
void display(struct node*p){
   if(p!=NULL){
        printf("%d\n",p->data);
        display(p->left);
        display(p->right);
    }
}

int main()
{
struct node *root;
    printf("Hello, World!\n");
  root=insert(root,30);
    insert(root,34);
    insert(root,87);
   insert(root,12);
   insert(root,34);
   insert(root,13);
   insert(root,15);
   display(root);
   int r;
  r=search(root,13);
  if(r!=-1){
      printf("the element is found is %d\n",r);
  }
  else{
      printf("the is not found ");
  }
    return 0;
}
