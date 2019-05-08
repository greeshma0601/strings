/*
Recursively remove all adjacent duplicates Submissions: 28376   Accuracy: 19.86%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
           
Problems
Given a string s, recursively remove adjacent duplicate characters from the string s. The output string should not have any adjacent duplicates.
 

Input:
The first line of input contains an integer T, denoting the no of test cases. Then T test cases follow. Each test case contains a string str.

Output:
For each test case, print a new line containing the resulting string.

Constraints:
1<=T<=100
1<=Length of string<=50

Example:
Input:
2
geeksforgeek
acaaabbbacdddd

Output:
gksforgk
acac
*/

https://www.geeksforgeeks.org/recursively-remove-adjacent-duplicates-given-string/
#include<iostream>
using namespace std;
string dup(string s)
{
    string temp="";
    if(s[0]!=s[1])
    {temp=temp+s[0];}
    int n=s.length();
    int i;
    for(i=1;i<n;i++)
    {
        if(s[i-1]!=s[i] && s[i]!=s[i+1])
        temp=temp+s[i];
    }
    if(temp.length() == 0)return temp;
    if(temp.length()!= s.length())return dup(temp);
    return temp;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 string s;
 cin>>s;
 string s1=dup(s);
 cout<<s1<<endl;
 
 
 
 }
	//code
	return 0;
}
