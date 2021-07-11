class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size(); //doubt
        int a = 0;
        
        if (m==0) return 0;
        for(int i = 0; i < m ; i++){
            int res = 0;
            for (int j = 0; j < n; j++ ){
               
                res += accounts[i][j];
            }
            a = max(a,res);
        }
        return a;
        
    }
};
//Solution 2
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
     int ans = INT_MIN;
        for (auto v : accounts)
        {
            ans = max(ans,accumulate(v.begin(),v.end(),0));
        }
        return ans;
    }
};