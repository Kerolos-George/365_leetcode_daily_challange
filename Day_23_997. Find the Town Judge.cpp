
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        vector<int> count_trust(n+1,0);
        for(auto i:trust){

            count_trust[i[0]]--;
            count_trust[i[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(count_trust[i]==n-1)return i;
        }
        return -1;
    }
};
