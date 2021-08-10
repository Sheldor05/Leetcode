// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size();i++)
        {
            int num;
            num = target - nums[i];
            if ( mp.find(num) != mp.end())
            {
                v.push_back(mp[num]);
                v.push_back(i);
                return v;
            }
            mp[nums[i]] = i;        
        }
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             v.push_back(i);
        //             v.push_back(j);
        //         }
        //     }
        // }
        return v;
        
    } 