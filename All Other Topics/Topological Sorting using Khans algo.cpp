#include <bits/stdc++.h>

using namespace std;


void bfs(vector<int>adj[],int indegree[],int src){
    queue<int>Q;

    Q.push(src);
    while(!Q.empty()){
        int x=Q.front();
        cout<<x<<" ";
        Q.pop();
        for(int i=0;i<adj[x].size();i++){
            indegree[adj[x][i]]--;
            if(indegree[adj[x][i]]==0){
                Q.push(adj[x][i]);
            }
        }
    }
}

int main()
{
    int v;
    cin>>v;
    int edges;
    cin>>edges;
    vector<int>adj[v];
    int indegree[v];
    for(int i=0;i<v;i++){
        indegree[i]=0;
    }

    while(edges--){
        int a,b;
        cin>>a;
        cin>>b;
        adj[a].push_back(b);
        indegree[b]++;
    }
    int src=1;
    bfs(adj,indegree,src);

    return 0;
}
