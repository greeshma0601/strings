/*
Reversing the vowels
Given a string, reverse only the vowels present in it and print the resulting string.

Input: First line of the input file contains an integer T denoting the number of test cases. Then T test cases follow. Each test case has a single line containing a string.

Output: Corresponding to each test case, output the string with vowels reversed.

Example:
Input:
4
geeksforgeeks
practice
wannacry
ransomware

Output:
geeksforgeeks
prectica
wannacry
rensamwora
*/
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
     string s;
     cin>>s;
     int n;
     transform(s.begin(),s.end(),s.begin(),::tolower);
     vector<char>v;
     for(int i=0;i<s.length();i++)
     {
         if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
         v.push_back(s[i]);
     }
     int vs1=v.size()-1;
     int vs=0;
     for(int i=0;i<s.length();i++)
     {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            s[i]=v[vs1];
            vs1--;
        }
     }
     cout<<s<<endl;
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 }
	//code
	return 0;
}
