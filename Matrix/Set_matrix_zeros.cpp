#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i= 0: i<matrix.size();i++){
            for(int j = 0; j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            
            }
        }
        for(int i= 1: i<matrix.size()-1;i++){
            for(int j = 1; j<matrix[0].size()-1;j++){
                 if(matrix[0][j]==0 || matrix[i][0]==0){
                     matrix[i][j]==0;
                 }
            }
        }
        for(int j =0; j<matrix.size();j++){
            if
        }

};