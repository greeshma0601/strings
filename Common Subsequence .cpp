/*
Common Subsequence Submissions: 6102   Accuracy: 41.37%   Difficulty: Easy   Marks: 2
       
Problems
Given two strings a and b print whether they contain any common subsequence (non empty) or not.

Input:
The first line contains an integer T denoting number of testcases. Each of the next T lines contains two strings a and b.

Output:
Print 1 if they have a common subsequence (non empty) else 0.

Constraints:
1<=T<=10^5
1<= |a|=|b| <=30
a and b consist of uppercase English letters ('A'....'Z')

Example:
Input:
1
ABEF CADE
Output:
1

Explanation:
AE is a subsequence of both the string so the answer is 1.
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
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
string s1;
string s2;


 cin>>s1>>s2;
int n=0;
for(auto x:s1)
if(s2.find(x)!=string::npos){n=1;break;}
cout<<n<<endl;
 /*vector<char>v;
 set<char>s1;
 set<char>s2;
 for(int i=0;i<st1.length();i++)
 s1.insert(st1[i]);
 for(int i=0;i<st2.length();i++)
 s2.insert(st2[i]);
 set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(v));
	if(v.size()){
	    cout<<1;
	    auto it=v.begin();
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    else cout<<0;
    cout<<endl;*/
 }
	//code
	return 0;
}
