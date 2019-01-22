/*
Last index of a character in the string Submissions: 1998   Accuracy: 16.37%   Difficulty: Basic   Marks: 1
     
Given a string S containing all the characters and a character X, the task is to find last index of X in string S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains a string S and the second line contains a character X.

Output:
For each test case, print the last index in new line, If X is not present in the string print "-1".

Constraints:
1<=T<=100
1<=|string length|<=105

Example:
Input:
2
Geeks
e
Hello world
o
Output:
2
7
*/


#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,f=0;
 
 string s;
 string b;
// read white space
//replace white space by string
 getline(cin,b);
 getline(cin,s);
 //cin>>s;
 //getline(cin,s);
// cout<<s<<endl;
 int l1=s.length();
 
//cout<<l1<<endl;

 char c;
 //getline(cin,c);
cin.get(c);
int i;
 for( i=l1-1;i>=0;i--)
 {
     if(c == s[i])
     {
         cout<<i<<endl;
         f=1;
         break;
     }
  
 }
 if(f==0)
 cout<<"-1"<<endl;
 }
	//code
	return 0;
}
