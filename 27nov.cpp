#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void collectpairs(vector<vector<int>>& img,vector<pair<int,int>> &v){
        for(int i=0;i<img.size();i++){
            for(int j=0;j<img.size();j++){
                if(img[i][j]==1){
                    v.push_back({i,j});
                }
            }
        }
    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        vector<pair<int,int>> v1,v2;
        collectpairs(img1,v1);   
        collectpairs(img2,v2);
        map<pair<int,int>,int> relativeshift;
        int ans=0;
        for (int i = 0; i < v1.size(); i++)
        {
            for (int j = 0; j < v2.size(); j++)
            {
                int x=v1[i].first-v2[j].first;
                int y=v1[i].second-v2[j].second;
                relativeshift[{x,y}]++;
                ans=max(ans,relativeshift[{x,y}]);
            }
            
        }
        return ans;
        
    }
};