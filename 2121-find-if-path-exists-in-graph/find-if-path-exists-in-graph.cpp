class Solution {
public:
    vector<int> adj_list[200005];
    bool vis[200005];
    void dfs(int source){
        vis[source] = true;
        for(int child : adj_list[source]){
            if(!vis[child])
                dfs(child);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        for(int i=0;i<edges.size();i++){
            int n = edges[i][0];
            int m = edges[i][1];
            adj_list[n].push_back(m);
            adj_list[m].push_back(n);
        }
        memset(vis,false,sizeof(vis));
        dfs(source);
        if(vis[destination]) return true;
        else return false;
    }
}; 