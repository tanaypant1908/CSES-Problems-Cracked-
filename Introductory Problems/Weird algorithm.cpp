/*  Problem: Weird Algorithm
Link: https://cses.fi/problemset/task/1068
Q. Consider an algorithm that takes as input a positive integer n. 
If n is even, the algorithm divides it by two, and if n is odd, 
the algorithm multiplies it by three and adds one. The 
algorithm repeats this, until n is one.
Your task is to simulate the execution of the algorithm 
for a given value of n.
Input
The only input line contains an integer n.
Output
Print a line that contains all values of n during the algorithm.*/

/*Approach:- 
The problem can be solved by running a while loop till N is not equal to 1. Inside the while loop, 
check if N is odd then multiply it by 3 and add 1 to it otherwise if N is even then divide it by 2. */

#include <iostream>
using namespace std;
int main() {
   long long n; 
   cin>>n;
   cout<<n<<" ";
   while(n!=1){
    if (n%2==0){
        n=n/2;
        cout<<n<<" ";
    }
    else{
        n=3*n+1;
        cout<<n<<" ";
    }
   }
}