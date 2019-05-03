/*
String Ignorance
Given a string of both uppercase and lowercase alphabets, the task is to print the string with alternate occurrences of any character dropped(including space and consider upper and lowercase as same).

Input:
First line consists of T test cases. First line of every test case consists of String S.

Output:
Single line output, print the updated string.

Constraints:
1<=T<=100
1<=|String|<=10000

Example:
Input:
2
It is a long day dear.
Geeks for geeks
Output:
It sa longdy ear.
Geks fore

Explanation:
For the 1st test case. 
Print first "I" and then ignore next "i". Similarly print first space then ignore next space. and so on.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
string s;
cin>>t;
cin.ignore();
while(t--){
unordered_set<char> set;
getline(cin,s);
// transform(s.begin(), s.end(), s.begin(), ::tolower);
int l=s.length();
for(int i=0;i<l;i++)
{
    if(set.find(s[i])==set.end())
    { 
    cout<<s[i]; 
    set.insert(s[i]); 
    if(islower(s[i])) 
    set.insert(toupper(s[i])); 
    if(isupper(s[i]))
    set.insert(tolower(s[i]));
    } 
    else{ 
        set.erase(s[i]);
        if(islower(s[i])) 
        set.erase(toupper(s[i])); 
        if(isupper(s[i]))
        set.erase(tolower(s[i]));
        }
        }
        cout<<endl;
        }
    
}
