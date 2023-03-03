int vis[10002];
vector<int>graph[10002];

void dfs(int node){
    vis[node]=1;
    
    for(auto x : graph[node]){
        if(!vis[x])
            dfs(x);
    }
}
