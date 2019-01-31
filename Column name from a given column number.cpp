/*
Column name from a given column number Submissions: 15655   Accuracy: 30.03%   Difficulty: Easy   Marks: 2
                 
Given a positive integer, return its corresponding column title as appear in an Excel sheet.
MS Excel columns has a pattern like A, B, C, … ,Z, AA, AB, AC,…. ,AZ, BA, BB, … ZZ, AAA, AAB ….. etc. In other words, column 1 is named as “A”, column 2 as “B”, column 27 as “AA”.

Input:

The first line of each input consists of the test cases. And, the second line consists of a number N.

Output:

In each separate line print the corresonding column title as it appears in an Excel sheet.

Constraints:

1 ≤ T ≤ 70
1 ≤ N ≤ 4294967295

Example:

Input:

2
28
13

Output:

AB
M

 
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
 int n,k;
 cin>>n;
 stack<char> s;
 while(n)
 {
     k=(--n)%26+'A';
     s.push(k);
     n=n/26;
 }
 int sz=s.size();
 while(sz--)
 {
     cout<<s.top();
     s.pop();
 }
 cout<<endl;
    
 }
	//code
	return 0;
}
