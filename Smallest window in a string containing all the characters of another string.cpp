/*
Smallest window in a string containing all the characters of another string Submissions: 8850   Accuracy: 34.11%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Geeks Classes in Noida   Geeks Classes DSA Less
                
Problems
Given a string S and text T. Output the smallest window in the string S having all characters of the text T. Both the string S and text T contains lowercase english alphabets.

Input:
First line of the input contains an integer T, denoting the number of test cases. Then T test case follows. Each test contains 2 lines having a string S and next line contains text T.

Output:
Output the smallest window of the string containing all the characters of the text. If such window doesn`t exist or this task can not be done then print -1.

Constraints: 
1 <= T <= 100
1 <= |N|, |X| <= 1000

Example:
Input:
2
timetopractice
toc
zoomlazapzo
oza

Output:
toprac
apzo
*/

#include<bits/stdc++.h>
using namespace std;


# define ll long long 
# define pb push_back
# define mp make_pair

const int no_of_chars = 256; 

long long maxsubarray(long long a[],long long  n){
    long long i,meh=a[0],msf=a[0];
    for(ll i=1;i<n;i++){
        meh=max(a[i],meh+a[i]);
        msf=max(msf,meh);
    }
    return msf;
}

bool prime[1000000+5];
vector<ll>prime_store;
void SieveOfEratosthenes(ll n) 
{ 
    memset(prime, true, sizeof(prime)); 
    for (ll p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (ll i=p*2; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (ll p=2; p<=n; p++) 
       if (prime[p]) 
       prime_store.push_back(p);
        //   cout << p << " "; 
} 

bool perfectno(ll n ){
    ll sum =1;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            sum+=(i+n/i);
        }
    }
    if(sum==n && n!=1)return true;
    return false;
}  

ll maxprimefactor(ll n){
    ll max = -1;
    while(n%2==0){
        max=2;
        n/=2;
    }
    for(ll i=3;i*i<=n;i+=2){
        while(n%i==0){
            max = i;
            n/=i;
        }
    }
    if(n>2)max = n;
    return max;
}

string multiplyStrings(string str1, string str2){
    int sign = 1;
    if (str1[0] == '-') {
       sign = sign * (-1);
       str1.erase(str1.begin());
    }
   
    if (str2[0] == '-') {
       sign = sign * (-1);
       str2.erase(str2.begin());
    }

    int m=str1.length(),n=str2.length();

    int pos[m+n+1]={0};
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            int mul=(str1[i]-'0')*(str2[j]-'0');
            int p1=i+j,p2=i+j+1;
            int sum=abs(mul)+abs(pos[p2]);
            pos[p1]+=sum/10;
            pos[p2]=sum%10;
        }
    }
    string sb;
    for(int i=0;i<m+n;i++)if(!(sb.length()==0 and pos[i]==0))sb+=to_string(pos[i]);
    if(sb.length()==0)return "0";
    if (sign == -1)
        sb.insert(sb.begin(), '-');
    return sb;
}

string addbinary(string a, string b){
    string res="";
    int s=0;
    int i=a.size()-1,j=b.size()-1;
    while(i>=0 || j>=0||s==1){
        s+=((i>=0)?a[i]-'0':0);
        s+=((j>=0)?b[j]-'0':0);
        res = char(s%2+'0') + res;
        s/=2;//compute carry 
        i--;j--;        
    }    
    return res;
}

string findSubString(string str, string pat) 
{ 
	int len1 = str.length(); 
	int len2 = pat.length(); 

	// check if string's length is less than pattern's 
	// length. If yes then no such window can exist 
	if (len1 < len2) 
	{ 
// 		cout << "No such window exists"; 
		return ""; 
	} 

	int hash_pat[no_of_chars] = {0}; 
	int hash_str[no_of_chars] = {0}; 

	// store occurrence ofs characters of pattern 
	for (int i = 0; i < len2; i++) 
		hash_pat[pat[i]]++; 

	int start = 0, start_index = -1, min_len = INT_MAX; 

	// start traversing the string 
	int count = 0; // count of characters 
	for (int j = 0; j < len1 ; j++) 
	{ 
		// count occurrence of characters of string 
		hash_str[str[j]]++; 

		// If string's char matches with pattern's char 
		// then increment count 
		if (hash_pat[str[j]] != 0 && 
			hash_str[str[j]] <= hash_pat[str[j]] ) 
			count++; 

		// if all the characters are matched 
		if (count == len2) 
		{ 
			// Try to minimize the window i.e., check if 
			// any character is occurring more no. of times 
			// than its occurrence in pattern, if yes 
			// then remove it from starting and also remove 
			// the useless characters. 
			while ( hash_str[str[start]] > hash_pat[str[start]] 
				|| hash_pat[str[start]] == 0) 
			{ 

				if (hash_str[str[start]] > hash_pat[str[start]]) 
					hash_str[str[start]]--; 
				start++; 
			} 

			// update window size 
			int len_window = j - start + 1; 
			if (min_len > len_window) 
			{ 
				min_len = len_window; 
				start_index = start; 
			} 
		} 
	} 

	// If no window found 
	if (start_index == -1) 
	{ 
// 	cout << "No such window exists"; 
	return ""; 
	} 

	// Return substring starting from start_index 
	// and length min_len 
	return str.substr(start_index, min_len); 
} 

// void solve(){
    
// }

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;cin>>t;
    // SieveOfEratosthenes(1000000);
    while(t--){
        ll sum = 0;
        // int n;cin>>n;int a[n];
        string str1,str2;cin>>str1;cin>>str2;
        // for(int i=0;i<n;i++)cin>>a[i];
        // int m;cin>>m;
        string ans = findSubString(str1,str2);
        ans.size()==0?cout<<"-1":cout<<ans;
        // cout<<addbinary(str1,str2);
        cout<<endl;
        // cout<<solve(str1,str2)<<endl;
    }
	return 0;
}
