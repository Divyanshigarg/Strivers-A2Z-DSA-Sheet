void stockBuySell(int arr[], int n) 
{
    int buy = 0, sell = 0, flag = 0;
for(int i = 1; i<n; i++){
        if(arr[i-1]<=arr[i] && arr[i]!= arr[buy]){
            sell++;
            flag = 1;
        }
        else if(buy==sell) buy = i, sell = i;
        else{
            cout<<"("<<buy<<" "<<sell<<")"<<" ";
            buy = i, sell = i;
        }
        if(buy!= n-1 && sell==n-1){
        cout<<"("<<buy<<" "<<sell<<")"<<" ";
        }
    }
    if(flag==0){
        cout<<"No Profit"<<endl;
         return;
    }
  cout<<endl;
}
