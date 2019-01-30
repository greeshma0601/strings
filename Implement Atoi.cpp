/*
Implement Atoi
Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.
 
Input:
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. Each test case contains a string str .

Output:
For each test case in a new line output will be an integer denoting the converted integer, if the input string is not a numerical string then output will be -1.
 
Constraints:
1<=T<=100
1<=length of (s,x)<=10

Example(To be used only for expected output) :
Input:
2
123
21a

Output:
123
-1


*/

#include <bits/stdc++.h>
using namespace std;
int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method */
int atoi(string s)
{
    //Your code here
    if(s == " " )return 0;
    int l1=s.length();
    int i;
    int num=0;
    int sign=1;
    i=0;
    if(s[0] == '-')
    {
        sign=-1;
        i++;
    }    
    for(;i<l1;i++)
    {
        if( s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i] == '4' ||  s[i]=='5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9' )
        {
         //  cout<<s[i];
         num=num*10+s[i]-'0';
        }
        else
        {
            return -1;
            break;
        }
    }
    /*for(i=0;i<l1;i++)
    {
        cout<<s[i];
    }*/
    return num*sign;
}
