/*
Sum of all sub-sequences of a number Submissions: 877   Accuracy: 47.26%   Difficulty: Basic   Marks: 1
     
Problems
Discussions
Given a number as integer s, find the sum of all the elements present in all possible subsequences of s.

Input:
The first line of the input contains an integer T denoting the number of test cases. For each test case, there is a integer s as input.

Output:
For each test case, the output is an integer displaying the sum of all possible subsequences of s.

Constraints:
1<=T<=100
1<=S<=10^6

Example:
Input:
1
123
Output:
24

Explanation:
All possible sub-sequences are 1, 2, 3, {1, 2}, {2, 3}, {1, 3}, {1, 2, 3} which add up to 24.
*/
/*
char a='5';
int b=a-'0'; or int b=a-48;
from char '5' to int 5 => 
There is a much simpler way.
If s is "98765"
sum (of digits) is 35
len (of s) is 5
answer is sum*(2^(len-1)) or 35*(2^4) or 35*16 = 560
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
 int n;
 cin>>n;
 string s=to_string(n);
 int len=s.length();int sum=0;
 for(int i=0;i<len;i++)
 {
    sum+=(s[i]-'0');//or s[i]-48
 }
cout<<(sum*(pow(2,len-1)))<<endl;
 
    
     
 }
	//code
	return 0;
}
