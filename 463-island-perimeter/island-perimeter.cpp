class Solution {
public:
    int cnt;
    int n,m;
    
    bool vis[105][105];
    vector<pair<int,int>> udlr ={{-1,0},{1,0},{0,-1},{0,1}};
    bool valid(int i,int j){
        if(i<0||i>=n||j<0||j>=m)
            return false;
        return true;
    }
    void dfs(int si,int sj,vector<vector<int>>& grid){
        vis[si][sj]=true;
        for(int i=0;i<4;i++){
            int ci = si + udlr[i].first;
            int cj = sj + udlr[i].second;
            if(valid(ci,cj)==false)
                cnt++;
            else if(valid(ci,cj) && grid[ci][cj]==0)
                cnt++;
            else if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]==1)
                dfs(ci,cj,grid);
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        cnt = 0;
        n = grid.size();
        m = grid[0].size();
        memset(vis,false,sizeof(vis));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    dfs(i,j,grid);
                }
            }
        }
        return cnt; 
    }
};