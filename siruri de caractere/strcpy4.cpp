//sa se copieze in sirul b incepand de la a 3 a litera continuand cu celelalte 3
#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
    
    char a[50],b[50]="";
    cin.getline(a,50);
    strncpy(b,a+3,3);
    cout<<b;

    

    return 0;
}
//ana are mere
// ar