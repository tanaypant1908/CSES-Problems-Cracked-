/* Problem: Repetitions
Link: https://cses.fi/problemset/task/1072
Q. Your task is to count for k=1,2,...,n the number of ways two 
knights can be placed on a k x k chessboard so that they do not 
attack each other.
Input
The only input line contains an integer n.
Output
Print n integers: the results.
Example
Input:
8
Output:
0
6
28
96
252
550
1056
1848     */
/* Approach:-
To get the answer which is number of ways two knights placed on a k x k chessboard do not attack each 
other, we will subtract number of ways two knights can attack each other from total number of ways 
knights can be placed in the chessboard. Total number of ways knights can be placed in the chessboard
is (k^2)C2 which is equal to (k^2)(k^2-1)/2. To find number of ways two knights can attack each other, 
we must that if there is a event where two knights attack each other they are always at the opposite 
corners of a (2x3) or (3x2) subgrid/rectangle. In both of the (2x3) or (3x2) rectangles, there are 2
ways knights can attack each other as there are two sets of corners in each. For a 2x3 rectangle, 
there are (k-1) ways to arrange this rectangle in rows of a chessboard(start from 1st row and keep 
sliding down. When we come to the kth row, 1 row will exceed, so we can only go till to (k-1)th row). 
Similarly, to to arrange 2x3 rectangle in columns of a chessboard there are (k-2) ways. Similarly, 
for a 3x2 rectangle, there are (k-2) ways to arrange this rectangle in rows of a chessboard. Similarly, 
to arrange 3x2 rectangle in columns of a chessboard there are (k-1) ways. Total number of ways knights 
can attack each other is 2(k-1)(k-2)+2(k-2)(k-1) which is equal to 4(k-1)(k-2). Total number of ways 
knights do not attack each can be now calculated.*/  
#include <bits/stdc++.h>
using namespace std;
typedef int in;
#define int long long
in main()
{
 int n;
 cin>>n;
 for (int k=1; k<=n; k++)
 {
    int ways= ((k*k)*(k*k-1)/2) - 4*(k-1)*(k-2);
      cout<<ways<<endl;
 }

}