/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int mid=0;
   int low=0;
   int high=n-1;
   while(mid<=high){
       if(arr[mid]==0){
           swap(arr[low],arr[mid]);
           mid++;
           low++;
       }
       else if(arr[mid]==1){
           mid++;
       }
       else{
           swap(arr[high],arr[mid]);
           high--;
       }
   }
   for(int i=0;i<n;i++){
       cout<<arr[i];
   }
}