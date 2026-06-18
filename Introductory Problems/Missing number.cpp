/* Problem: Missing Number
Link: https://cses.fi/problemset/task/1083
You are given all numbers between 1,2,...,n except one. Your 
task is to find the missing number.
Input
The first input line contains an integer n.
e.g. 5
The second line contains n-1 numbers. Each number is distinct 
and between 1 and n (inclusive).
e.g. 2 3 1 5 
Output
Print the missing number.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    /* Logic was n could not be 2 but the numbers will range from 1 to n 
as 1 and n are given inclusive. Just the number of entities we enter will
be n-1 as there is one missing number.
So, the sum of numbers 1 to n is n(n+1)/2 by Gauss theorem.
If value of n is 5 then expected sum will be 15.
Suppose we enter 2 3 1 5 so actual sum is 11.
Missing no.= expected sum- actual sum D */
    long long n;
    cin>>n;
    long long expected_sum= (n*(n+1))/2;
    long long x;
    long long actual_sum=0;
    for(long long i= 1; i <=n-1;i++)
    {
       cin>>x;
        actual_sum=actual_sum+x;
    }
    long long missing_number = expected_sum-actual_sum;
    cout<<missing_number;
}
