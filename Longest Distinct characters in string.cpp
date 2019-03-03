/*
Longest Distinct characters in string Submissions: 16451   Accuracy: 34.5%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
            
Given a string S, find length of the longest substring with all distinct characters.  For example, for input "abca", the output is 3 as "abc" is the longest substring with all distinct characters.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is String str.

Output:
Print length of smallest substring with maximum number of distinct characters.
Note: The output substring should have all distinct characters.

Constraints:
1 ≤ T ≤ 100
1 ≤ size of str ≤ 10000

Example:
Input:
2
abababcdefababcdab
geeksforgeeks

Output:
6
7

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int len=s.length();
        int maxLen=0;
        int start=0;
        map<char,int>m;
        for(int i=0;i<len;i++)
        {
            if(m.find(s[i])!=m.end()&&m[s[i]]>=start)
            start=m[s[i]]+1;
            if(maxLen<i-start+1)
            maxLen=i-start+1;
            m[s[i]]=i;
        }
        cout<<maxLen<<endl;
    }
    return 0;
}
