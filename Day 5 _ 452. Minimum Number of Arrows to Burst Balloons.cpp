class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end());
        int ans=1,mx=points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0]>mx){
                ans++;
                mx=points[i][1];
            }
            mx = min(points[i][1],mx);
        }
        
        return ans;
    }
};
