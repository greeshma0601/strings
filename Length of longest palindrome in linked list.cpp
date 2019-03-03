/*
Length of longest palindrome in linked list
Given a linked list, the task is to complete the function maxPalindrome which returns an integer denoting  the length of the longest palindrome list that exist in the given linked list.

Examples:

Input  : List = 2->3->7->3->2->12->24
Output : 5
The longest palindrome list is 2->3->7->3->2

Input  : List = 12->4->4->3->14
Output : 2
The longest palindrome list is 4->4
Input:
The first line of input contains an integer T denotingo the no of test cases. Then T test cases follow. The first line of each test case contains an integer N denoting the size of the linked list . Then in the next line are N space separated values of the given linked list.

Output:
For each test case output will be the required max length of the palindrome present in the given linked list.

Constraints:
1<=T<=100
1<=N<=100

Example(To be used only for expected output):
Input:
2
7
2 3 7 3 2 12 24
5
12 4 4 3 14
Output:
5
2

*/

/* The Node is defined 
  struct Node
  {
     int data;
     Node *next;
  } */
/*The function below returns an int denoting
the length of the longest palindrome list. */
int CountCommon(Node *a,Node *b)
{
    int c=0;
    for(;a && b;a=a->next,b=b->next)
    {
        if(a->data == b->data)
        ++c;
        else 
        break;
    }
    return c;
}

int maxPalindrome(Node *head)
{
    //Your code here
    Node *cur=head;int result=0;
    Node *prev;
    while(cur)
    {
        Node *next=cur->next;
        cur->next=prev;
        result=max(result,2*CountCommon(prev,next)+1);
        result=max(result,2*CountCommon(cur,next));
        prev=cur;
        cur=next;
    }
    return result;
}
