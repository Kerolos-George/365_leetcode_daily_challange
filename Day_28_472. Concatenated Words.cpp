class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_set<string> st(words.begin(), words.end());
        vector<string> ans;
        unordered_map<string, int> mp;
        for(string s:st)
        mp[s]++;
        for(string s:st)
        {
            int n=s.size();
            vector<bool> dp(n+1);
            dp[0]=true;
            for(int i=1;i<=n;i++)
            {
                for(int j=0;j<i;j++)
                {
                    if(dp[j])
                    {
                        string sub=s.substr(j, i-j);
                        if(mp.find(sub)!=mp.end() && sub!=s)
                        {
                            dp[i]=true;
                            break;
                        }
                    }
                }
                if(dp[n])
                ans.push_back(s);
            }
        }
        return ans;
    }
};
