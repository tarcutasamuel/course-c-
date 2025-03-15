#include <iostream>
#include <cstring>
using namespace std;
//Să se scrie un program care citeşte de la tastatură 
//o propoziţie formată din mai multe cuvinte separate prin spaţii
//şi transformă prima şi ultima literă a fiecărui cuvânt în literă mare.
int main()
{
    char x[100];
    cin.getline(x,100);
    for(int i=0;i<strlen(x);i++)
    {
        if(x[i-1]==' ' || x[i+1]==' ')
        {
            x[i]=toupper(x[i]);
        }
    }
    x[0]=toupper(x[0]);
    x[strlen(x)-1]=toupper(x[strlen(x)-1]);
    cout<<x;
    return 0;
}

