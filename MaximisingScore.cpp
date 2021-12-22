# TULA-RAM-CODING-QUESTION
//this of geeks job-a  thon 4 challenge
int main()
   {
     int n;cin>>n;
     int arr[n];
     for(int i=1;i<=n;++i)
       cin>>arr[i];
    int max1=INT_MIN;
    int index,sum;
    int p;
  
    for(int i=1;i<10;++i)//since every numbers has remainder from 0 to 9 
    {
      sum=0;
      p=0;
     for(int j=i;j<=n;j+=i)//
     {   
           p=1;
       sum+=arr[j];

    
     }
    if(max1<sum&&p==1)
      {  max1=sum;
         index=i;
      }
    }
  cout<<index<<endl;

   return 0;
   }
