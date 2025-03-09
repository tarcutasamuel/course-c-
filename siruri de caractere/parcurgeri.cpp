/*
3.Sa se citeasca o propozitie.
Sa se afiseze literele care sunt vocale (FARA FUNCTII SPECIALE)
*/
#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
    
    char x[50];
    cin.getline(x,50);
    for(int i=0;i<50;i++)
    {
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
        {
            cout<<x[i]<<" ";
        }
    }
    
    

    return 0;
}