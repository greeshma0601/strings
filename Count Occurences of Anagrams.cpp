/*
Count Occurences of Anagrams
Given a word S and a text C. Return the count of the occurences of anagrams of the word in the text.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a text S consisting of only lowercase characters.
The second line contains a word consisting of only lowercase characters.

Output:
Print the count of the occurences of anagrams of the word C in the text S.

Constraints:
1 <= T <= 50
1 <= |S| <= |C| <= 50

Example:
Input:
2
forxxorfxdofr
for
aabaabaa
aaba

Output:
3
4

Explaination:
for, orf and ofr appears in the first test case and hence answer is 3.

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
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int i,j,c=0;
 string t,p;
 cin>>t>>p;
 int ps=p.size();
 int ts=t.size();
 sort(p.begin(),p.end());
 for(i=0;i<=ts-ps;i++)
 {
     string s= t.substr(i,ps);
     sort(s.begin(),s.end());
     if(s == p)c++;
 }
 cout<<c<<endl;
 

 }
	//code
	return 0;
}
