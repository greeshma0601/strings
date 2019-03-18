/*
Remove consonants from a string Submissions: 7738   Accuracy: 27.72%   Difficulty: Basic   Marks: 1
        
Problems
Discussions
Given a string s, remove all consonants and prints the string s that contains vowels only.
Input: The first line of input contains integer T denoting the number of test cases. For each test case, we input a string.
Output: For each test case, we get a string containing only vowels. If the string doesn't contain any vowels, then print "No Vowel"

Constraints:

1<=T<=100

The string should consist of only alphabets.

Examples:

Input: geEks
Output: eE
Input: what are you doing
Output: a ae ou oi

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool check(char a)
{
    if(a == 'a' || a== 'e' || a== 'i' || a == 'o'  || a== 'u'  || a== 'A' || a== 'E' || a== 'I' || a == 'O' || a == 'U' )
    {
        return 1;
    }
    return 0;
}
int main()
 {
 int t;
 cin>>t;
 cin.ignore(); 
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];

 string s;
 getline(cin,s);int f=0;
 for(int i=0;i<s.size();i++)
 {
     if(check(s[i]))
     {
         f++;
         cout<<s[i];
     }
    else if(s[i] == ' ')
     cout<<" ";
 }
 if(f == 0)cout<<"No Vowel";
 cout<<endl;
 }
	//code
	return 0;
}
