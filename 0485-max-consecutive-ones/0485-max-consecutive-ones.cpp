class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = -1 ;
        int save= 0 ;
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i]==1){
                save++;
            }
            else{
                if(max<=save){
                    max = save;
                    
                }
                save = 0 ;
                
            }
        }
        if(save>=max){
            max = save ;
            
        }
        return max ;
        
    }
};