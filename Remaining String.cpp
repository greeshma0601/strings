/*
Remaining String
Given a string without spaces, a character, and a count, the task is to print the string after the specified character has occurred count number of times.
Print “Empty string” incase of any unsatisfying conditions.
(Given character is not present, or present but less than given count, or given count completes on last index).
If given count is 0, then given character doesn’t matter, just print the whole string.

 

Input:

First line consists of T test cases. First line of every test case consists of String S.Second line of every test case consists of a character.Third line of every test case consists of an integer.


Output:

Single line output, print the remaining string or "Empty string".


Constraints:

1<=T<=200
1<=|String|<=10000


Example:

Input:

2
Thisisdemostring
i    
3​
geeksforgeeks
e
2

Output:
ng
ksforgeeks
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rs(string s,char a,int n)
{
     int c=0,f=0;
     int in;
    if(n == 0){cout<<s<<endl;return;}
 for(int i=0;i<s.length();i++)
 {
     if(s[i] == a)
    { c++;}
     if(c == n)
     {
         f=1;
     in=i;   
     break;
     }     
         
     
 }
 
 
 if(in >=s.length()-1 || f == 0 )
 cout<<"Empty string"<<endl;
 else
 {
     for(int i=in+1;i<s.length();i++)
     cout<<s[i];
     cout<<endl;    
 }

    
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
 char a;
 int n;
 cin>>a;
 cin>>n;
rs(s,a,n);
// cout<<s<<endl;
 }
	//code
	return 0;
}
