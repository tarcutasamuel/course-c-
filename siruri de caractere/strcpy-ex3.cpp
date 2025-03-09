// sa se stearga prima aparitie a literei a  din sir 
#include <iostream>
#include <cstring>
using namespace std; 

int main()
{

    char s[50];
    cin.getline(s,50);
    char aux[50];
    for(int i=0;i<strlen(s);i++)
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
/*merica este o tara 
i=5 
aux= este o tara-> peste a este o tara-> s+i+1
-> meric este o tara 