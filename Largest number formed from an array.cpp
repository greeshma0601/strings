/*
Largest Number formed from an Array Submissions: 23830   Accuracy: 40.41%   Difficulty: Medium   Marks: 4
              
Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string.

Input:
The first line of input consists number of the test cases. The description of T test cases is as follows:
The first line of each test case contains the size of the array, and the second line has the elements of the array.

Output:
In each separate line print the largest number formed by arranging the elements of the array in the form of a string.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 102
0 ≤ A[i] ≤ 103

Example:
Input:
2
5
3 30 34 5 9
4
54 546 548 60

Output:
9534330
6054854654

bool mycompare(int x,int y)
{string k,l;
k=to_string(x);
l=to_string(y); 
return (k+l>=l+k);
}

when i used the statement sort(a.begin(),a.end(),mycompare) ,it basically means sort out the array aacording to mycomapre function. it check out for all the possible pairs that can be formed from the array elements.
eg:let take a[]={20,10,3}
total pairs that mycompare function would check are {(20,10) ,(10,3),(20,3)}.
//to_string function converts integer to string .
first pair is (20,10),
x=20;y=10;
k="20";l="10";
k+l=2010 & l+k=1020;
//when mycompare function returns bool value true then order in original array of those two elements won't change but if return false then values in orignal array swaps.
so,here in the statement(k+l>=l+k) as(2010>1020) value return is true ,and hence in array position not changes.
for(10,3) value return would be false .positon swaps.
so now,a[]={20,3,10}
for(20,3) value return would be false again swaps .
so now ,a[]={3,20,10};
hence, all pairs are checked and the largest no obtained is 32010.

*/


#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(string s1,string s2)
{
    return s1+s2>s2+s1;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
     int i,n;
     cin>>n;
 vector<string>v(n);
 for(i=0;i<n;i++)
 cin>>v[i];
 sort(v.begin(),v.end(),cmp);
 for(i=0;i<n;i++)
 cout<<v[i];
 cout<<endl;
 }
	//code
	return 0;
}
