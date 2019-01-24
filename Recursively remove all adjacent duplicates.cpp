/*
Recursively remove all adjacent duplicates Submissions: 24212   Accuracy: 19.86%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Geeks Classes in Noida   Geeks Classes in Noida   Sudo Placement [IITs] Less
           
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

#include<bits/stdc++.h>
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

/*
#include<algorithm>
using namespace std;
string fn(string s)
{
    
        if(s.empty())
        return "";
        int i,j,k;
        int n=s.length();
	    stack<char>st;
	    int flag=0;
	    
        for(i=0;i<n;i++)
	    st.push(s[i]);
	    s="";
	    char c=st.top();
	    flag=0;
	    st.pop();
	    int key=0;
	    while(!st.empty())    
	    {
	        //cout<<st.top()<<" ";
	        if(st.top()==c)
	        {
	            flag=1;
	            key=1;
	        }
	        else if(st.top()!=c  )
	        {
	            if(flag==0)
	            s+=c;
	            c=st.top();
	            flag=0;
	        }
	        st.pop();
	    }
	    if(flag==0)
	    s+=c;
	    reverse(s.begin(),s.end());
	    if(key)
	    s=fn(s);
	    return s;
}
int main()
 {
	int t,n,i,j,k;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    s=fn(s);
	    cout<<s<<endl;
	}
	return 0;
}
*/
