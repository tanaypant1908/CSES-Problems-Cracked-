/* Problem: Two Sets
Link: https://cses.fi/problemset/task/1092
Q. Your task is to divide the numbers 1,2,...,n into two sets of equal sum.
Input
The only input line contains an integer n.
Output
Print "YES", if the division is possible, and "NO" otherwise. After this, if the division is 
possible, print an example of how to create the sets. First, print the number of elements in the 
first set followed by the elements themselves in a separate line, and then, print the second set 
in a similar way.
Example 1
Input:
7
Output:
YES
4
1 2 4 7
3
3 5 6
Example 2
Input:
6
Output:
NO          */

/* Approach:- 
The idea is to divide the numbers from 1 to n into two sets having the same sum. First, 
calculate the total sum of all numbers using n*(n+1)/2. If this sum is odd, it is impossible to 
split the numbers into two equal-sum sets, so we print "NO". Otherwise, each set must have a sum 
equal to sum/2. We then greedily construct the first set by starting from the largest number n and 
moving down to 1. For every number i, if it does not exceed the remaining target sum, we add it to 
set1 and decrease the target by i; otherwise, we place it in set2. Choosing the largest possible 
number at each step helps us reach the target quickly. When the target becomes 0, set1 has the 
required sum, and all remaining numbers in set2 automatically have the same sum.*/

#include <bits/stdc++.h>
using namespace std;
typedef int in;
#define int long long
in main(){
    int n;
    cin >> n;
    int sum;
    sum= n*(n+1)/2;
    vector <int> set1;
    vector <int> set2;
    if(sum%2!=0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES"<<endl;
        int target=sum/2;
        for(int i=n;i>=1;i--)
        {
           if(i<=target)
           {
              set1.push_back(i);
              target=target-i;
           }
           else{
             set2.push_back(i);
           }
           
        }
    cout << set1.size() << endl;
    for (int x : set1) cout << x << " ";
    cout << endl;
    cout << set2.size() << endl;
    for (int x : set2) cout << x << " ";
    cout << endl;
    }
}