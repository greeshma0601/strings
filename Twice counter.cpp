/*
Twice counter
Given an array of n words. Some words are repeated twice, we need count such words.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the number of words in the string. The next line contains n space separated words forming the string.

Output:
Print the count of the words which are repeated twice in the string.

Constraints:
1<=T<=105  
1<=no of words<=105
1<=length of each word<=105

Example:
Input:
2
10
hate love peace love peace hate love peace love peace
8
Tom Jerry Thomas Tom Jerry Courage Tom Courage

Output:
1
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
 int n,i;
 cin>>n;
 map<string,int>m;
//vector<string>v;
 for(i=0;i<n;i++)
 {
     string s;
     cin>>s;
 //v.push_back()
 m[s]++;
 }
 
 int c=0;
 for(auto it=m.begin();it!=m.end();it++)
 {
     if(it->second == 2)
     c++;
 }
 cout<<c<<endl;
 }
	//code
	return 0;
}
