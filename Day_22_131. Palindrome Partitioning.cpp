class Solution {
public:
    
    bool isPalin(string &s)
    {
        int ptr1 = 0;
        int ptr2 = s.size()-1;
        while(ptr1<ptr2)
        {
            if(s[ptr1] != s[ptr2])
            {
                return false;
            }
            ptr1++;
            ptr2--;
        }
        return true;
    }
    vector<vector<string>>ans;
    void palin(int i, string &s, vector<string>&curr)
    {
        if(i == s.size())
        {
            ans.push_back(curr);
            return;
        }
        
        string temp = "";
        for(int k=i; k<s.size(); k++)
        {
            temp+=s[k];
            if(isPalin(temp))
            {
                curr.push_back(temp);
                palin(k+1, s, curr);
                curr.pop_back();
            }
        }
        
    }
    
    
    vector<vector<string>> partition(string s) {
        vector<string>curr;
        palin(0, s, curr);
        return ans;
    }
    
};
