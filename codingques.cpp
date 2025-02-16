//Accenture Coding Test Questions and Answers
/*
Problem Description :
The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i

Note:
Return -1 if the array is null
Return 0 if the total amount of food from all houses is not sufficient for all the rats.
Computed values lie within the integer range.
Example:

Input:
r: 7
unit: 2
n: 8
arr: 2 8 3 5 7 4 1 2
Output:
4
*/

#include<bits/stdc++.h>
using namespace std;
int calculate (int r, int unit, int arr[], int n)
{
  if (n == 0)
    return -1;
  int totalFoodRequired = r * unit;
  int foodTillNow = 0;
  int house = 0;
  for (house = 0; house < n; ++house)
    {
      foodTillNow += arr[house];
      if (foodTillNow >= totalFoodRequired)
	{
	  break;
	}
    }
  if (totalFoodRequired > foodTillNow)
    return 0;
  return house + 1;
}
int main ()
{
  int r;
  cin >> r;
  int unit;
  cin >> unit;
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i)
    {
      cin >> arr[i];
    }
  cout << calculate (r, unit, arr, n);
  return 0;
}
