#include <stdio.h>
#include<stdlib.h>
#define null 0

struct list{
    int data;
    struct list*next;
    
};
void insrt(struct list *pt){
    while(pt!=0){
        printf("%d",pt->data);
        pt=pt->next;
    }
}
struct list *add(struct list *ptr,int data){
struct list ptr=(struct list*)malloc(sizeof(struct list));
ptr->data=data;
ptr->next=head;
}



int main() {
    struct list *head=(struct list*)malloc(sizeof (struct list));
    struct list *secound=(struct list*)malloc(sizeof (struct list));
    struct list *third=(struct list*)malloc(sizeof (struct list));
    head->data=78;
    head->next=secound;
    secound->data=56;
    secound->next=third;
    third->data=76;
    third->next=null;
    insrt(head);
    head=add(head,67);
    insrt(head);
    return 0;
}
