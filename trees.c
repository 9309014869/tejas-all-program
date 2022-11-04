#include <stdio.h>
#include<stdlib.h>
#define null 0
struct node{
    int data;
    struct node*left,*right;
}*root;
struct node*create(){
    struct node *n=(struct node*)malloc(sizeof(struct node));
    return n;
}

int main() {
    int val,val1;
  struct node*temp;
  scanf("%d",&val);
  root->data=val;
  while(1)
  {
      temp=root;
      scanf("%d",&val1);
      label:
      if(temp->data>val){
          if(temp->left==null){
              temp->left=create();
              temp->left->data=val1;
          }
          else{
              temp->left=temp;
              goto label;
          }
      }
      else{
          if(temp->right==null){
              temp->right=create();
              temp->right->data=val1;
          }
          else{
              temp->right=temp;
              goto label;
          }
      }
      
      
  }
  
    return 0;
}
