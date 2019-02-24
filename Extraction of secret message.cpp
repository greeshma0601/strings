/*
Extraction of secret message Submissions: 1603   Accuracy: 28.98%   Difficulty: Basic   Marks: 1
     

Mridushi likes to play with strings. One day Vaibhav challenged her and gave her some strings. Each string contains some secret message. Vaibhav mixed the secret message with some specified substring "LIE" .

For eg. "I AM COOL" is given as "LIELIEILIEAMLIECOOL".

But Mridushi has to leave for some urgent work. So in the absence of her, help to find out the secret message.
 

Input:

First line contains the number of test cases, T.
First line of each test case contains the string, M.

Output:

Print the secret message.
 

Constraints:

1<=T<=10
Length of string doesnt exceed 200 characters.


Example:

Input

2
LIELIEILIEAMLIECOOL
LIELIEABCLIELIELIE
 

Output
I AM COOL
ABC

** For More Input/Output Examples Use 'Expected Output' option **
Contributor: vaibhav garg
Author: justrelax
 
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
 string s;
 cin>>s;
 for(int i=0;i<s.length();i++)
 {
     if(s[i] == 'L' && s[i+1] == 'I' && s[i+2] == 'E' )
     {
         i+=2;
        
     }
     else
     {
        
        cout<<s[i];
       
      if(s[i+1] == 'L' && s[i+2] == 'I' && s[i+3] == 'E' )
      cout<<" ";
     }
 }
 cout<<endl;
 
 }
	//code
	return 0;
}
