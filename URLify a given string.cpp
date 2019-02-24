/*
URLify a given string Submissions: 4518   Accuracy: 36.93%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation
        
Write a method to replace all the spaces in a string S with ‘%20’. You may assume that the string has sufficient space (or allocated memory) at the end to hold the additional characters,

Note: The leading and trailing spaces should be trimmed off and not replaced by %20.

Input:
The first line of input contains an integer T denoting the number of test cases. The T test cases follow. Each test case contains two lines of input. The first line contains a string S. The next line contains an integer K that denotes the length of the S with whitespace included.

Output:
For each testcase, in a new line, print the string with spaces replaced by "%20".

Constraints:
1 <= T <= 1000
1 <= |S|+ K <= 1000

Example:
Input:
2
Mr John Smith
13
Mr Benedict Cumberbatch  
25

Output:
"Mr%20John%20Smith"
"Mr%20Benedict%20Cumberbatch

Explanation:
Here in the second case 25 means that there are 25 characters taken into input. While the length of the string is 23 , it means that there are 2 extra spaces at the end which needs to be removed and is contained in input. So the output should be those 23 characters with 2 extra spaces removed and spaces between word replaced with %20.

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 //cin.ignore();
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 cin.ignore();
 string s;
 int k;
 
getline(cin,s);
cin>>k;
int n=s.size();
string s1="";
for(int i=0;i<n;i++)
 {
     if(s[i] == ' ')
     {
         s1+="%20";
     }
     else{
         s1+=s[i];
     }
 }
 cout<<s1<<endl;
 }
	//code
	return 0;
}
