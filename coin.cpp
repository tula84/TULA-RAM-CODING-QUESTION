# TULA-RAM-CODING-QUESTION
//This contains coding questions that i have practised over my  campus life
//coin exchange problem
int calculate(int target,int*arr,int n)
{
  if(target==0)return 0;
   if(target<0)return infinite;
   int best=infinite;
  for(int i=0;i<n;++i)
  {
    best=min(best,calculate(target-arr[i],arr,n)+1);
  }
return best;
}
int main()
{
  int n;
  cin>>n;
  int  coins[n];
  for(int i=0;i<n;++i)cin>>coins[i];
 
 int target;cin>>target;
cout<<calculate(target,coins,n);

return 0;     
}

