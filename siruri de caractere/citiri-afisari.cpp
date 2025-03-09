/*Sa se citeasca un cuvant
Sa se afiseze cuvantul
2.Sa se citeasca o propozitie
Sa se afiseze propozitia
*/
#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
    
    char x[50],y[100];
    cin>>y;
    getchar();
    cin.getline(x,50);
    cout<<x<<y;

    return 0;
}