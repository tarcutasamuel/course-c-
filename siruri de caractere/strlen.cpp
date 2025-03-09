//se citeste un sir sa se afiseze lungimea lui 
#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
    
    char x[50];
    cin.getline(x,50);
    for(int i=0;i<strlen(x);i++)
    {
        cout<<x[i];
    }
    

    return 0;
}