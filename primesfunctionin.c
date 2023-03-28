/* Online C Compiler and Editor */
#include<stdio.h>
#include<stdlib.h>
int spanning[N][N];
void primes(int G[][N],int N);
void primes(int G[][N],int N){
    int cost[N][N],u,v,distace[N],from[N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(G[i][j]==0){
                cost[i][j]=INF;
            }
            else{
                cost[i][j]=G[i][j];
                spanning[i][j]=0;
            }
            distace[0]=0;
            visited[0]=1;
            for(i=1;i<N;i++){
                distance[i]=cost[0][i];
                form[i]=0;
                visited[i]=0;
            }
            int min=0;
            n=N-1;
            while(n>0){
                min=INF;
                for(i=0;i<N;i++){
                    if(visited[i]==0&& distance[i]<min){
                        v=i;
                        min=distance[i]
                    }
                }
                u=from[v];
                spanning[u][v]=distance[v];
                spanning[v][u]=distace[v];
                n--;
                visited[v]=1;
                for(i=0;i<N;i++){
                    if(visited[i]==0&& cost[v]<distance[i])
                    {
                        distance[i]=cost[i][v];
                        form[i]=v;
                    }
                    b=min=cost[u][v];
                    form[i]=v;
                }
            }
        }
    }
}
