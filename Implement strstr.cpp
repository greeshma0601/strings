/*
Implement strstr
Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. The function returns and integer denoting the first occurrence of the string x in s.

Input Format:
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of each test case contains two strings s and x.

Output Format:
For each test case, in a new line, output will be an integer denoting the first occurrence of the x in the string s. Return -1 if no match found.

Your Task:
Since this is a function problem, you don't have to take any input. Just complete the strstr function.

Constraints:
1 <= T <= 100
1<= |s|,|x| <= 1000

Example:
Input
2
GeeksForGeeks Fr
GeeksForGeeks For
Output
-1
5
*/

#include<bits/stdc++.h>
using namespace std;
int strstr(string ,string);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        cin>>a;
        cin>>b;
        cout<<strstr(a,b)<<endl;
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
    return s.find(x);
     //Your code here
     /*int i;
     int l1=s.length();
     int l2=x.length();
     for(i=0;i<l1;)
     {
         if(s[i] == x[i])
         {
             
         }
     }*/
}
