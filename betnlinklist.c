#include <stdio.h>
#include<stdlib.h>
#define null 0

struct list{
    int data;
    struct list*next;
    
};
void insrt(struct list *pt){
    while(pt!=0){
        printf("%d\n",pt->data);
        pt=pt->next;
    }
}
struct list *add(struct list *head,int data){
struct list *ptr=(struct list*)malloc(sizeof(struct list));
ptr->data=data;
ptr->next=head;
}
struct list *insterindex(struct list *head,int data,int index){
    struct list *ptr=(struct list*)malloc(sizeof(struct list));
    struct list *p=head;
    int i=0;
    while(i!=index-1){
      p=p->next;
      i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}




int main() {
    struct list *head=(struct list*)malloc(sizeof (struct list));
    struct list *secound=(struct list*)malloc(sizeof (struct list));
    struct list *third=(struct list*)malloc(sizeof (struct list));
    struct list *forth=(struct list*)malloc(sizeof (struct list));
    head->data=78;
    head->next=secound;
    secound->data=56;
    secound->next=third;
    third->data=76;
    third->next=forth;
    forth->data=89;
    forth->next=null;
   // insrt(head);
   head=insterindex(head,87,2);
    //head=add(head,67);
    insrt(head);
    return 0;
}
