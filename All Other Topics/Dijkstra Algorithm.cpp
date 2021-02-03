#include <bits/stdc++.h>

using namespace std;

void bfs(vector<pair<int,int>>adj[],int src,int dist[]){
   priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >mp;

    mp.push({0,src});
    dist[src]=0;

    while(!mp.empty()){
        pair<int,int>pair1=mp.top();
        int x= pair1.second;
        mp.pop();
        for(int i=0;i<adj[x].size();i++){
            pair<int,int>p1=adj[x][i];
            if(dist[x]+ p1.first  < dist[p1.second]){
                dist[p1.second] = dist[x]+ p1.first;
                mp.push(p1);
            }
        }
    }
}
int main()
{
    int V;
    cin>>V;
    int edge;
    cin>>edge;
    vector<pair<int,int>>adj[V+1];

    while(edge--){
        int a;
        int b;
        int c;
        cin>>a;
        cin>>b;
        cin>>c;
        adj[a].push_back({c,b});
        adj[b].push_back({c,a});
    }

    int dist[V+1];

    for(int i=0;i<=V;i++){
        dist[i]=100000000;
    }

    bfs(adj,1,dist);

    for(int i=1;i<=V;i++){
        cout<<dist[i]<<" ";
    }
    cout<<endl;
    return 0;
}
