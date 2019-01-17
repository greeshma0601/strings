/*
Non Repeating Character Submissions: 18222   Accuracy: 43.17%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
                               
Given a string S consisting of lowercase Latin Letters. Find the first non repeating character in S.

Input:
The first line contains T denoting the number of testcases. Then follows description of testcases.
Each case begins with a single integer N denoting the length of string. The next line contains the string S.

Output:
For each testcase, print the first non repeating character present in string. Print -1 if there is no non repeating character.

Constraints:
1 <= T <= 900
1 <= N <= 104

Example:
Input : 
3
5  
hello
12
zxvczbtxyzvy
6
xxyyzz

Output :
h
c
-1


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
 int i,n,f=0;
 cin>>n;
 string s;
 cin>>s;
 int a[256]={0};
 //map<char,int> m;
 for(i=0;i<n;i++)
 {
     a[s[i]]++;
 }
 for(i=0;i<n;i++)
 {
     if(a[s[i]]==1)
     {
         cout<<s[i]<<endl;
         f=1;
         break;
     }
     if(f==1)
     break;
 }
 if(!f)
 cout<<"-1"<<endl;
 }
	//code
	return 0;
}
