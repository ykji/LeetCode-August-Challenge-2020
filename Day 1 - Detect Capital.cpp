class Solution {
public:
    bool detectCapitalUse(string word) {
        int x=0;
        for(auto i:word){
            if(i>=65 && i<=90)
                ++x;
        }
        if(x==1 && !(word[0]>=65 && word[0]<=90))  return false;
        if(x>1 && x!=word.length()) return false;
        return true;
    }
};
