class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        for(char c1:s){
            if(c1=='#'){
                if(!st1.empty())
                    st1.pop();
            }
            else st1.push(c1);
        }
        stack<char> st2;
        for(char c2: t){
            if(c2=='#'){
                if(!st2.empty())
                    st2.pop();
            }
            else st2.push(c2);
        }
        return st1==st2;
    }
};