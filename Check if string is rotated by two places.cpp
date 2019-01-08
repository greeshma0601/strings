#include<iostream>
#include<cstring>
using namespace std;
int main()
 {
 int t,f=0;
 cin>>t;
 while(t--)
 {
 string s1,s2;
 cin>>s1>>s2;
 int l1,l2,i;
 l1=s1.length();
 l2=s2.length();
if(l1!=l2)
{
    cout<<"0";
    break;
}
if(s1[0]==s2[l1-2]&&s1[1]==s2[l1-1] || s1[l1-1]==s2[1] && s1[l1-2]==s2[0])
{
    cout<<"1";
   // break;
}
else
{
    cout<<"0";
    //break;
}
cout<<endl;
}
	return 0;
}
