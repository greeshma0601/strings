/*
Excel Sheet | Part - 1
Given a positive integer N, print its corresponding column title as it would appear in an Excel sheet.
For N =1 we have column A, for 27 we have AA and so on.

Note: The alphabets are all in uppercase.

Input:
The first line contains an integer T, depicting total number of test cases. Then following T lines contains an integer N.

Output:
For each testcase, in a new line, print the string corrosponding to the column number.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107

Example:
Input:
1
51
Output:
AY
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
 int n;
 cin>>n;
 string s="";
 while(n>0)
 {
     if(n%26 == 0)
     {
         s+='Z';
         n--;
     }
     else
     {
         s+=char('A'+(n%26)-1);
     }
         n/=26;
     
 }
 reverse(s.begin(),s.end());
 cout<<s<<endl;
 }
	//code
	return 0;
}
