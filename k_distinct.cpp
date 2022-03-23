#include<iostream>
#include<bits/stdc++.h>
#define fr(n)for(int i=0;i<n;++i)
using namespace std;

//for distinct words 
void via_set()
{

 vector<int>arr;
unordered_set<int>s;
int n=2;
//this is for printing elements along with frequency 
for(int i=0;i<n;++i)
 {
   if(s.find(arr[i])==s.end())
    { s.insert(arr[i]);
       cout<<arr[i]<<" ";
        
    }
 }

}

void k_distinct_numbers()
{

int n;cin>>n;

vector<int>arr;

map<int,int>mp;

fr(n){
    
    int temp;cin>>temp;
    
    arr.push_back(temp);
    mp.insert({arr[i],mp[arr[i]]++});
  }



cout<<" enter k distinct "<<endl;
int k;cin>>k;

  for(auto itr:mp)
   {
       if(itr.second>=k)
         cout<<itr.first<<endl;
 // cout<<itr.first<<" "<<itr.second<<endl;

   }

}

  


void k_distinct_words()
{

vector<string>str;
   for(int i=0;i<5;++i)
    {
      string str1;cin>>str1;
      str.push_back(str1);

    }
  //map is ordered map but unorderd_map means unordered map 

   map<string,int>mp;
 fr(5)
  {
   mp.insert({ str[i],mp[str[i]]++ });  
   }
   for(auto itr:mp)
     {
        if(itr.second>=2)
           cout<<itr.first<<"  "<<itr.second<<endl;
     }



}


int main()
{
   k_distinct_numbers();
    return 0; 
   

return  0;
}

