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
    char c='R';
    int y=0;
    int x=0;
    int i=0;
    int inc=10;
    while(i<n){
        int dir=i%4;
        if(dir==0){
            x=x+inc;
        }
        else if(dir==1){
            y=y+inc;
        }
        else if(dir==2){
            x=x-inc;
        }
        else{
            y=y-inc;
        }
        
        inc=inc+10;
        i++;
    }
    cout<<x<<" "<<y;
}