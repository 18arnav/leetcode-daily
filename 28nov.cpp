#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> dupstr=strs;
        unordered_map<string,int> mp;
        int counter=0;
        for(auto &d:dupstr){
            sort(d.begin(),d.end());
            if (mp.find(d)==mp.end())
            {
                mp[d]=counter++;
            }
            
        }
        
        vector<vector<string>> res(mp.size());
        for(int i=0;i<strs.size();i++){
            int indextopush=mp[dupstr[i]];
            res[indextopush].push_back(strs[i]);
        }
        return res;

        
    }
};