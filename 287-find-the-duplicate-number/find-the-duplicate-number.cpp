class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int mx = *max_element(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        vector<int> fre(100005,0);
        for(int i=0;i<nums.size();i++){//you are playing with indicies
            fre[nums[i]]++;
        }
        for(int i=mn;i<=mx;i++){ // your're playing with elements. So you have to return elements which is i
            if(fre[i]>1){
                return i;
            }
        }
        return 0;
    }
};