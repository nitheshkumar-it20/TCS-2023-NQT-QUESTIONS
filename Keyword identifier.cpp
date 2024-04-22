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
   char str[16][10]={"break","case","continue","default","defer","else","for","func","goto","if","map","range","return","struct","type","var"};
   string s;
   cin>>s;
   int flag=0;
   for(int i=0;i<16;i++){
       if(str[i]==s){
           cout<<"It's a keyword";
           flag=1;
           break;
       }
      
   }
   if(flag==0)
   cout<<"Not a keyword";
}