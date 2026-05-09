class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;

        for(int i=0;i<intervals.size();i++){
            if(v.empty()){
                v.push_back(intervals[i]);
            }
            else if(intervals[i][0] <= v.back()[1]){
                v.back()[1] = max(v.back()[1], intervals[i][1]);
            }
            else{
                v.push_back(intervals[i]);
            }
        }
        return v;
    }
};