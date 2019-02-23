/*
Longest Palindrome in a String
Submissions: 42065   Accuracy: 31.67%   Difficulty: Medium   Marks: 4
Associated Course(s):   Sudo Placement [IITs]
     
        
Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. Incase of conflict, return the substring which occurs first ( with the least starting index ).

NOTE: Required Time Complexity O(n2).

Input:
The first line of input consists number of the testcases. The following T lines consist of a string each.

Output:
In each separate line print the longest palindrome of the string given in the respective test case.

Constraints:
1 ≤ T ≤ 100
1 ≤ Str Length ≤ 104

Example:
Input:
1
aaaabbaa

Output:
aabbaa

Explanation:
Testcase 1: The longest palindrome string present in the given string is "aabbaa".
*/
// A O(n^2) time and O(1) space program to find the longest palindromic substring
#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

// A utility function to print a substring str[low..high]
void printSubStr(string str, int low, int high)
{
	for( int i = low; i <= high; ++i )
		printf("%c", str[i]);
	cout<<endl;
}

// This function prints the longest palindrome substring (LPS)
// of str[]. It also returns the length of the longest palindrome
int longestPalSubstr(string str)
{
	int maxLength = 1; // The result (length of LPS)

	int start = 0;
	int len = str.length();

	int low, high;
                                   
	// One by one consider every character as center point of 
	// even and length palindromes
	for (int i = 1; i < len; ++i)
	{
		// Find the longest even length palindrome with center points
		// as i-1 and i. 
		low = i - 1;
		high = i;
		while (low >= 0 && high < len && str[low] == str[high])
		{
			if (high - low + 1 > maxLength)
			{
				start = low;
				maxLength = high - low + 1;
			}
			--low;
			++high;
		}

		// Find the longest odd length palindrome with center 
		// point as i
		low = i - 1;
		high = i + 1;
		while (low >= 0 && high < len && str[low] == str[high])
		{
			if (high - low + 1 > maxLength)
			{
				start = low;
				maxLength = high - low + 1;
			}
			--low;
			++high;
		}
	}

// 	printf("Longest palindrome substring is: ");
	printSubStr(str, start, start + maxLength - 1);

// 	return maxLength;
}

// Driver program to test above functions 
int main() 
{ 
    int t;cin>>t;
    while(t--){
        string str;cin>>str;
        longestPalSubstr(str);
    }
	return 0; 
} 
