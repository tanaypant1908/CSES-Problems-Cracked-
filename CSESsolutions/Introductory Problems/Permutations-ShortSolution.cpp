/* Problem: Missing Number
Link: https://cses.fi/problemset/task/1070
Q. A permutation of integers 1,2,...,n is called beautiful if there are no 
adjacent elements whose difference is 1. Given n, construct a beautiful 
permutation if such a permutation exists.
Input
The only input line contains an integer n.
Output
Print a beautiful permutation of integers 1,2,...,n. If there are several 
solutions, you may print any of them. If there are no solutions, print 
"NO SOLUTION".
Example 1
Input:
5
Output:
4 2 5 3 1
Example 2
Input:
3
Output:
NO SOLUTION */

/*Approach:-
The main idea is to avoid placing two consecutive numbers next to each 
other, because their difference is 1. For example, pairs like (1,2), (2,3), 
(3,4) are not allowed to be adjacent. If we arrange all even numbers first 
and then all odd numbers, the difference between neighboring numbers within 
each group is at least 2. For example, in the even sequence 2 4 6, each 
adjacent pair differs by 2, and similarly in the odd sequence 1 3 5. When 
the even and odd groups are joined, the boundary pair also does not differ 
by 1. Therefore, printing all even numbers from 2 to n followed by all odd 
numbers from 1 to n always produces a beautiful permutation whenever a 
solution exists. The only exceptions are n = 2 and n = 3, for which no 
arrangement can avoid having two adjacent numbers differ by 1, so the 
answer is "NO SOLUTION".*/

#include <bits/stdc++.h>
using namespace std;
typedef int in;
#define int long long
in main(){
    int n;
    cin >> n;

    if (n == 2 || n == 3) cout << "NO SOLUTION";

    for (int i = 2; i <= n; i += 2) cout << i << " ";

    for (int i = 1; i <= n; i += 2) cout << i << " ";

}