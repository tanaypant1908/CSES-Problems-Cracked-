/* Problem: Number spiral
Link:https://cses.fi/problemset/task/1071
Q. A number spiral is an infinite grid whose upper-left 
square has number 1. Here are the first five layers of
the spiral:
[1 ,2, 9, 10, 25]
[4, 3, 8, 11, 24]
[5, 6, 7, 12, 23]
[16,15, 14,13,22]
[17,18, 19,20,21]
Your task is to find out the number in row y and column x.
Input
The first input line contains an integer t: the number 
of tests.
After this, there are t lines, each containing integers
y and x.
Output
For each test, print the number in row y and column x.
Example
Input:
3
2 3
1 1
4 2
Output:
8
1
15   */
/* Approach:-
For each test case, it reads the row y and column x. The main idea is that 
the value at any position depends on which "layer" of the spiral it belongs
to. The layer is determined by the larger of x and y. If x is greater than
or equal to y, the position lies on a layer controlled by the column number. 
If x is odd, the largest number of that layer is x*x, and theanswer is found 
by moving upward from that value. If x is even, the layer starts after 
(x-1)*(x-1), so the answer is calculated by moving downward. Similarly, 
when y is greater than x, the row number determines the layer. For odd y, 
the answer is obtained by moving right from (y-1)*(y-1), while for even y, 
it is found by moving left from y*y. By using these patterns and formulas, 
the code directly calculates the required number in constant time without 
generating the entire spiral.  */
#include <bits/stdc++.h>
using namespace std;
typedef int in;
#define int long long
in main()
{
int t;
cin>>t;
for(int i=1; i<=t; i++){
    int y;
    int x;
    cin>>y;
    cin>>x;
    int ans=0;
if(x>=y)
{
    if( x%2 !=0)
    {
      ans = x*x -(y-1);
    }
    else{
        ans=(x-1)*(x-1) + y;
    }
}
else{
    if (y%2!=0)
    {
        ans=(y-1)*(y-1) +x;
    }
    else {
        ans=y*y-(x-1);
    }
}
cout<<ans<<endl;
}

}
