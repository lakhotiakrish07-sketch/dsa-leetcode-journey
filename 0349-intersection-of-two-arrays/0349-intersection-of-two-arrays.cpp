class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> val ={};
        int n1 = nums1.size();
        int n2 = nums2.size();
        
    
        for (int i = 0 ;i <n1; i++ ){
            
            for(int j = 0 ; j<n2;j++){
                int present=0;
                if(nums1[i]==nums2[j]){
                    for(int k = 0 ; k<val.size();k++){
                        if(nums1[i]==val[k]){
                            present=-1;
                            break;
                        }
                        else{
                            present = 0;
                        }
                    }
                    if(present==0){
                        val.insert(val.begin(),nums1[i]);
                        break;
                    }

                }
            }
        }
        return val;
    }
};