class Solution {
public:
    vector<int> getRow(int num) {
        int n = num+1;
      vector<vector<int>>ans(n);
      for(int i = 0 ;i<n;i++){
        if(i==1){
            ans[i].push_back(1);
        }
        if(i>1){
            ans[i].push_back(1);
            for(int j =1 ; j<ans[i-1].size();j++){
                ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
            }
        }
        ans[i].push_back(1);
      } 
      return ans[num];
    }
};