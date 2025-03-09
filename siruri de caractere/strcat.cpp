#include <iostream>
#include <cstring>
using namespace std; 

int main()
{

    char a[50],b[50];
    cin>>a>>b;
    char c[50]="";
    strcpy(c,a);
    strcat(c," ");
    strcat(c,b);
    cout<<c;
    

    return 0;
}
