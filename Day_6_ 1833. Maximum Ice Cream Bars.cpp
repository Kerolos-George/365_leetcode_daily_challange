class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int x=0,y=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            if(costs[i]<=coins){
                coins-=costs[i];
                x++;
            }
            
        }
        return x;
    }
}; 
