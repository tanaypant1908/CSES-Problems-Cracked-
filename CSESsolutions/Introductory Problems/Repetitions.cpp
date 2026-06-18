/*  Problem: Repetitions
Link: https://cses.fi/problemset/task/1069
Q. You are given a DNA sequence: a string consisting of characters 
A, C, G, and T. Your task is to find the longest repetition in the
 sequence. This is a maximum-length substring containing only one
type of character.
Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Example
Input:
ATTCGGGA
Output:
3     */
/*Approach:-
Our logic is to maintain a variable count to store the running count 
of the contiguous character. Iterate over the string, if the 
current character is same as the previous character, increment
count by 1. Otherwise reset count to 1. Also keep checking for 
the maximum value of count and store it in ans. After iterating
over the entire string, return ans as the final result. */

#include <iostream>
using namespace std;
#include <algorithm> 
/* We need <algorithm> for using max function which compares the
values of variables we give and returns the greatest value */
int main(){
string s;
cin>>s;
int ans=1;
int count =1;
for(int i= 1; i<=s.length();i++ )
{
  if (s[i]== s[i-1])
  {
    count = count +1;
  }
  else count = 1;
  ans = max(ans,count);
}
cout<<ans;
}