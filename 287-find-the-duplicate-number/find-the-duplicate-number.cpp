class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int mx = *max_element(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        vector<int> fre(100005,0);
        for(int i=0;i<nums.size();i++){
            fre[nums[i]]++;
        }
        for(int i=mn;i<=mx;i++){
            if(fre[i]>1){
                return i;
            }
        }
        return 0;
    }
};