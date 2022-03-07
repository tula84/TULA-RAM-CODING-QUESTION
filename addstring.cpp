#includ<bits/stdc++.h>
#include<iostream>
using namespace std;
//this is the  leet code problem 
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string ans="";
        while(i>=0 || j>=0 || carry!=0){
            int v1= i>=0 ? num1.at(i--)-'0' : 0;
            int v2= j>=0 ? num2.at(j--)-'0' : 0;
            int sum=v1+v2+carry;
            ans=to_string(sum%10)+ans;
            carry=sum/10;
        }
        return ans;
    }
};
