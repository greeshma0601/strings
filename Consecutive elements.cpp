/*
Consecutive elements
For a given string delete the elements which are appearing more than once consecutively. All letters are of lowercase.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases,  a string will be inserted.


Output:
In each seperate line the modified string should be output.


Constraints:
1<=T<=31
1<=length(string)<=100


Example:
Input:
1
aababbccd

Output:
ababcd

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
 int n,i;
 //cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 string s;
 map<char,int>m;
 cin>>s;
 n=s.size();
 for(i=0;i<n;i++)
 {
     if(s[i]!=s[i+1])
     cout<<s[i];
     /*if(m.find(s[i])!=m.end())
     {}
     else
     {
         m[s[i]]=1;
         cout<<s[i];
     }*/
 }
 cout<<endl;
 }
	//code
	return 0;
}
