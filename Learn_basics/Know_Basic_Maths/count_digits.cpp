public:
    int evenlyDivides(int N){
        //code here
        int x=N,count=0;
        while(x)
        {
            int k = x%10;
            
            if(k!=0 && N%k == 0)
            count++;
            
            x = x/10;
        }
        return count;
    }
};
