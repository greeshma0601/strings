/*

Transform String Submissions: 7890   Accuracy: 13.45%   Difficulty: Medium   Marks: 4
       
Problems
You are provided two strings A and B. You have to transform string A into string B in minimum number of steps. Only one operation is allowed, chose any of the characters in string A and place it in the front of A. If its not possible to transform string A into string B then print -1 otherwise print the minimum number of steps required.

Note: All the characters in the string are lowercase English characters.

Input :

The first line contains integer T, denoting number of test cases. Then T test cases follow . 
The first line of each test case contains two space separated  strings A and B.

Output:
Print in a new line the answer of each test case .

Constraints :

1<=T<=100

1<=|A|,|B|<=10^5

Example:
Input:
2
bcad abcd
abdd dbad

Output :
1
2
*/
#include <iostream>
#include <queue>
#include <limits>
#include <utility>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
	int t;
	cin>>t;
	string s1,s2;
	while(t--){
		
		cin>>s1>>s2;
		int pos=s2.length()-1,ans=0;
		int arr[26]={0};
	/*	for(int i=0;i<s1.length();i++){
			arr[s1[i]-'a']++;
		}*/
		int a=s1.length()-1,b=s2.length()-1;
		if(a!=b){
			ans=-1;
			a=-1;
		}
		string x1=s1;
		string x2=s2;
		sort(x1.begin(),x1.end());
		sort(x2.begin(),x2.end());
		/*for(int i=0;i<s1.length();i++){
			arr[s2[i]-'a']--;
		}*/
		
	/*	for(int i=0;i<26;i++){
			if(arr[i]!=0){
				ans=-1;
				a=-1;
			}
		}
*/
if(x1!=x2){
    ans=-1;a=-1;
}
		while(a>=0){
			if(s1[a]==s2[b]){
				a--;b--;
			}
			else{
				a--;
				ans++;
			}
		}
		
		cout<<ans<<endl;
	/*	for(int i=0;i<26;i++){
		//	cout<<(char)('a'+i)<<":"<<arr[i]<<endl;
		}*/
	}
}
