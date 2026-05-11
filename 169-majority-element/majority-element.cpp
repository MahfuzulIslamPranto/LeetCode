class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> fre;
        for(int i=0;i<nums.size();i++){
            fre[nums[i]]++;
        }
        int mxElement = 0;
        int number = 0;
        for(auto f : fre){
            if(f.second > mxElement){
                mxElement = f.second;
                number = f.first;
            }
        }
        return number;
    }
};