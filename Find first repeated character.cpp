/*
Find first repeated character Submissions: 7462   Accuracy: 34.59%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation   Geeks Classes in Noida
      
Problems
Discussions
Given a string S. The task is to find the first repeated character in it. We need to find the character that occurs more than once and whose index of first occurrence is smallest. S contains only lowercase letters.
Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains a string S.

Output:
For each test case in a new line print the first repeating character in the string. If no such character exist print -1.

Constraints:
1 <= T <= 100
1 <= |S| <=104

Example:
Input:
2
geeksforgeeks
hellogeeks

Output:
e
l

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
 string s;int f=0;
 cin>>s;int i;map<char,int>m;
 for(i=0;i<s.length();i++)
 {
     m[s[i]]++;
     if(m[s[i]]>1)
  {f=1;cout<<s[i]<<endl;break;}
 }
 if(!f)cout<<"-1"<<endl;
 }
	//code
	return 0;
}
