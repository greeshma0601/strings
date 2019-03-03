/*
Longest Common Prefix in an Array Submissions: 14778   Accuracy: 34.46%   Difficulty: Basic   Marks: 1
         
Given a array of N strings, find the longest common prefix among all strings present in the array.

Input:
The first line of the input contains an integer T which denotes the number of test cases to follow. Each test case contains an integer N. Next line has space separated N strings.

Output:
Print the longest common prefix as a string in the given array. If no such prefix exists print "-1"(without quotes).

Constraints:
1 <= T <= 103
1 <= N <= 103
1 <= |S| <= 103

Example:
Input:
2
4
geeksforgeeks geeks geek geezer
3
apple ape april

Output:
gee
ap

Explanation:
Testcase 1: Longest common prefix in all the given string is gee.

*/


#include<bits/stdc++.h>
using namespace std;

string commonPrefix(string arr[], int n,int min) 
{ 
    int minlen = min; 
  
    string result; // Our resultant string 
    char current;  // The current character 
  
    for (int i=0; i<minlen; i++) 
    { 
        // Current character (must be same 
        // in all strings to be a part of 
        // result) 
        current = arr[0][i]; 
  
        for (int j=1 ; j<n; j++) 
            if (arr[j][i] != current) 
                return result; 
  
        // Append to result 
        result.push_back(current); 
    } 
  
    return (result); 
} 
int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    string a[n],s;
	    int min=INT_MAX;
	    for(i=0;i<n;i++)
	    {
	    	string s;
	        cin>>s;
	        a[i]=s;
	        if(min>s.size())
	        min=s.size();
	    }
	    string ans = commonPrefix (a, n,min);
	    if(ans.length())cout<<ans<<endl;else cout<<"-1"<<endl;;
	   
	}
	return 0;
}
