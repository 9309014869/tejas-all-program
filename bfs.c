/* Online C Compiler and Editor */
#include <stdio.h>
#include <stdlib.h>
#define MAX 4
void bsf(int adj[][MAX],int visited[],int start)
{
    int queue[MAX],rear=-1,front=-1,i,k;
    for(k=0; k<MAX; k++) {
        visited[k]=0;
        queue[++rear]=start;
        ++front;
        visited[start]=1;
        while(rear>=front) {
            start=queue[front++];
            printf("%c",start+65);
            for(i=0; i<MAX; i++) {
                if(adj[start][i]&&visited[i]==0) {
                    queue[++rear]=i;
                    visited[i]=1;
                }
            }
        }

    }
}
int main()
{
    int visited[MAX]= {0};
    int adj[MAX][MAX],i,j;
    int choise,size;
    do {
        printf("\n****MANU****");
        printf("\n Enter 1 to value in graph");
        printf("\n Enter 2 to bfs");
        printf("\n Enter 3 to exite\n");
        scanf("%d",&choise);
        switch(choise) {
        case 1:
            printf("\n Enter the adjency matrix");
            for(i=0; i<MAX; i++) {
                for(j=0; j<MAX; j++) {

                    scanf("%d",&adj[i][j]);

                }
            }
            break;
        case 2:
            printf("BFS Traversal");
            break;
        case 3:
            exit(0);
        }
    } while(choise!=4);

    printf("Hello, World!\n");

    return 0;
}
