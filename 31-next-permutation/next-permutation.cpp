class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int sz = nums.size();
        if(next_permutation(nums.begin(),nums.end())){
            cout<<"[";
            for(int i=0;i<sz;i++){
                cout<<nums[i];
                if(i != sz-1) cout<<",";
            }
            cout<<"]";
        }
    }
};