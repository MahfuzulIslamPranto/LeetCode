class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> fre;
        for(int i=0;i<nums.size();i++){
            fre[nums[i]]++;
        }
        vector<int> ans;
        for(auto k:fre){
            if(k.second > floor(nums.size()/3)) ans.push_back(k.first);
        }
        return ans;
    }
};