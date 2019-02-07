/*
Consonants and Vowels check
Let's learn about CPP strings here. CPP strings are quite different from their C counterpart and have various methods that can be invoked on them. We hope you've read the articles.

You are given a string s containing only lowercase letters. You need to count the number of vowels and the number of consonants.

If vowel count > consonant count then print - “Yes”(without quotes).
If vowel count < consonant count then print - “No”(without quotes).
If vowel count = consonant count then print - “Same”(without quotes).
Input Format:
The first line of input contains T, denoting the number of testcases. T testcases follow. For each testcase there is only one line of input containing s.

Output Format:
For each testcase, in a new line, print the output.

Your Task:
Since this is a function problem, you don't need to take any input. Just complete the function checkString(string  s) that take s as input and produces output.

Constraints:
1 <= T <= 100
1 <= |s| <= 100

Examples:
Input:
2
the quick brown fox jumps over the lazy dog
aaaaaa
Output:
No
Yes
*/

//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
void checkString(string s);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    
	    string s;
	    getline(cin,s);
	    checkString(s);
	   
	}
	return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
void checkString(string s)
{
    int v=0;
    int c=0;
    
    //Your code here
    int l1=s.length();
    for(int i=0;i<l1;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='U' ||s[i]=='O' )
        {
            v++;
        }
        else if(s[i] == ' ')
        {
            continue;
            //c++;
        }
        else
        {
            c++;
        }
    }
    
    if(v>c)
    cout<<"Yes";
    else if(c>v)
    cout<<"No";
    else
    cout<<"Same";
    
    cout<<endl;
}
