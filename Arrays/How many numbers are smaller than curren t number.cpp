//Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

#include <bits/stdc++>
using namespace;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int>mp;
 
        vector <int> v(nums.size(),0);
        for ( auto i: nums)
        {
            mp[i]++;
        }
        for(int i=0;i<nums.size();i++){
            int temp=0;
            for (int j = nums[i]-1; j >= 0; j--)
            {
                temp += mp[j]; 
            }
            v[i]=temp;
        }
        return v;
        
    }
};