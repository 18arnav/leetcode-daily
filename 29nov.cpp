#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>> gp;
        int n=plantTime.size();
        for (int i = 0; i < n; i++)
        {
            gp.push_back({growTime[i],plantTime[i]});
        }
        sort(gp.begin(),gp.end(),greater<pair<int,int>>());
        int maxi=0;
        int current=0;
        for (int i = 0; i < n; i++)
        {
            current+=gp[i].second;
            maxi=max(maxi,current+gp[i].first);

        }
        return maxi;
        
    }
};