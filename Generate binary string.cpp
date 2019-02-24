/*
Generate binary string
Given a string containing of ‘0’, ‘1’ and ‘?’ wildcard characters, generate all binary strings that can be formed by replacing each wildcard character by ‘0’ or ‘1’.

Input:
The first line of input contains a single integer T, denoting the number of test cases. Then T test cases follow. Each test case consist of one line. The first line of each test case consists of a string S.

Output:
Print all binary string that can be formed by replacing each wildcard character.

Constraints:
1 ≤ T ≤ 60
1 ≤ |S| ≤ 30

Example:
Input
1
1??0?101

Output
10000101 10001101 10100101 10101101 11000101 11001101 11100101 11101101

Explanation:
Testcase 1: There will be 8 such possible strings can be formed, they are 10000101 10001101 10100101 10101101 11000101 11001101 11100101 11101101.
 

*/


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void print(string s,int i)
{
    if(i == s.length())
    {
        cout<<s<<" ";
        return;
    }
    if(s[i] ==  '?')
    {
        s[i]='0';
        print(s,i+1);
        s[i]='1';
        print(s,i+1);
    }
    else
    print(s,i+1);
}
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
 int l1=s.length();
 print(s,0);
 cout<<endl;
 }
	//code
	return 0;
}
