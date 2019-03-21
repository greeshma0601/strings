/*
Uncommon characters Submissions: 7826   Accuracy: 40.56%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation   Geeks Classes in Noida
        
Problems
Discussions
Find and print the uncommon characters of the two given strings S1 and S2. Here uncommon character means that either the character is present in one string or it is present in other string but not in both. The strings contains only lowercase characters and can contain duplicates.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two strings in two subsequent lines.

Output:
For each testcase, in a new line, print the uncommon characters of the two given strings in sorted order.

Constraints:
1 <= T <= 100
1 <= |S1|, |S2| <= 105

Example:
Input:
1
characters
alphabets
Output:
bclpr
 

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
 cin>>s1>>s2;
 int l1,l2,i,j;
 l1=s1.length();
 l2=s2.length();
 map<char,int>m1;
 map<char,int>m2;
 for(i=0;i<l1;i++)
 {
     m1[s1[i]]++;
 }
 for(i=0;i<l2;i++)
 {
     m2[s2[i]]++;
 }
 string s3="";
 for(i=0;i<l2;i++)
 {
     if(m1.find(s2[i]) == m1.end())
     s3+=s2[i];
 }
  for(i=0;i<l1;i++)
 {
     if(m2.find(s1[i]) == m2.end())
     s3+=s1[i];
 }
  sort(s3.begin(),s3.end());
 for(i=0;i<s3.length();i++)
 {
     if(s3[i] == s3[i-1])
     {
         
     }
     else cout<<s3[i];
 }
 cout<<endl;
 }
	//code
	return 0;
}
