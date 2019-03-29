/*
String of Commons Submissions: 1539   Accuracy: 28.57%   Difficulty: Basic   Marks: 1
   
Problems
Given two strings, S and R, composed of only English alphabets (both upper and lower cases), find the alphabets that occur in both the strings. Print the common alphabets (if any) as output in ascending order of their ASCII values.

Input:

First line of input is an integer T, denoting the number of test cases. For each test case, first line of input is the string S and second line is the string R. Repetition is allowed in both the strings.

Output:


The only line of output for each test case is the list of alphabets that occur in both S and R. Upper and lower case alphabets are treated to be distinct from each other i.e. 'A' and 'a' will be regarded two different letters. The letters are printed on a new line in ascending order of ASCII values i.e. capital letters in common will be printed first in the output. If there are no common letters in S and R, print "nil" as output (without quotes).

Constraints:

1<=T<=100
1<=|S|,|R|<=100, denoting length of strings.

Example:

Input:

3
tUvGH
Hhev
aabb
ccII
xYzab
YYoxb

Output:

Hv
nil
Ybx

Explanation:

The letters common in the first test case are H and v. Hence output is, Hv.

In the second test case, there is nothing common. Hence output is nil.

In the third test case, Y,b,x are common. Hence output is, Ybx.
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
 cin>>s1>>s2;int l1=s1.length();
 int l2=s2.length();
 //int m=max(l1,l2);
 //int n=min(l1,l2);
 sort(s1.begin(),s1.end());
 sort(s2.begin(),s2.end());
 set <char> s;
 int f=0;
 
 for(int i=0;i<l1;i++)
 for(int j=0;j<l2;j++)
 {
     
     if(s1[i] == s2[j] && (s.find(s1[i]) == s.end()))
    { s.insert(s1[i]);f=1;}
 }
 if(!f)cout<<"nil";
 else{
    // sort(s.begin(),s.end());
 for(auto it=s.begin();it!=s.end();it++)
 cout<<*it;
 }
 cout<<endl;
 }
	//code
	return 0;
}
