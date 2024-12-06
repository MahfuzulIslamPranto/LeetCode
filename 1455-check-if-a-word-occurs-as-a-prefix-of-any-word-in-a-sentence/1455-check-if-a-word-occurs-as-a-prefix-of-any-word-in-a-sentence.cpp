class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
    stringstream ss(sentence);
    string word;

    int position = 0;
    int index = 1;
    bool found = false;

    while(ss>>word)
    {
        if(word.find(searchWord)==0)
        {
            position = index;
            found = true;
            break;
        }
        index++;
    }
    if(found) return position;
    else return -1;
    }
};