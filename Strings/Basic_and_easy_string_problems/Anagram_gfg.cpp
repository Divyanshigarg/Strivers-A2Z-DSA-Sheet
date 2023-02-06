 bool isAnagram(string a, string b){
        
       if(a.length() != b.length())
       return false;
       
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       for(int i=0;i<a.length();i++)
       {
           if(a[i]!=b[i])
           return false;
       }
       return true;
        
    }
