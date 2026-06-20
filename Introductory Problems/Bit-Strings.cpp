/* Problem: Bit Strings
Link: https://cses.fi/problemset/task/1617
Your task is to calculate the number of bit strings of length n.
For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 
010, 011, 100, 101, 110, and 111.
Input
The only input line has an integer n.
Output
Print the result modulo 10^9+7.
Example
Input:
3
Output:
8         */
/*Approach:-
The total number of unique bit strings of length n is 2^n. For example, if the length n = 3, there 
are 2³ = 8 possible combinations. Since n can be as large as 10^6, the true value is too massive to
store in memory, so we compute the result modulo 10^9+7 by utilizing the distributive property of 
modular arithmetic, which states that (A x B)(mod M) = ((A (mod M)) x (B (mod M)) (mod M). It does not 
matter at what stage you apply the modulo M, as long as you apply it after a multiplication step. 
You can apply it after every single multiplication, or you can apply it at the very, very end—the 
final remainder will always be identical.This works because of the core mathematical property we just 
learned. By running a loop n times that multiplies our answer by 2 and applies the modulo operator on 
every single iteration, we drop full packages of 10^9+7 that have a remainder of zero; this mathematical 
property guarantees that shrinking the intermediate numbers prevents integer overflow while keeping 
the final remainder 100% accurate.  */
#include <bits/stdc++.h>
using namespace std;
typedef int in;
#define int long long
in main()
{
    int n;
    cin>>n;
    int ans = 1;
    int mod = 1000000007;

    // Multiply by 2 at each step and apply modulo to prevent overflow
    for (int i = 0; i < n; i++) {
        ans = (ans * 2) % mod;
    }

    cout << ans << "\n";
    
}