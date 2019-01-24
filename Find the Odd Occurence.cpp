/*
Find the Odd Occurence Submissions: 15853   Accuracy: 47.8%   Difficulty: Basic   Marks: 1
Associated Course(s):   Interview Preparation   Sudo Placement [IITs]
            
Given an array of positive integers where all numbers occur even number of times except one number which occurs odd number of times. Find the number.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines. The first line of each test case consists of an integer N, where N is the size of array. The second line of each test case contains N space separated integers denoting array elements.

 

Output:
Corresponding to each test case, print the number which occur odd number of times. If no such element exists, print 0.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
1 ≤ A[i] ≤ 106

Example:
Input:
1
5
8 4 4 8 23
Output:
23

Explanation:
Testcase 1: 23 is the element which occurs odd number of times.

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
 int i,n,c=0;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 unordered_map<int,int> um;
 for(i=0;i<n;i++)
 {
     um[a[i]]++;
 }
 int f=0;
 unordered_map<int,int> :: iterator itr;
 for(itr=um.begin();itr!=um.end();itr++)
 {
     int x=(itr->second)%2;
     if(x!=0)
     {
         cout<<itr->first<<endl;
         f=1;
         break;
     }
 }
 if(f==0)
 {cout<<"0"<<endl;}
 
 }
	//code
	return 0;
}
