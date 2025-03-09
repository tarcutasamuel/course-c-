//sa se citeasca un sir a si sa se copieze in b sirul a
#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
    
    char a[50],b[50]="";
    cin.getline(a,50);
    strcpy(b,a);
    cout<<b;

    

    return 0;
}