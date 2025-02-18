class Solution {
public:
    int m,n,cnt=0;
    bool flag;
    bool vis[505][505];
    bool valid(int i,int j){
        if(i<0||i>=m||j<0||j>=n)
            return false;
        return true;
    }
    vector<pair<int,int>> udlr = {{-1,0},{1,0},{0,-1},{0,1}};
    void dfs(int si,int sj,vector<vector<int>>& grid1, vector<vector<int>>& grid2){
        vis[si][sj]=true;
        if(grid1[si][sj]==0){
            flag = false;
        }
        for(int i=0;i<4;i++){
            int ci = si + udlr[i].first;
            int cj = sj + udlr[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid2[ci][cj]==1){
                vis[ci][cj] = true;
                dfs(ci,cj,grid1,grid2);
            }
        }
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        m = grid1.size();
        n = grid1[0].size();
        memset(vis,false,sizeof(vis));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(!vis[i][j] && grid2[i][j]==1){
                    flag = true;
                    dfs(i,j,grid1,grid2);
                    if(flag)
                        cnt++;
                }
        return cnt;
    }
};