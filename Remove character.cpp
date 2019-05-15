/*
Remove character Submissions: 6753   Accuracy: 58.3%   Difficulty: Basic   Marks: 1
       
Problems
Given two strings s1 and s2, remove those characters from first string which are present in second string. Both the strings are different and contain only lowercase characters.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is s1,s1 is first string.
The second line of each test case contains s2,s2 is second string.

Output:

Print the modified string(s1). For each test case, print the output in a new line.

Constraints:

1 ≤ T ≤ 15
1 ≤ s2 < s1 ≤ 50

Example:

Input:
2
geeksforgeeks
mask
removeccharaterfrom
string

Output:
geeforgee

emovecchaaefom
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
 string s1,s2;
 int i;
 cin>>s1>>s2;
 int n1=s1.length();
 int n2=s2.length();
 set<char>s;
 for(i=0;i<n2;i++)
 s.insert(s2[i]);
 for(i=0;i<n1;i++)
 {
     if(s.find(s1[i]) == s.end())
     cout<<s1[i];
 }
 cout<<endl;
 }
	//code
	return 0;
}
