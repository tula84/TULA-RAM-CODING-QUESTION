# TULA-RAM-CODING-QUESTION
int main()
{
  int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;++i)cin>>arr[i]; 
  int cost[n];
  for(int i=0;i<n;++i)cin>>cost[i];
  /* int j;
  int t,temp;
for(int i=0;i<n;++i)
  { 
   int total=0;
   int count=0,j=i;
       
     while(count<n)
     {
       total+=arr[j%n]-cost[j%n];
        if(total<0)
           break;
      count++;
      j++;
     }
  if(count==n&&total>=0)
    cout<<i<<endl;

    
    }*/
  int total=0,tank=0,index;
  for(int i=0;i<n;++i)
  {
      int compute=arr[i]-cost[i];
      tank+=compute;
      if(tank<0)
      {
        index=i+1;
        tank=0;
      }
     total+=tank;
  }
  if(tank<0)cout<<"-1"<<ends;
  else cout<<index<<endl;
  return 0;
   }
      
      //arr for storing gas station and cost for correspondece cost : and arr-cost==0 means solution exist;
//this is somehow similar to number of paltform requires for railway having arrival and departure time  for different trains 
    
