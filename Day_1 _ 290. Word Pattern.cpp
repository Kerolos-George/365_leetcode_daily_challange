class Solution {
public:
    bool wordPattern(string pattern, string s) {
                map<char,string>m;
        map<string,char>c;
        vector<string>x;
        string word;
        stringstream iss(s);
        while(iss>> word)
            x.push_back(word);

        if(x.size()!=pattern.size())
            return false;

        for(int i=0;i<pattern.size();i++){
            if(m[pattern[i]]!=""&&m[pattern[i]]!=x[i])return false;
            if(c[x[i]]&&c[x[i]]!=pattern[i])return false;
            m[pattern[i]]=x[i];
            c[x[i]]=pattern[i];
        }
        return true;

    }
};
