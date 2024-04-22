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
  vector<string>v={"sun","mon","tue","wed","thur","fri","sat","sun"};
  string start;
  getline(cin,start);
  int end;
  cin>>end;
  int st_ind;
  for(int i=0;i<v.size();i++){
      if(v[i]==start){
          st_ind=i;
          break;
      }
  }
  int count=1;
  int result;
  int j=st_ind;
  while(count<=end){
      if(j>v.size()-1){
          j=0;
      }
      if(v[j]=="sun"){
          result++;
      }
      j++;
      count++;
  }
  cout<<result;
}