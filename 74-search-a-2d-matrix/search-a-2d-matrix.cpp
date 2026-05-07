class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int m = matrix.size();
       int n = matrix[0].size();
       int l= 0;
       int h = m*n -1;
       while(l<=h){
        int mid = l + (h-l)/2;
        int midRow = mid/n;
        int midCol = mid%n;
        if(matrix[midRow][midCol] == target) return true;
        else if(matrix[midRow][midCol] < target) l = mid + 1; //assume, target position = last index
        else h = mid -1;
       }
       return false;
    }
};