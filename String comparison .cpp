/*
String comparison Submissions: 9404   Accuracy: 16.69%   Difficulty: Easy   Marks: 2
      
Problems
In a native language the increasing order of priority of characters is a, b, c, d, e, f, g, h, i, j, k, l, m, n, ’ng’ , o, p, q, r, s, t, u, v, w, x, y, z. You are given two strings string1 and string2 and your task is to compare them on the basis of the given priority order.

Print ‘0’ if both the strings are equal, ‘1’ if string1 is greater than string2 and ‘-1’ if string1 is lesser than string2. All the strings consist of lowercase English alphabets only.

 

Input:

The first line of the input contains a single integer T denoting the number of test cases. Each of the test case consists of a single line containing space separated two strings string1 and string2. 
 

Output:

For each test case, print the required output in a new line. 
 

Constraints:

1 <= T <= 1000

1 <= |string1, string2| <= 10^8 
 

Example:

Input:

3

adding addio

abcng abcno

abngc abngc

Output:

-1

1

0

Explanation:

Assume 0-based indexing.

For the 1st test case:

The Strings differ at index = 4. Comparing ‘ng’ and ‘o’, we have string1 < string2.

For the 2nd test case:

The Strings differ at index = 3. Comparing ‘ng’ and ‘n’, we have string1 > string2.

For the 3rd test case:

Both the strings are same.
*/
#include <bits/stdc++.h>
using namespace std;
#define fastio std::ios_base::sync_with_stdio(false);

int main() {
    fastio;
    int t;
    cin>>t;
    string s1,s2;
    while(t--){
        cin>>s1>>s2;
        int i,l1=s1.length(),l2=s2.length();
        for(i=0;i<min(l1,l2);i++){
            if(i<l1-1 && s1[i]=='n' && s1[i+1]=='g'){
                if(s2[i]>='o'){
                    cout<<"-1\n";
                    break;
                }
                else if(i<l2-1 && s2[i]=='n' && s2[i+1]=='g'){
                    continue;
                }
                else if(s2[i]<='n'){
                    cout<<"1\n";
                    break;
                }
            }
            else if(i<l2-1 && s2[i]=='n' && s2[i+1]=='g'){
                if(s1[i]>='o'){
                    cout<<"1\n";
                    break;
                }
                else if(i<l1-1 && s1[i]=='n' && s1[i+1]=='g'){
                    continue;
                }
                else if(s1[i]<='n'){
                    cout<<"-1\n";
                    break;
                }
            }
            else if(s1[i]>s2[i]){
                cout<<"1\n";
                break;
            }
            else if(s1[i]<s2[i]){
                cout<<"-1\n";
                break;
            }
            else{
                continue;
            }
        }
        if(l1!=l2){
            if(i==l1){
                cout<<"-1\n";
            }
            else if(i==l2){
                cout<<"1\n";
            }
        }
        else{
            if(i==l1){
                cout<<"0\n";
            }
        }
    }
    return 0;
}
