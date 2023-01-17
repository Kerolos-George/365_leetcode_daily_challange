class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<string>v;
        int n=strs[0].length(),j=0;
        while(n--){
            
            string y="";
            for(int i=0;i<strs.size();i++){
                string s=strs[i];
                y+=s[j];
            
         }
         v.push_back(y);
         j++;

        }
        int x=0;
        for(int i=0;i<v.size();i++){
            string w=v[i];
            sort(w.begin(),w.end());
            if(w!=v[i]) x++;
            
        }
        
        return x;
    }
};
