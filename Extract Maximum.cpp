/*
Extract Maximum
You have been given an alphanumeric string S, extract maximum numeric value from that string. Alphabets will only be in lower case.

Input:
The first line contains a single integer T i.e. the number of test cases. T testcases follow. The first and only line consists of a String S.

Output: 
For each testcase, in a new line, print the Maximum number extracted from the string S.

Constraints:
1 <= T <= 100
2 <= |S| <= 200

Example:
Input:
3
100klh564abc365bg
abvhd9sdnkjdfs
abchsd0sdhs
Output:
564
9
0

Explanation:
Test Case 1: The maximum number found in the string is "564".  

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
     int i;
 string s;
int m1=0,n=0;
 cin>>s;
 int l1=s.length();
 for(i=0;i<l1;i++)
 {
    if(s[i]>='0' and s[i]<='9')
    {
    n=n*10+(s[i] - '0');
    m1=max(n,m1);
    }
    else
    {
        n=0;
    }
 }
 cout<<m1<<endl;
 }
	//code
	return 0;
}
