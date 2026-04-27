class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto i = unique(nums.begin(),nums.end());
        int k = i - nums.begin();
        cout<<"[";
        for(int j=0;j<nums.size();j++){
            if(j<k){
                cout<<nums[j];
            }
            else{
                cout<<"_";
            }
            if(j !=nums.size()-1){
                cout<<",";
            }
        }
        cout<<"]";
        return k;
    }
};