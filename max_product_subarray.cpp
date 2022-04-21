#include<iostream>
#include<bits/stdc++.h>
#define fr(n)for(int i=0;i<n;++i)
using namespace std;
#define read(n) cin>>n

void max_product()
 {
  
  int n;
  cin>>n;
  vector<int>arr;
  fr(n)
  {
       int  temp;read(temp);
       arr.push_back(temp);
  
  }
  

  int far=INT_MIN,end=1;

  fr(arr.size())
  {
    end=end*arr[i]; //end+=arr[i]
  if(end>far)far=end;
 // if(end<0)end=arr[i];   //this for maximum subarray problem 
  if(end==0)  //this will work for  1,2,3,0,12 
    end=1;
   
   
  }

  cout<<far<<endl;




 }

int main()
{

 max_product();

return 0;
}