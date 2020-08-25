/**
Daily Coding Problem: Problem #518 [Easy]

This problem was asked by Microsoft.

Given an array of numbers and a number k, determine if there are three entries in the array
which add up to the specified number k. For example, given [20, 303, 3, 4, 25] and k = 49
return true as 20 + 4 + 25 = 49


**/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool ifThreeSumExists(int arr[],int n,int k)
{
    if(n<3)
        return false;
   unordered_set<int> uSet;
   for(int i=0;i<n-2;i++){
       int num = arr[i];
       int numToCheck = k - num;
       for(int j=i+1;j<n;j++){
           if(uSet.find(numToCheck - arr[j]) != uSet.end())
                return true;
           else
               uSet.insert(arr[j]);
       }
       uSet.insert(arr[i]);
   }
   return false;
}

int main()
{
    int arr[] = {12, 3, 4, 1, 6, 9};
    int k = 24;
    cout << "ans is: " << ifThreeSumExists(arr,6,k) << endl;
    return 0;
}