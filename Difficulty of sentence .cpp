/*
Difficulty of sentence Submissions: 6112   Accuracy: 21.92%   Difficulty: Basic   Marks: 1
       
Problems
Given a sentence as a string S. Write a program to calculate difficulty of a given sentence. A word in the given string is considered hard if it has 4 consecutive consonants or number of consonants are more than number of vowels. Else the word is easy. Difficulty of sentence is defined as 5*(number of hard words) + 3*(number of easy words).
Note: uppercase and lowercase characters are same.

Input:
First line of input contains a single integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains a string S which denotes the sentence.

Output:
For each test case print the difficulty of the sentence as described above.

Constraints:
1<=T<=100
1<= length( S ) <= 105

Example:
Input:
1
Difficulty of sentence
Output:
13
*/
#include<iostream>
using namespace std;
// Utility function to check character is vowel 
// or not 
bool isVowel(char ch) 
{ 
    return ( ch == 'a' || ch == 'e' || 
             ch == 'i' || ch == 'o' || 
             ch == 'u'); 
} 
  
// Function to calculate difficulty 
int calcDiff(string str) 
{ 
  
    int count_vowels = 0, count_conso = 0; 
    int hard_words = 0, easy_words = 0; 
    int consec_conso = 0; 
  
    // Start traversing the string 
    for (int i = 0; i < str.length(); i++) 
    { 
        // Check if current character is vowel 
        // or consonant 
        if (str[i] != ' ' && isVowel(tolower(str[i]))) 
        { 
            // Increment if vowel 
            count_vowels++; 
            consec_conso = 0; 
        } 
  
        // Increment counter for consonant 
        // also mainatin a separate counter for 
        // counting consecutive consonants 
        else if (str[i]!= ' ') 
        { 
            count_conso++; 
            consec_conso++; 
        } 
  
        // If we get 4 consecutive consonants 
        // then it is a hard word 
        if (consec_conso == 4) 
        { 
            hard_words++; 
  
            // Move to the next word 
            while (i < str.length() && str[i]!= ' ') 
                i++; 
  
            // Reset all counts 
            count_conso = 0; 
            count_vowels = 0; 
            consec_conso = 0; 
        } 
  
        else if ( i < str.length() && 
                  (str[i] == ' ' || i == str.length()-1)) 
        { 
            // Increment hard_words, if no. of consonants are 
            // higher than no. of vowels, otherwise increment 
            // count_vowels 
            count_conso > count_vowels ? hard_words++ 
                                       : easy_words++; 
  
            // Reset all counts 
            count_conso = 0; 
            count_vowels = 0; 
            consec_conso = 0; 
        } 
    } 
  
    // Return difficulty of sentence 
    return 5 * hard_words + 3 * easy_words; 
} 
  
int main()


 {
 int t;
 cin>>t;
 while(t--)
 {
     cin.ignore();
 string s;
 getline(cin,s);
cout<<calcDiff(s)<<endl;
 
 }
	//code
	return 0;
}
