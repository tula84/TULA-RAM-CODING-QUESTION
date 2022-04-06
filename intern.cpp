#include<iostream>
#include<bits/stdc++.h>
#define fr(n) for(int i=0;i<n;++i)
#define read(days) cin>>days;
using namespace std;

//finding the square root of a number using binary search

void square_root()
{

int n;
double low=1;
read(n);
double  high=n,epsilon=1e-7,mid; 
while((high-low)>epsilon)
  {  
      mid=(low+high)/2;
     if(mid*mid<n)low=mid;

     else  high=mid;
    

  }

cout<<"square root of a number "<<low<<endl;
}

//label of intern 


void intern()
{

int  n,password;
read(n);

read(password);

int sum_day,day_no,label;

sum_day=password%5000;
cout<<sum_day<<endl;

day_no=sqrt(sum_day*2-1);//this is since  day is starting from 0 
cout<<day_no<<endl;


label=(password-sum_day-day_no*5000)/5000;


cout<<"inter number is "<<label<<endl;



}

int main()
{
 //intern();
 square_root();

 return 0;


}