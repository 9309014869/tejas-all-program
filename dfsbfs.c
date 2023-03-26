/* Online C Compiler and Editor */
#include <stdio.h>
#include<stdio.h>
#define MAX 7
struct Node{
    int data;
    struct Node* next;
}*front=NULL,rear=NULL;
void enqueu(int x){
    struct Node*t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL){
        printf("queue is Full");
    }
    else{
        t->data=x;
        t->next=NULL;
        if(t==NULL)
        front=rear=t;
        else
        rear->next=t;
        rear=t;
    }
}
int dequeue(){
    int x=-1;
    struct Node *t;
    if(front==NULL){
     printf("queue is empty")
    }
    else{
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
    }
    int isEmpty(){
        return front==NULL;
    }
    void BFS(int G[][MAX],int start,int n){
        int i=start;
        int visited[MAX]={0};
        print("%d",i);
        visited[i]=1;
        enqueu(i);
        while(!isEmpty())
        {
            i=dequeue();
            for(j=1;j<n;j++){
                if(G[i][j]==1&&visited[j]==0){
                    printf("%d",j);
                    visited[j]=1;
                    enqueu(j);
                }
            }
        }
        
    }
     
void dfs(int G[][MAX],int start,int n){
    start int visited[MAX]={0};
    if(visted[start]==0){
        printf("%d",start);
        for(j=1;j<n;j++){
            if(G[start][j]==1&& visited[j]==0){
                dfs(G,j,7)
            }
        }
    }
}
int main()
{
    printf("Hello, World!\n");

    return 0;
}
