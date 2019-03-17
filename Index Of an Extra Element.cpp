/*
Index Of an Extra Element
Given two sorted arrays. There is only 1 difference between the arrays. First array has one element extra added in between. Find the index of the extra element.

Input:
The first line of input contains an integer T, denoting the no of test cases. Then T test cases follow. The first line of each test case contains an integer N, denoting the number of elements in array. The second line of each test case contains N space separated values of the array A[]. The Third line of each test case contains N-1 space separated values of the array B[].

Output:
Return the index of the corresponding extra element in array A[].(starting index 0).

Constraints:
1<=T<=100
1<=N<=100
1<=Ai<=1000

Example:
Input:
2
7
2 4 6 8 9 10 12
2 4 6 8 10 12
6
3 5 7 9 11 13
3 5 7 11 13
Output:
4
3
*/

/*Complete the function below*/
int findExtra(int a[],int b[],int n)
{
 //add code here.
 int f=0;int i;
 for(i=0;i<n;i++)
 {
     if(a[i] == b[i])
     {
         
     }
     else {
         f=1;break;
     }
 }
 if(f){
     return i;
 }
 else return n;
}
