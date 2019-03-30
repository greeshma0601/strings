/*
C++ Alternate words in reverse order.
Given a string s, display the alternate words in the reverse order.

Input: 
The first line of input contains integer T denoting the number of test cases. For each test case, we input a string s.

Output: 
For each test case, the output is a string displaying the words at even position in reverse order.

Constraints:
1<=T<=100

Example:
Input:
2
Geeks for geeks
hey        geek

Output:
Geeks rof geeks
hey keeg
*/


/*
Using stack:
void reverseWords(string str) 
{ 
    stack<char> st; 
  
    // Traverse given string and push all characters 
    // to stack until we see a space. 
    for (int i = 0; i < str.length(); ++i) { 
        if (str[i] != ' ') 
            st.push(str[i]); 
  
        // When we see a space, we print contents 
        // of stack. 
        else { 
            while (st.empty() == false) { 
                cout << st.top(); 
                st.pop(); 
            } 
            cout << " "; 
        } 
    } 

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 cin.ignore();
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
string str;
getline(cin,str);

    // word variable to store word 
    string word; 
   
    // making a string stream 
    stringstream iss(str); 
   
    // Read and print each word. 
    int c=0;
    string s="";
    while (iss >> word){ 
        if(c%2!=0){
            
        reverse(word.begin(),word.end());c++;}
        else {c++;}
       // s=s+word+' ';
        cout<<word<<" "; 
    } 
 /*cout<<endl;
cout<<s;*/
 cout<<endl;
 }

	//code
	return 0;
}
