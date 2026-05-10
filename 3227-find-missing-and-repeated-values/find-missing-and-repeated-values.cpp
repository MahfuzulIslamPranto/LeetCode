class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                ans.push_back(grid[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        int mx = *max_element(ans.begin(),ans.end());
        int mn = *min_element(ans.begin(),ans.end());
        vector<int> result;
        vector<int> fre(100005,0);
        for(int i=0;i<ans.size();i++){
            fre[ans[i]]++;
        }
        for(int i=mn;i<=mx;i++){
            if(fre[i]>1) result.push_back(i);
        }
        int k = ans.size();
        int r = (k*(k+1))/2;
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        int sum=0;
        for(int i=0;i<ans.size();i++){
            //if(ans[i+1]-ans[i]>1) result.push_back(ans[i]+1);
            sum+=ans[i];
        }
        int final = r - sum;
        result.push_back(final);
        return result;
    }
};