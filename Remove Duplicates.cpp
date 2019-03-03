/*
Remove Duplicates Submissions: 15042   Accuracy: 33.98%   Difficulty: Easy   Marks: 2
        
Given a string, the task is to remove duplicates from it. Expected time complexity O(n) where n is length of input string and extra space O(1) under the assumption that there are total 256 possible characters in a string.

Note: that original order of characters must be kept same. 

Input: 
First line of the input is the number of test cases T. And first line of test case contains a string.

Output:  
Modified string without duplicates and same order of characters.

Constraints: 
1 <= T <= 15
1 <= |string|<= 1000

Example:
Input:
2
geeksforgeeks
geeks for geeks

Output:
geksfor
geks for

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 cin.ignore();
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
// cin.ignore();
 string s;
 //cin>>s;
 getline(cin,s);
 int n=s.size();
 int i;int h[256]={0};
 for(i=0;i<n;i++)
 {
     if(h[s[i]] == 0)
     {
         cout<<s[i];
         h[s[i]]++;
     }
 }
     
   cout<<endl;  
 }
	//code
	return 0;
}
