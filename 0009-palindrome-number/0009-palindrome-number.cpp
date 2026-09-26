class Solution {
public:
    bool isPalindrome(int x) {
        string y= to_string(x);
        for(int i = 0 ; i<y.length();i++){
            if(y.at(i)!=y.at(y.length()-1-i)){
                return false;
            }
        }
        return true;
    }
};