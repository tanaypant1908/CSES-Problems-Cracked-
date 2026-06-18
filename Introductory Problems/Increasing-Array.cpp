/* Problem: Missing Number
Link: https://cses.fi/problemset/task/1094
You are given an array of n integers. You want to modify the array so that 
it is increasing, i.e., every element is at least as large as the previous 
element. On each move, you may increase the value of any element by one. 
What is the minimum number of moves required?
Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x1, x2,...xn: the contents of 
the array.
Output
Print the minimum number of moves.
Example
Input:
5
3 2 5 1 7
Output:
5      */
/*Approach:-
Traverse the array from left to right. Whenever the current element is 
smaller than the previous element, keep increasing the current element by 
1 and count each increment as one move. Continue this until the current 
element becomes equal to the previous element. Then move to the next 
position and repeat the process. By always fixing an element before moving 
forward, the array gradually becomes non-decreasing, and the total number of 
increments counted is the required answer.*/
#include <bits/stdc++.h>
using namespace std;
typedef int in;
#define int long long
in main(){
    int n;
    cin>>n;
    int arr[n];
    int count =0;
    for( int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
for(int i=1; i<n; i++)
{
    while(arr[i]<arr[i-1])
    {
      count=count+1;
      arr[i]=arr[i]+1;
    }
}
cout<<count;
}
