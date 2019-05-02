/*
Replace by X
Given a string and a pattern, Replace all the continuous occurrence of pattern with a single X in the string. For a clear view see the example below.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is string str.
The second line of each test case contains a string s,which is a pattern.

Output:

Print the modified string str.

Constraints:

1 ≤ T ≤ 100
1 ≤ size of str,s ≤ 1000

Example:

Input
2
abababcdefababcdab
ab
geeksforgeeks
geeks

Output
XcdefXcdX
XforX
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Function to in-place replace multiple 
// occurrences of a pattern by character ‘X’ 
void replacePattern(string str, string pattern) 
{ 
  
    // making an iterator for string str 
    string::iterator it = str.begin(); 
    // run this loop until iterator reaches end of string 
    while (it != str.end()) { 
        // searching the first index in string str where 
        // the first occurrence of string pattern occurs 
        it = search(str.begin(), str.end(), pattern.begin(), pattern.end()); 
        // checking if iterator is not pointing to end of the 
        // string str 
        if (it != str.end()) { 
            // erasing the full pattern string from that iterator 
            // position in string str 
            str.erase(it, it + pattern.size()); 
            // inserting 'X' at that iterator posiion 
            str.insert(it, 'X'); 
        } 
    } 
  
    // this loop removes consecutive 'X' in string s 
    // Example: GeeksGeeksforGeeks was changed to 'XXforX' 
    // running this loop will change it to 'XforX' 
    for (int i = 0; i < str.size() - 1; i++) { 
        if (str[i] == 'X' && str[i + 1] == 'X') { 
            // removing 'X' at posiion i in string str 
            str.erase(str.begin() + i); 
            i--; // i-- because one character was deleted 
            // so repositioning i 
        } 
    } 
    cout << str<<endl; 
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
 string pat;
 cin>>s>>pat;
 replacePattern(s,pat);
 }
	//code
	return 0;
}
