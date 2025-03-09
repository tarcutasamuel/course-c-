// sa se stearga ultima aparitie a literei a  din sir 
#include <iostream>
#include <cstring>
using namespace std; 

int main()
{

    char s[50];
    cin.getline(s,50);
    char aux[50];
    for(int i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]=='a'||s[i]=='A')
        {
            strcpy(aux,s+i+1);
            strcpy(s+i,aux);
            break;
        } 
    }
    cout<<s;
   
    
    

    return 0;
}
/*
america este 
i=11->i=6
aux-> s+i+1-> " este"

*/