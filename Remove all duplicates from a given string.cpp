/*
Remove all duplicates from a given string Submissions: 6708   Accuracy: 45.58%   Difficulty: Easy   Marks: 2
         
Problems
Given a string which may contains lowercase and uppercase chracters. The task is to remove all  duplicate characters from the string and print the resultant string.  The order of remaining characters in the output should be same as in the original string.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. Each test case contains a string.

Output:
Print the resultant string after removing duplicate characters from string.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 100

Example:
Input:
2
geeksforgeeks
HappyNewYear

Output:
geksfor
HapyNewYr

Explanation:
Testcase 1: After removing duplicate characters such as e, k, g, s, we have string as geksfor.
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
 set<char>mp;
 string s;
 cin>>s;
 /*for(int i=0;i<s.length();i++)
 {
     //if(mp.find(s[i]) == mp.end())
     mp.insert(s[i]);
 }*/
  for(int i=0;i<s.length();i++)
 {
    if(mp.find(s[i]) != mp.end())
    {}
    else{
        mp.insert(s[i]);
        cout<<s[i];
    }
 }
/* for(auto it=mp.begin();it!=mp.end();it++)
 {
   cout<<*it;
 }*/
 cout<<endl;
 }
	//code
	return 0;
}
