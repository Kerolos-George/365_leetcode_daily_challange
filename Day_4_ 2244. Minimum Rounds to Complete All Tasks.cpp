class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>m;
        int x=0;
   for (int i = 0; i < tasks.size(); i++)
   {
     m[tasks[i]]++;
   }

   for (auto i:m)
   {
       if(i.second==1) return -1;
       if(i.second%3==0) x+=i.second/3;
       else{
           x+=i.second/3+1;
       }
   }
     return x;
        
    }
};
