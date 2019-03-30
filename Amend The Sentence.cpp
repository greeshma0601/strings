/*
Amend The Sentence
Given an array of characters which is basically a sentence. However there is no space between different words and the first letter of every word is in uppercase. You need to print this sentence after following amendments:
(i) Put a single space between these words
(ii) Convert the uppercase letters to lowercase.

Input: 

The first line of input contains the number of test cases. The description of T test case follows.

Each test case contains a single line containing a string.

Output:

Print the desired Sentence.


Constraints:

1<=T<=30

1<=Size of String <=100

Example:

Input : 

2

BruceWayneIsBatman

You

Output : 

bruce wayne is batman

you

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
 string s;
 cin>>s;
 int l=s.length();
 if(isupper(s[0])){cout<<char(tolower(s[0]));}
 else{cout<<s[0];}
 for(int i=1;i<l;i++)
 {
     if(isupper(s[i]))
     {
         cout<<" ";
         cout<<char(tolower(s[i]));
     }
     else{
         cout<<s[i];
     }
 }
 cout<<endl;
 }
	//code
	return 0;
}
