class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        int sz = nums.size();
        k = k%sz;
        for(int i=sz-k;i<sz;i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<sz-k;i++){
            ans.push_back(nums[i]);
        }
        nums = ans;
    }
};