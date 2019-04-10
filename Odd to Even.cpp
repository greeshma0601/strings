/*
Odd to Even
Given an odd number in the form of string, the task is to make largest even number possible from the given number provided one is allowed to do only one swap operation, if no such number is possible then print the input string itself.

Examples:

Input : 1235785
Output :1535782
Swap 2 and 5.
Input:
Thr first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows, the only line of the input contains an odd number in the form of string.

Output:
For each test case print the largest possible even number that could be formed by using one swap operation only.

Constraints:
1<=T<=100
1<=N<=106

Example:
Input:
3
789
536425
1356425
Output:
798
536524
1356524
*/


/*
Find the first even number less than or equal to the odd number at last index.
If found, swap both values. Else swap with the last even value in the string.
If not possible to make even, print the given string.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Make the largest even number 
string makeEven(string str) 
{ 
    int n = str.length(); 
    int even = INT_MAX, index; 
  
    // Start traversing the string 
    for (int i = 0; i < n - 1; i++) { 
  
        // Find the even number 
        if ((str[i] - '0') % 2 == 0) { 
            even = (str[i] - '0'); 
            index = i; 
        } 
  
        // Check if current even is equal to 
        // or less than the odd number 
        if (even <= (str[n - 1] - '0')) 
            break; 
    } 
  
    // Return original string if there is no 
    // even value 
    if (even == INT_MAX) 
        return str; 
  
    // Swap even and odd value 
    swap(str[index], str[n - 1]); 
  
    return str; 
} 
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 string s;
 cin>>s;
/* int len=s.length();
 int n=s[len-1]-'0';
 int f=0;*/
/* for(int i=0;i<s.length();i++)
 {
     int m=s[i]-'0';
     if((m%2 == 0) && m<n)
     {
         f=1;
         swap(s[i],s[len-1]);
         break;
     }
 }*/
string r=makeEven(s);
cout<<r<<endl;
 }
	//code
	return 0;
}
