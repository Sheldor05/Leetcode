#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max {}, n = candies.size();

    for (int i = 0; i < n; i++)
    {
        if ( candies[i]> max)
        {
            max = candies[i];
        }
    }
    vector<bool> result (n);
    for ( int i = 0; i < n; i++)
    {
        result[i] = (candies [i] + extraCandies >= max); // result is bool max is int

    }
        return result;

    }
    /*int main() {
        
        int n;
        int extraCandies;
        cin >> n;
        cin >> extraCandies;

        vector <int> candies(n);
        for(int i = o; i < candies.size(); i++)
        {
            can.push_back();
        }
        for (bool x: kidsWithCandies(candies, extraCandies))
        cout << (x ? "true" : "false") << " ";
        return 0 ;
    }
};*/