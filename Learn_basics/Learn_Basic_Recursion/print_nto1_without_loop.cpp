class Solution {
  public:
    void printNos(int N) {
        // code here
        if(N==0)
        return;
        else{
            cout<<N<<" ";
        printNos(N-1);
        }
    }
};
