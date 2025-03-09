//sa se copieze sirul a in b pana la a 5 a litera 
#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
    
    char a[50],b[50]="";
    cin.getline(a,50);
    strncpy(b,a,5);
    cout<<b;

    

    return 0;
}
//ana are mere 
//ana a