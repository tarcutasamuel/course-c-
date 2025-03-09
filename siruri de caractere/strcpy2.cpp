//sa se copieze incepand de la a 3 a litera din sirul a in sirul b
#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
    
    char a[50],b[50]="";
    cin.getline(a,50);
    strcpy(b,a+2);
    cout<<b;

    

    return 0;
}