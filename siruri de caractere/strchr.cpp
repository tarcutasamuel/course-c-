#include <iostream>
#include <cstring>
using namespace std; 
// sa se ia un sir s si o litera l 
int main()
{

    char s[50];
    char l;
    cin>>l;
    getchar();
    cin.getline(s,50);
    if(strchr(s,l)!=NULL)
    {
        cout<<"am gasit";
    }
    else
    {
        cout<<"nu am gasit";
    }
    

    return 0;
}
