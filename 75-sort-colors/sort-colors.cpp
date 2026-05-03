class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans;
        int c1 = 0;
        int c2 = 0;
        int c3 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                c1++;
            } else if (nums[i] == 1) {
                c2++;
            } else {
                c3++;
            }
        }
        nums.clear();
        while (c1--) {
            nums.push_back(0);
        }
        while (c2--) {
            nums.push_back(1);
        }
        while (c3--) {
            nums.push_back(2);
        }
        // cout<<"[";
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i];
        //     if(i != nums.size()-1) cout<<",";
        // }
        // cout<<"]";
    }
};