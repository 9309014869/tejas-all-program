#include <stdio.h>
#include<stdlib.h>
#define null 0
struct node{
    int data;
    struct node*next;
}*head;
void create(){
  struct node *ptr=(struct node*)malloc(sizeof(struct node));
  struct node*temp;
  head=0;
  printf("enter the value");
  scanf("%d",&ptr->data);
  if(head==0){
      head=temp=ptr;
  }
  else{
      ptr->next=null;
      temp->next=ptr;
      temp=ptr;
  }
  temp->next=head;
}
void  display(){
  if(head==null){
      printf("the empty");
  }
  else{
      struct node*temp=head;
      while(temp->next!=head){
          printf("%d",temp->data);
          temp=temp->next;
          
      }
  }
}


int main() {
    int choise;
    while(1){
        printf("enter the number 1 to create\tenter the number2\n");
        scanf("%d",&choise);
        switch(choise){
            case 1:
            {
              create();
              break;
            }
            case 2:{
                display();
                break;
            }
        }
    }
    return 0;
}
