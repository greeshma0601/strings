/*
Save Ironman Submissions: 28474   Accuracy: 23.71%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
           
Jarvis is weak in computing palindromes for Alphanumeric characters.
While Ironman is busy fighting Thanos, he needs to activate sonic punch but Jarvis is stuck in computing palindromes.
You are given a string S containing alphanumeric characters. Find out whether the string is a palindrome or not.
If you are unable to solve it then it may result in the death of Iron Man.

Input:
The first line of the input contains T, the number of test cases. T testcases follow.  Each line of the test case contains string 'S'.

Output:
Each new line of the output contains "YES" if the string is palindrome and "NO" if the string is not a palindrome.

Constraints:
1<=T<=100
1<=|S|<=100000
Note: Consider alphabets and numbers only for palindrome check. Ignore symbols and whitespaces.

Example:
Input:
2
I am :IronnorI Ma, i
Ab?/Ba

Output:
YES
YES


*/

#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
bool is_alphanumeric(char c)
{
    if(isalpha(c)==1 || isdigit(c)==1)
    return 1;
    return 0;
}
int main()
 {
 int t;
 cin>>t;
 cin.ignore();
 while(t--)
 {
 string s,a="";
// cin>>s;
getline(cin,s);
 int l1=s.size();
 int i;
 char c;
 for(i=0;i<l1;i++)
 {
     
    if(isalnum(s[i])) 
    {
        c=tolower(s[i]);
        a+=c;
    }
 }
 string b=a;
 reverse(a.begin(),a.end());
 /*cout<<a<<endl;
 cout<<b<<endl;*/
 /*for(i=0;i<l;i++)
 {
     if(a[i] == b[])
 }*/
 if(a == b)cout<<"YES";
else cout<<"NO";
cout<<endl;
 }
	//code
	return 0;
}
