/*
Remove Spaces Submissions: 17216   Accuracy: 27.12%   Difficulty: School   Marks: 0 *School Problem's Submission isn't counted in score!
        
Given a string, remove spaces from it

Input: First line of the input is the number of test cases T. And first line of test case contains a string whose spaces are to be removed.

Output:  Modified string without any space

Constraints:  Input String Length <= 1000

Example:
Input:
2
geeks  for geeks
    g f g

Output:
geeksforgeeks
gfg

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
 string s;
 getline(cin,s);
 for(int i=0;i<s.length();i++)
 {
     if(s[i]!=' ')
     {
         cout<<s[i];
     }
 }
 cout<<endl;
 }
	//code
	return 0;
}
