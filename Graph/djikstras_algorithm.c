#include <stdio.h>
#include <stdlib.h>

int adj_wmat[30][30]={0}, d[30], pi[30], v, e, q, s;
int Q[30];

void initialize_single_source(){
    for(int i=1; i<=v; ++i){
        d[i] = INT_MAX;     // distance from source to other vertices at first is infinity = INT_MAX
        pi[i] = 0;          // pi array holds the predecessor vertices for the vertices corresponding to the indices
    }
    d[s] = 0;       // distance from source to itself is 0
}

int Extract_min(){
    int min_d = INT_MAX, i=1, min_v;
    while(i!=v+1){
        if(d[i] < min_d && Q[i] == 1){
            min_d = d[i];
            min_v = i;
        }
        ++i;
    }
    Q[min_v] = 0;   // removing the extracted vertex from Q
    return min_v;
}

void Relax(int u, int v){
    if(d[v] > d[u] + adj_wmat[u][v]){
        d[v] = d[u] + adj_wmat[u][v];
        pi[v] = u;
    }
}

void Dijkstra_algo(){
    int u, i, j;
    initialize_single_source();
    int S[30] = {0};        // the set S contains the vertices whose shortest paths from the source has been found
    for(i=1; i<=v; ++i) Q[i] = 1;       //  Q is the original set of vertices from which vertices with shortest path are extracted

    int q = v;
    while(q--){
        u = Extract_min();
        S[u] = 1;           // adding the extracted vertex from Q to S
        for(j=1; j<=v; ++j)
            if(adj_wmat[u][j])
                Relax(u, j);
    }
}

int main()
{
    int i, v1, v2, w, choice;
    printf("Do you want to work with:\n1. Directed Graph\n2. Undirected Graph\nEnter your choice: ");
    scanf("%d", &choice);
    printf("How many number of vertices do you want to enter: ");
    scanf("%d", &v);
    printf("\nHow many number of edges do you want to enter: ");
    scanf("%d", &e);

    printf("\nEnter %d edges and their corresponding edge weights(only positive edge weights): \n", e);
    for(i=1; i<=e; ++i){
        printf("Edge %d: ", i);
        scanf("%d %d", &v1, &v2);
        printf("Edge weight: ");
        scanf("%d", &w);
        if(choice == 1)
            adj_wmat[v1][v2] = w;
        else
            adj_wmat[v1][v2] = adj_wmat[v2][v1] = w;
    }

    printf("\nEnter the source from which the shortest paths have to be calculated: ");
    scanf("%d", &s);

    Dijkstra_algo();

    printf("\n\nThe shortest paths from the single source %d are: ", s);
    for(i=1; i<=v; ++i)
        if(i != s)
            printf("\nDistance %d --> %d : %d\tPrevious Vertex : %d", s, i, d[i], pi[i]);

    return 0;
}
