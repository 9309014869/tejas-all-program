/* Online C Compiler and Editor */
#include <stdio.h>
#include<stdlib.h>
int visited[Max],A[MAX][Max],queue[Max],rear=-1;front=-1;
void bfs(int i);
void enqueu(int x);
void dequeu();

int main()
{
  
}
void enqueu(int x){
    if((rear==Max)){
        printf("overflow");
    }else{
        rear++;
        queue[rear]=x;
    }
}
void deque(){
    if(rear==-1){
        printf("underflow");
    }
    else{
        front++;
       int x=queue[front];
       printf("deleted=%d",x);
    }
}
int isEmpty(){
    if((rear==-1)&&(front==-1)){
        return 1;
    }
    else{
        return 0;
    }
}
void bfs(int i){
    int u;
    
    printf("%d",i);
    visited[i]=1;
    enqueu(i);
    while(!isEmpty()){
        u=deque();
        for(int v=1;v<=MAX;v++){
            if(A[u][v]==1 && visited[v]==0){
                printf("%d",v);
                visited[v]=1;
                enqueu(v);
            }        }
        
    }
}
