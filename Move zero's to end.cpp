/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int j;
  for(int i=0;i<n;i++){
      if(arr[i]==0){
          j=i;
          break;
      }
  }
  for(int i=j+1;i<n;i++){
      if(arr[i]!=0){
          swap(arr[j],arr[i]);
          j++;
      }
  }
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
}