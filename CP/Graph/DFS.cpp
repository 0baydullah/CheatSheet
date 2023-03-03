int vis[10002];
int mx_node,mx,n;
vector<int>graph[10002];

void dfs(int node){
    vis[node]=1;
    
    for(auto x : graph[node]){
        if(!vis[x])
            dfs(x);
    }
}
