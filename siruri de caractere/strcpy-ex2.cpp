// sa se stearga a p -a litera din sir 
#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
    int p;
     cin>>p;
    getchar();
    char s[50];
    cin.getline(s,50);
    char aux[50];
    strcpy(aux,s+p);
    strcpy(s+(p-1),aux);
    cout<<s;
    

    return 0;
}
