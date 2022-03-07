#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define fr(n)for(int i=0;i<n;++i)
int bus[100];
void calculate(int n)
 {
  int nob;
 for(int i=1;i<n;++i)
 {   nob=0;
    for(int j=0;j<=i/2;++j)
      {
      if( (i+1)%(j+1)==0)
         nob+=bus[j];
      }
  
   bus[i]=bus[i]-nob;
 }

 }

int main()

{  
     int n;cin>>n;
 
     fr(n)cin>>bus[i];
   
    calculate(n);

 fr(n)cout<<bus[i]<<" ";

return 0;
 
}