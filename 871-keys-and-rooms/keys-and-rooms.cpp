class Solution {
public:
    bool visited[1005];
    bool bfs(int src,vector<vector<int>>& rooms){ //rooms as adjacenct_list[] array, here as vector
        queue<int> q;
        q.push(src);
        visited[src]=true;
        int par;
        while(!q.empty()){
            par = q.front();
            q.pop();
            for(int child:rooms[par]){
                if(!visited[child]){
                    q.push(child);
                    visited[child]=true;
                }
            }
        }
        for(int i=0;i<rooms.size();i++){
            if(!visited[i]) return false;
        }
        return true;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        memset(visited,false,sizeof(visited));
        return bfs(0,rooms); //rooms as adjacenct_list[] array, here as vector
    }
};