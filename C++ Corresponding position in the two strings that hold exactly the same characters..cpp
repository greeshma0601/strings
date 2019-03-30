/*
C++ Corresponding position in the two strings that hold exactly the same characters.
Given two string of equal length i.e s1 and s2, you need to find how many time the corresponding position in two strings hold exactly the same characters and if a string contains any uppercase character convert that into lowercase and then find the count.   

Input: 
The First line of the input contains an integer T denoting the number of test cases. For each test case, there are two strings input s1 and s2 of equal length.

Output: 
For each test case, the output is an integer value displaying the number of times characters are same at the corresponding position.

Constraints:
1<=T<=100
The string should contain only alphabets.

Example:
Input:
3
choice chancE
geek Gang
life Tech
Output:
4
1
0

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
 string s1,s2;cin>>s1>>s2;int c=0;
 transform(s1.begin(),s1.end(),s1.begin(),::tolower);
 transform(s2.begin(),s2.end(),s2.begin(),::tolower);
 for(int i=0;i<s1.length();i++)
 {
     if(s1[i] == s2[i])
     c++;
 }
     cout<<c<<endl;
 }
	//code
	return 0;
}
