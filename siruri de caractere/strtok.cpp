#include <iostream>
#include <cstring>
using namespace std;

   int main()
{
    char x[50];
    cin.getline(x,50);
    char *p;
    p=strtok(x," ");
    while(p!=NULL)
    {
        cout<<p<<endl;
        p=strtok(NULL," ");
    }
    
    return 0;
}
/* ana\0are\0mere\0 
   


 */