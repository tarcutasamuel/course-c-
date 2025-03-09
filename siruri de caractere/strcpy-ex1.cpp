// sa se stearga a 3 a litera din sirul s
#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
    
    char s[50];
    cin.getline(s,50);
    char aux[50];
    strcpy(aux,s+3);
    strcpy(s+2,aux);
    cout<<s;
    

    return 0;
}
/*
s=mancare 
aux=care
s=sir +2 copiem aux 
*/