/*
Equal point in a string of brackets
Given a string S of opening and closing brackets '(' and ')' only. The task is to find an equal point. An equal point is an index such that the number of closing brackets on right from that point must be equal to number of opening brackets before that point.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an string S.

Output:
For each test case in a new line print the occurrence of the first equal point in the array.

Constraints:
1 <= T <= 100
1 <= S <= 106
Example:
Input:
2
(())))(
))

Output:
4
2

Explanation:
Testcase 1: After index 4 (0-based indexing), number of closing on right from 4th index is 2 and closing before 4th is 2.

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Function to find an equal index 
int findIndex(string str) 
{ 
	int len = str.length(); 
	int open[len+1], close[len+1]; 
	int index = -1; 
	memset(open, 0, sizeof (open)); 
	memset(close, 0, sizeof (close)); 

	open[0] = 0; 
	close[len] = 0; 
	if (str[0]=='(') 
		open[1] = 1; 
	if (str[len-1] == ')') 
		close[len-1] = 1; 

	// Store the number of opening brackets 
	// at each index 
	for (int i = 1; i < len; i++) 
	{ 
		if ( str[i] == '(' ) 
			open[i+1] = open[i] + 1; 
		else
			open[i+1] = open[i]; 
	} 

	// Store the number of closing brackets 
	// at each index 
	for (int i = len-2; i >= 0; i--) 
	{ 
		if ( str[i] == ')' ) 
			close[i] = close[i+1] + 1; 
		else
			close[i] = close[i+1]; 
	} 

	// check if there is no opening or closing 
	// brackets 
	if (open[len] == 0) 
		return len; 
	if (close[0] == 0) 
		return 0; 

	// check if there is any index at which 
	// both brackets are equal 
	for (int i=0; i<=len; i++) 
		if (open[i] == close[i]) 
			index = i; 

	return index; 
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
 cout<<findIndex(s)<<endl;
 }
	//code
	return 0;
}
