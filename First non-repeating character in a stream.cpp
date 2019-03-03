/*
First non-repeating character in a stream Submissions: 24078   Accuracy: 32.04%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
                  
Given an input stream of N characters consisting only of lower case alphabets. The task is to find the first non repeating character, each time a character is inserted to the stream. If no non repeating element is found print -1.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the stream. Then in the next line are x characters which are inserted to the stream.

Output:
For each test case in a new line print the first non repeating elements separated by spaces present in the stream at every instinct when a character is added to the stream, if no such element is present print -1.

Constraints:
1 <= T <= 200
1 <= N <= 500

Example:
Input:
2
4
a a b c
3
a a c

Output:
a -1 b b
a -1 c

*/
    
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void nrcs(char s[],int n)
{
    queue<char>q;
    int c[26]={0};
    for(int i=0;i<n;i++)
    {
        // Push it into the queue
        q.push(s[i]);
        // Increase frequency of current element
        c[s[i]-'a']++;
        while(!q.empty())
        {
            // Try element in front of the queue
                
                // If it's frequency>1 it can't be non repeating pop it out and try next one
            if(c[(q.front()-'a')] >1)
            q.pop();
            else
            {
                // Freq=1 so print and break
                cout<<q.front()<<" ";
                break;
            }
        }
         // Can't find any non repeating character
        if(q.empty())
        cout<<"-1"<<" ";
    }
}
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
 char s[500];
 //int c[26]={0};
 
 for(int i=0;i<n;i++)
 cin>>s[i];
 nrcs(s,n);
 cout<<endl;
 }
	//code
	return 0;
}
