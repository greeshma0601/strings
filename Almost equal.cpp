/*Almost Equal
Given two strings S1 and S2 consisting of only lowercase characters whose anagrams are almost equal. The task is to count the number of characters which needs to be edited(delete) to make S1 equal to S2.

Input:
For each testcase, first line of input contains number of testcase T. For each testcase, there will be two lines containing string S1 and S2.

Output:
For each testcase, print the count of characters needed to delete to make S1 and S2 equal.

Constraints:
1 <= T <= 100
1 <= S1, S2 <= 104

Example:
Input:
1
madame
madam

Output:
1

Explanation:
Testcase 1: String S1 = madame, string S2 = madam. character 'e' in first string needs to be deleted to make S1 equal to S2.*/

//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
// Function Prototype
int countChars(string, string);
// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    
	    // taking string input
	    string s1, s2;
	    cin >> s1 >> s2;
	    
	    cout << countChars(s1, s2) << endl;
	}
	
	return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
int countChars(string s1, string s2){
    
    // Your code here
    long long int i;
    long long int a[27]={0};
    long long int b[27]={0};
    long long int l1=s1.size();
    long long int l2=s2.size();
    for(i=0;i<l1;i++)
    {
        a[s1[i]-96]++;
    }
    for(i=0;i<l2;i++)
    {
        b[s2[i]-96]++;
    }
    long long int c=0;
    for(i=0;i<27;i++)
    {
        if(a[i]!=b[i])
        {
            c+=abs(a[i]-b[i]);
        }
    }
    return c;
    
}
