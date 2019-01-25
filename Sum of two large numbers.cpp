/*
Sum of two large numbers Submissions: 20183   Accuracy: 18.22%   Difficulty: Easy   Marks: 2
        
Given two non-negative numbers X and Y. The task is calculate the sum of X and Y. If the number of digits in sum (X+Y) are equal to the number of digits in X, then print sum, else print X.

Input:

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two numbers X and Y.

Output:
For each test case, print the required answer.

Constraints:
1<=T<=500
1<=|Digits in X,Y|<=100

Example:
Input:
2
25 23
100 1000

Output:
48
100

EXPLANATION:

TestCase2: Since 100+1000=1100 which has 4 digits while 100(i.e X) has only 3 digits.Hence our answer will be 100 as per the prob statement.

*/

#include<bits/stdc++.h>
#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
     cpp_int x,y;
     cin>>x>>y;
    cpp_int n;
    int c1=0,c2=0;
     n=x;
     while(n!=0)
     {
         n=n/10;
         c1++;
         //n=n/10;
     }
     n=x+y;
     while(n!=0)
     {
         n=n/10;
         c2++;
         //n=n/10;
     }
 if(c1==c2){cout<<x+y;}
 else{cout<<x;}
 cout<<endl;
 }
	//code
	return 0;
}
