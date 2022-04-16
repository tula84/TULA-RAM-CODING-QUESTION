#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define fr(n)for(int i=0;i<n;++i)
#define max2 25 



//Program to rearrange positive and negative numbers in an array by moving all
//negative numbers to the beginning and positive numbers to the end by
//maintaining the order of appearance of elements in the array.


//this  is for reversing  k elements
void reverse()
{

int  n;
cin>>n;


vector<int>arr;

 for(int i=0;i<n;i++)
   {
     int temp;
      cin>>temp;
     arr.push_back(temp);
    
   }
 
  cout<<"enter k"<<endl;

   int k;cin>>k;
   int j=k,temp=j;
  
for(int i=0;i<n;i+=k)
{       

    if(temp>=n-1) //for exit condition 
        break;
   
    
    j=temp-1;
      for(int j1=i;j1<=j;++j1)
       {     cout<<j1<<" "<<endl;
           swap(arr[j1],arr[j]);
             j--;
       }
       temp+=k;

}

 for(auto itr:arr)
   cout<<itr<<" ";


}





//this  is for finding the maximum length of subarray  having k repeated characters
bool atleastK(int freq[],int k)
{

for(int i=0;i<max2;++i)
  {
      if(freq[i]!=0 && freq[i]<k)   
        {
            return  false;

        }
  }
return true;

}


void setZero(int freq[])

{
 
  for(int i=0;i<max2;++i)
    {

        freq[i]=0;

    }

}


int  findlength(string str, int n, int k)

{
 
 int maxlen=0;
 int freq[max2];

 for(int i=0;i<n;++i)
   {

     setZero(freq);
      for(int j=i;j<n;++j)
      {

          freq[str[j]-'a']++;

          if(atleastK(freq,k))
             {
               maxlen=max(maxlen,(j-i+1));
             }
      }

   }

return maxlen;

}

 void length()
 {
     string str;cin>>str;

    int k;cin>>k;

   cout<<findlength(str,str.length(),k);

 }




void arrange()
{

int n;cin>>n; 
int *arr=new int [n];

fr(n)
 {
    cin>>arr[i];
 }
int t1=0,t2=1;
 fr(n)
  { 
   if(arr[t1]<0)
       continue;
   else  if(arr[t2]<0  && arr[t1]>0)
      swap(arr[t1],arr[t2]);
      
    
    else if(arr[t1]>0 &&arr[t2]>0)
       {    t2++;
            continue;
       }

             t1++;
             t2++;
if(t2==n)
    break;
}


fr(n)cout<<arr[i]<<" ";



 }
 //Program to replace each element by its rank in the given array. Given an array
//of distinct integers, we need to replace each element of the array with its rank.
//The minimum value element will have the highest rank.


void Rank()
{
int n;cin>>n; 
int *arr=new int [n];

fr(n) cin>>arr[i];

set<int>st;

fr(n)
 {
  st.insert(arr[i]);
  }
 
int count=1;

for(auto itr:st)
 {
    for(int j=0;j<n;++j)
    {  
        if(itr==arr[j])
          {
                arr[j]=count;
          }
     
    }

 ++count;
     
 }

fr(n)cout<<arr[i]<<" " ;

}

//finding    largest  pallindrome number 

int  check_pallindrome(int n)
{

int sum=n,sum1=0;

while(n!=0)
 {
       int temp=n%10;
        sum1=sum1*10+temp;
         n/=10;
  }
 
if(sum==sum1)
 return sum; 
else 
  return false;


}

void largest()
{

int n;cin>>n; 
int *arr=new int [n];
int large=0;

  fr(n) cin>>arr[i];

     fr(n)
      {
         int t2=check_pallindrome(arr[i]);
        
         large=max(large,t2);

      }

cout<<large<<" ";

 }

//Program to find all the missing elements in the given range. we have two inputs:
 void  missing()
 {

int n;cin>>n; 
int *arr=new int [n];
fr(n) cin>>arr[i];
sort(arr,arr+n);
fr(n-1)
{    
 int temp=arr[i+1]-arr[i];
 if(temp==1)
   continue;
  else  
   {    int  offset=1;
         while(--temp)
         {
          cout<<arr[i]+offset<<" ";
           ++offset;
         }
        
   }



}


 }

int main()
{

//reverse();
//arrange();

//Rank();
//largest();

missing();

return 0;


 }