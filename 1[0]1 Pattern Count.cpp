/*
1[0]1 Pattern Count
Given a string, your task is to find the number of patterns of form 1[0]1 where [0] represents any number of zeroes (minimum requirement is one 0) there should not be any other character except 0 in the [0] sequence.

 

Input:
The first line contains T denoting the number of testcases. Then follows description of testcases. Each case contains a string. 
 

Output:
For each test case, output the number of patterns.

 

Constraints:
1<=T<=20
1<=Length of String<=2000


Example:
Input:
2
100001abc101
1001ab010abc01001

 

Output:
2
2

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 string s;
 cin>>s;
 int n=s.size();
 int i=1;int c=0;
 char last = s[0];
 while(i<n)
 {
     if(s[i] == '0' && last == '1')
     {
         while(s[i] == '0')
         i++;
         if(s[i] == '1')
         c++;
     }
     last=s[i];
     i++;
 }
 cout<<c<<endl;
 }
	//code
	return 0;
}
