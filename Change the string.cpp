/*
Change the string
Given a string S, the task is to change the string according to the condition; If the first letter in a string is capital letter then change the full string to capital letters, else change the full string to small letters.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains a string S.

Output:
For each test case, print the changed string in a new line.

Constraints:
1<=T<=200
1<=|string length|<=104

Example:
Input:
2
geEkS
FoR
Output:
geeks
FOR
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
 cin>>s;int f;
 if(s[0] >='a' && s[0]<='z')
 f=1;
 else f=0;
 
 if(f == 1)
 {
     transform(s.begin(),s.end(),s.begin(),::tolower);
 }
 else
 {
     transform(s.begin(),s.end(),s.begin(),::toupper);
 }
 cout<<s<<endl;
 
 }
	//code
	return 0;
}
