# TULA-RAM-CODING-QUESTION
This contains coding questions that i have practised over my  campus life


#include<iostream>
#include<bits/stdc++.h>
#define fr(n)for(int i=0;i<n;++i)
using namespace std;

int count(int pattern, int arr[], int n) {
 
  int cnt = 0;
 
 for (int i = 0; i < n; i++) {
  if ((pattern & arr[i]) == pattern)
    cnt++;
     }
   return cnt;
   }

int maxAND (int arr[], int n)

{

int ans = 0;

for (int i = 16; i >= 0; i--) {

int cnt = count(ans | (1 << i), arr, n);

if (cnt >= 2) {
    ans += (1 << i);
      }
  }

 return ans;

   }

int main()
{ 
int n;
cin>>n;
cout<<(2<<2)<<endl;
int arr[n];
fr(n)cin>>arr[i];
cout<<maxAND(arr,n)<<endl;
}
