bool com(string s1,string s2){
  return s1+s2>s2+s1;
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
         vector<string>s;
   
   for (int i = 0; i < nums.size(); i++)
   {
    s.push_back(to_string(nums[i]));
   }
   
   sort(s.begin(),s.end(),com);

   string ans="";
   for (int i = 0; i < s.size(); i++)
   {
       ans+=s[i];
   }
       if(s[0]=="0") return "0";
       else return ans;
    }
};
