/*
Longest Palindromic Subsequence Submissions: 12233   Accuracy: 44.59%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Geeks Classes in Noida
               
Problems
Given a String, find the longest palindromic subsequence

Input:
The first line of input contains an integer T, denoting no of test cases. The only line of each test case consists of a string S(only lowercase)

Output:
Print the Maximum length possible for palindromic subsequence.

Constraints:
1<=T<=100
1<=|Length of String|<=1000
 

Examples:
Input:
2
bbabcbcab
abbaab
Output:
7
4
*/
/* CPP program to print longest palindromic 
subsequence */
#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
int solve(string s){
    int n =s.length();
    int dp[n][n];
    for(int i=0;i<n;i++)dp[i][i]=1;
    int j;    
    for(int c=2;c<=n;c++){
        for(int i=0;i<n-c+1;i++){
            j = i+c-1;
            if (s[i]==s[j]&&c==2)dp[i][j]=2;
            else if(s[i]==s[j])dp[i][j] = dp[i+1][j-1]+2;
            else dp[i][j] = max(dp[i+1][j],dp[i][j-1]);
        }
    }
    return dp[0][n-1];
}
int main()
 {
	//code
	int t;cin>>t;
	while(t--){
	    string s;cin>>s;
	    cout<<solve(s)<<endl;
	}
	return 0;
}
