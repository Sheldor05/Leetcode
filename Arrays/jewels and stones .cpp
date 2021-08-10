// You're given strings jewels representing the types of stones that are jewels,
// and stones representing the stones you have.
// Each character in stones is a type of stone you have. 
// You want to know how many of the stones you have are also jewels.

// Letters are case sensitive, so "a" is considered a different type of stone from "A".

// 1st sol
#include <bits/stc++.h>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        for(auto c: jewels)
        {
            mp[c]++;
        }
    int ans = 0;
        for(auto c : stones)
        if (mp.find(c) != mp.end() )
        {
            ans ++;
        }
        return ans;
    }
};

