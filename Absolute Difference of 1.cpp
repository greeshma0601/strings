/*
Absolute Difference of 1 Submissions: 7258   Accuracy: 28.56%   Difficulty: Basic   Marks: 1
      
Problems
Discussions
Given an array A of size N. Print all the numbers less than K in the array. The numbers should be such that the difference between every adjacent digit should be 1.

Note: Print '-1' if no number if valid.

Input:
The first line consists of an integer T i.e number of test cases. T testcases follow. Each testcase contains two lines of input. The first line consists of two integers N and K separated by a space. The next line consists of N spaced integers. 

Output:
For each testcase, print the required output.

Constraints: 
1 <= T <= 100
1 <= N <= 107
1 <= K, A[i] <= 1018

Example:
Input:
2
8 54
7 98 56 43 45 23 12 8
10 1000
87 89 45 235 465 765 123 987 499 655

Output:
43 45 23 12
87 89 45 765 123 987

Explanation:
Testcase1: 43 45 23 12  all these numbers have adjacent digits diff as 1 and they are less than 54
*/

#include <bits/stdc++.h>
using namespace std;

bool diff(long long int x)
{ 
    int flag=1;
    string str=to_string(x);
    if(x==1)
    {
        return true;
    }
    if( x/10==0)
    {
        return false;
    }
    for(int i=0;i<str.length()-1;i++)
    {
        if(abs(str[i]-'0'-(str[i+1]-'0'))==1)
        {
            flag=1;
        }
        else
        {
            return false;
        }
    }
    
    if(flag)
    {
        return true;
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	   long long int n;
	   long long int k;
	   long long int arr[100005];
	    cin>>n>>k;
	    int flag=1;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]<k)
	        {
	            if(diff(arr[i]))
	            {
	                cout<<arr[i]<<" ";
	                flag=0;
	            }
	            
	        }
	    }
	    
	    if(flag==1)
	    {
	        cout<<-1;
	    }
	    cout<<endl;
	}
	return 0;
}
