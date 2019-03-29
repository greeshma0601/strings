/*
Length of the longest substring Submissions: 7708   Accuracy: 37.09%   Difficulty: Medium   Marks: 4
         
Problems
Given a string, find the length of the longest substring without repeating characters. For example, the longest substrings without repeating characters for “ABDEFGABEF” are “BDEFGA” and “DEFGAB”, with length 6.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is str.

Output:

Print the length of longest substring.

Constraints:

1 ≤ T ≤ 20
1 ≤ str ≤ 50

Example:

Input:
2
geeksforgeeks
qwertqwer

Output:
7
5
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
 set<char>h;
 int i=0,j=0;
 int l=s.length();
 int maxlen=0;
 while(j<l)
 {
    if(h.count(s[j]) == 0)
    {
        h.insert(s[j]);
        j++;
        maxlen=max(maxlen,j-i);
    }
    else
    {
        h.erase(s[i]);
        i++;
    }
    
 }
 cout<<maxlen<<endl;
 
 
 }
	//code
	return 0;
}
