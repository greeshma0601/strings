/*
Distinct palindromic substrings Submissions: 3218   Accuracy: 45.1%   Difficulty: Hard   Marks: 8
              
Problems
Given a string of lowercase ASCII characters, find all distinct continuous palindromic sub-strings of it.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains a string.

Output:
Print the count of distinct continuous palindromic sub-strings of it.

Constraints:
1<=T<=10^5
1<=length of string<=10^5

Example:
Input:
2
abaaa
geek

Output:
5
4
*/
#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s)
{
    int i=0;int j=s.length()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    vector<string>ans;
	    for(int l=1;l<=s.length();l++)
	    {
	        for(int i=0;i<s.length()-l+1;i++)
	        {
	            if(ispalindrome(s.substr(i,l)))
	                ans.push_back(s.substr(i,l));
	        }
	    }
	    sort(ans.begin(),ans.end());
	    ans.erase(unique(ans.begin(),ans.end()),ans.end());
	    cout<<ans.size()<<endl;
	}
	
	return 0;
}
