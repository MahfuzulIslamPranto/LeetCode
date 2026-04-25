class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char,int> roman_num = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int total = 0;
        for(int i=0;i<s.length();i++){
            if(i < s.length()-1 && roman_num[s[i]]<roman_num[s[i+1]]){
                total -= roman_num[s[i]];
            }
            else{
                total += roman_num[s[i]];
            }
        }
        return total;
    }
};