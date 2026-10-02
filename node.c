
#include <stdio.h>
#define INF 99999

// Shortest path using Dijkstra's algorithm (easy version)
int main() {
    int n, src;
    int graph[10][10], dist[10], visited[10];

    printf("Nodes: ");
    scanf("%d", &n);
    printf("Adjacency matrix (0=no edge):\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &graph[i][j]);

    printf("Source node (0-%d): ", n-1);
    scanf("%d", &src);

    // Init
    for(int i=0;i<n;i++) dist[i]=INF, visited[i]=0;
    dist[src]=0;

    // Dijkstra
    for(int c=0;c<n;c++) {
        int u=-1;
        for(int i=0;i<n;i++)
            if(!visited[i] && (u==-1 || dist[i]<dist[u])) u=i;
        if(dist[u]==INF) break;
        visited[u]=1;
        for(int v=0;v<n;v++)
            if(graph[u][v] && dist[u]+graph[u][v]<dist[v])
                dist[v]=dist[u]+graph[u][v];
    }

    printf("\nShortest distances from %d:\n", src);
    for(int i=0;i<n;i++)
        if(dist[i]==INF) printf("To %d: No path\n",i);
        else printf("To %d: %d\n",i,dist[i]);
    return 0;
}
