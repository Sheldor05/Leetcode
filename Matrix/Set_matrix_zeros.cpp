#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool col = false;
        int rows = matrix.size();
        int col = matrix[0].size();
        for(int i= 0: i<rows;i++){
            for(int j = 0; j<col;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            
            }
        }
    };