/*
Number following a pattern Submissions: 4554   Accuracy: 52.24%   Difficulty: Medium   Marks: 4
        
Problems
Given a pattern containing only I's and D's. I for increasing and D for decreasing.
Devise an algorithm to print the minimum number following that pattern.
Digits from 1-9 and digits can't repeat.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is a string, which contains only I's and D's in capital letter.

Output:
Print the minimum number following that pattern.

Constraints:
1 ≤ T ≤ 100
1 ≤ Length of String ≤ 8

Example:
Input
5
D
I
DD
IIDDD
DDIDDIID

Output
21
12
321
126543
321654798
*/
#include<bits/stdc++.h>
using namespace std;

void reverse(int a[], int l, int r)
{
    while(l<r)
    {
        swap(a[l], a[r]);
        l++; r--;
    }
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
	    
	    int l = s.length();
	    int n = l+1;
	    int a[100]={0};
	    
	    for(int i=0;i<n;i++)
	            a[i] = i+1;
	    
	    int start, i = 0;
	    while(i < l)
	    {
	        start = i;
	        if(s[i] == 'D')
	        {
	            while(s[i] == 'D')
	                    i++;
	           reverse(a, start, i); 
	        }
	        else
	        {
	            while(s[i] == 'I')
	                    i++;
	        }
	    }

	    
	    for(int i=0;i<n;i++)
	            cout<<a[i];
	    cout<<endl;
	}
	return 0;
}
