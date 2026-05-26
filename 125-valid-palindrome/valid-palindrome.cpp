class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto ch:s){
            if(isalnum(ch)) str+=tolower(ch);
        }
        int sz = str.size();
        vector<char> a;
        for(auto c:str) a.push_back(c);

        vector<char> b=a; //coping all the elements from a
        reverse(b.begin(),b.end());
        if(a==b) return true;
        else return false;
    }
};