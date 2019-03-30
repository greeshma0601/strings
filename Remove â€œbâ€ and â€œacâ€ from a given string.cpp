/*
Remove â€œbâ€ and â€œacâ€ from a given string
Given a string, eliminate all “b” and “ac” in the string, replace them in-place and iterate over the string once.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
Each test case contains a string of length N.

Output:
Print the resultant substring after removing 'b' and 'ac' from string.

Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 200

Example:
Input:
2
acbac
aababc

Output:

aaac

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
 string str;
 cin>>str;
 string s="";
 for(int i=0;i<str.length();i++)
 {
     if(str[i] == 'a' && str[i+1] == 'c' )
     {
         i++;
     }
    else if(str[i] == 'b'){}
     else
     {
         s+=str[i];
     }
 }
 //s.erase(std::remove(s.begin(), s.end(), 'b'), s.end());
 cout<<s<<endl;
 
 }
	//code
	return 0;
}
