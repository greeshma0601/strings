/*
Excel Sheet | Part - 2
Given a string S that represents column title of an Excel sheet, find the number that represents that column.
In excel A column is number 1, AA is 27 and so on.

Input:
The first line contains an integer T, depicting total number of test cases. T testcases follow. Each testcase contains a single line of input containing string S.

Output:
For each testcase, in a new line, print the column number.

Constraints:
1 ≤ T ≤ 100
1 ≤ |S| <=7

Example:
Input
2
A
AA
Output
1
27

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
 reverse(s.begin(),s.end());
 int res=0,k=0;
 for(int i=0;i<s.length();i++)
 {
     res+=(s[i]-'A'+1)*pow(26,k);
     k++;
 }
 cout<<res<<endl;
 }
	//code
	return 0;
}
