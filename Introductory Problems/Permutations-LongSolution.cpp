/* Problem: Permutations
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

/*Long Approach:-
Our logic is to first, create the numbers from 1 to n. Then separate them 
into two groups: even numbers and odd numbers. Adjacent even numbers always
differ by at least 2, and adjacent odd numbers also differ by at least 2, so 
placing all evens together and all odds together avoids adjacent numbers 
having a difference of 1. After that, merge the even numbers followed by the
odd numbers to form the beautiful permutation. The only exceptions are n = 2 
and n = 3, for which no arrangement is possible, so we print "NO SOLUTION".*/
#include <bits/stdc++.h>
using namespace std;
typedef int in;
#define int long long
in main(){
    int n;
    cin>>n;
   vector <int> arr(n); 
    vector <int> odd;
    vector <int> even;
    for (int i=0; i<n; i++)
    {
      arr[i]=i+1; // we are taking elemnts from 1 to n at indexes 0 to n-1

    }
    for (int i=0; i<n; i++)
    { 
      if (arr[i]%2==0){
            even.push_back(arr[i]);
      }
     
      else {
           odd.push_back(arr[i]);
      }
 }
      if (n == 2 || n == 3) /* beautiful permutation does not happen only 
      at n=2, n=3 so it is better to handle them sepeartely. */
       {
    cout << "NO SOLUTION";
}
else {
            vector<int> ans = even;
    ans.insert(ans.end(), odd.begin(), odd.end());
    for (int x : ans)
        cout << x << " ";
      }
    
}

