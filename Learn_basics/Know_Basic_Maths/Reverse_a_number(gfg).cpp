 public:
    long long reversedBits(long long x) {
       int count=0;
       long long y=0;
       while(x)
       {
           y += (x%2) * pow(2,(31-count));
           count++;
           x=x/2;
       }
       return y;
    }
};
