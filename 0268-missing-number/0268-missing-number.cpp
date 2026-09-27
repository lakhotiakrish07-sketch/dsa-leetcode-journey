class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = -1;
        for(int i =0 ;i<=nums.size();i++){
            for(int j = 0 ;j < nums.size();j++){
                if(nums[j]==i){
                    missing = -1;
                    break;
                }
                else{
                    missing = i ;
                    continue ;
                }
                

            }
            if(missing!= -1){
                    break;
                }
        }
        return missing;

    }
};