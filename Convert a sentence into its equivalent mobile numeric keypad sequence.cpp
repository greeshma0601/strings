/*
Convert a sentence into its equivalent mobile numeric keypad sequence Submissions: 1911   Accuracy: 23.93%   Difficulty: Easy   Marks: 2
      
Given a sentence in the form of a string in uppercase, convert it into its equivalent mobile numeric keypad sequence.



Input:
The first line of the input contains an integer T denoting the number of test cases.  For each test case, there is a string s as an input.

Output:
For each test case, the output is a string displaying equivalent mobile numeric keypad sequence. 

Constraints:
1<=T<=100
1<=S<=10^5
'A'<=S[i]<='Z'
Note: Whitespace and alphabets are allowed in uppercase only.  Whitespace is denoted by 0

Example:
Input:
2
GEEKSFORGEEKS
HELLO WORLD
Output:
4333355777733366677743333557777
4433555555666096667775553

Explanation:
For obtaining a number, we need to press a number corresponding to that character for the number of times equal to the position of the character. For example, for character C, we press number 2 three times and accordingly.

*/


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 cin.ignore();
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 //cin.ignore();
 string s;int i;
getline(cin,s);
 int n=s.length();
// cout<<s[0]<<endl;
 for(i=0;i<n;i++)
 {
     if(s[i]== ' ')cout<<"0";
     if(s[i] == 'A')cout<<"2";
     if(s[i] == 'B')cout<<"22";
     if(s[i] == 'C')cout<<"222";
     if(s[i] == 'D')cout<<"3";
     if(s[i] == 'E')cout<<"33";
     if(s[i] == 'F')cout<<"333";
     if(s[i] == 'G')cout<<"4";
     if(s[i] == 'H')cout<<"44";
     if(s[i] == 'I')cout<<"444";
     if(s[i] == 'J')cout<<"5";
     if(s[i] == 'K')cout<<"55";
     if(s[i] == 'L')cout<<"555";
     if(s[i] == 'M')cout<<"6";
     if(s[i] == 'N')cout<<"66";
     if(s[i] == 'O')cout<<"666";
     if(s[i] == 'P')cout<<"7";
     if(s[i] == 'Q')cout<<"77";
     if(s[i] == 'R')cout<<"777";
     if(s[i] == 'S')cout<<"7777";
     if(s[i] == 'T')cout<<"8";
     if(s[i] == 'U')cout<<"88";
     if(s[i] == 'V')cout<<"888";
     if(s[i] == 'W')cout<<"9";
     if(s[i] == 'X')cout<<"99";
     if(s[i] == 'Y')cout<<"999";
     if(s[i] == 'Z')cout<<"9999";
 }
 cout<<endl;
 }
	//code
	return 0;
}
