class Solution {
public:
    int m,n,cnt;
    bool vis[3005][3005];
    vector<pair<int,int>> udlr = {{-1,0},{1,0},{0,-1},{0,1}};
    bool valid(int i,int j){
        if(i<0||i>=m||j<0||j>=n)
            return false;
        return true;
    }
    void dfs(int si,int sj,vector<vector<char>>& grid){
        vis[si][sj]=true;
        for(int i=0;i<4;i++){
            int ci = si + udlr[i].first;
            int cj = sj + udlr[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='1'){
                vis[ci][cj]=true;
                dfs(ci,cj,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        memset(vis,false,sizeof(vis));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(!vis[i][j] && grid[i][j]=='1'){
                    cnt++;
                    dfs(i,j,grid);
                }
        return cnt;
    }
};