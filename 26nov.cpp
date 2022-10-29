#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int curr_sum = 0;
        unordered_map<int, int> m;
        
        for (int i = 0; i < nums.size(); i++) {
            curr_sum += nums[i];
            if(curr_sum%k == 0 && i > 0) return true;
            else if(m.find(curr_sum%k) != m.end() && (i - m[curr_sum%k] )> 1) return true;
            if(m.count(curr_sum % k) == 0)
            {
                m[curr_sum % k] = i;
            }
        }
        return false;
    }
};