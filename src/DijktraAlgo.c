#include<stdio.h>
#include<limits.h>
#define MAX 1000
#define INF INT_MAX
int minDist(int n,int dist[n],int vis[n]){
    int min=INT_MAX;
    int minIdx=-1;
    for(int i=0;i<n;i++){
        if(!vis[i] && dist[i]<min){
            min=dist[i];
            minIdx=i;
        }
    }
    return minIdx;
}



void dijktra(int n,int graph[n][n],int src){
    int vis[n];
    int dist[n];
    //ini
    for(int i=0;i<n;i++){
        dist[i]=INF;
        vis[i]=0;
    }

    dist[src]=0;


    for(int count=0;count<n-1;count++){
        int u=minDist(dist,vis,n);
        vis[u]=1;

        for(int v=0;v<n;v++){
            if(!vis[v] && graph[u][v]!=0 && dist[u]!=INF && dist[u]+graph[u][v]<dist[v]){
                dist[v]=dist[u]+graph[u][v];
            }
        }
    }

    //print
    printf("Vertext distance from source");
    for(int i=0;i<n;i++){
        printf("%d\t\t%d",i,dist[i]);
    }
}


int main(){
    int n;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter src : ");
    int src;
    scanf("%d",&src);

    
}