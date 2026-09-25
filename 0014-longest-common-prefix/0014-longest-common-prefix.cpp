class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string val = "";
        for(int j = 0 ; j<strs[0].length();j++){
            for(int i = 1 ; i<strs.size();i++){
                if(strs[0][j]!=strs[i][j]){
                    return val;
                }
            }
            val = val + strs[0][j];
        }
        return val;
    }
};