class Solution {
public:
    bool isPalindrome(string s) 
    {
   int i=-1,len=s.size();
        string ans;
        while(i++<len)
            if((65<=s[i] && s[i]<=90) || (97<=s[i] && s[i]<=122) || (48<=s[i] && s[i]<=57))
                ans += tolower(s[i]);
        int l=0,r=ans.size()-1;
        while(l<r)  if(ans[l++]!=ans[r--])  return 0;
        return 1;
    }
    
};
