#973 Cuvinte1
Cerința
Se dă o propoziție care conține numai litere mici ale alfabetului englez și spații. Să se afișeze cuvintele din propoziție care conțin numai vocale.

Date de intrare
Programul citește de la tastatură șirul dat.

Date de ieșire
Programul va afișa pe ecran cuvintele cerute, în ordinea din propoziție, câte un cuvânt pe linie.

Restricții și precizări
propoziția va conține cel mult 255 de caractere
Exemplu:
Intrare

ei pazesc o oaie
Ieșire

ei
o
oaie

Încărcare soluție
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[201];
    cin.getline(s,201);
    char *p;
    bool x;
    p=strtok(s, " ");
    while(p!=NULL)
    {
        x=true;
        for(int i=0;i<strlen(p);i++)
        {
            if(strchr("aeiou",p[i])==0)
            {
                x=false;
                break;
            }
            
        }  
    
        if(x==true)
        {
            cout<<p<<endl;
        }  
    
         p=strtok(NULL," ");
    }
    
    return 0;
}
#975 Cuvinte2
Cerința
Se dă o propoziție formată din litere mici ale alfabetului englez, spații și semnele de punctuație ,.. Determinați un cuvânt palindrom din propoziție, primul în ordine alfabetică.

Date de intrare
Programul citește de la tastatură propoziția dată.

Date de ieșire
Programul va afișa pe ecran cuvântul determinat, sau mesajul IMPOSIBIL, dacă în șir nu există niciun cuvânt palindrom.

Restricții și precizări
propoziția citită va conține cel mult 255 de caractere
cuvintele din propoziție vor avea maximum 10 litere
Exemplu:
Intrare

ele deschid un capac, aerisirea este ok
Ieșire

aerisirea
Încărcare soluție
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char cuvant[101], invers[101];
    cin.getline(scuvant,101);
    for(int i=0;i<strlen(cuvant);i++)
    {
        invers[i] = cuvant[strlen(cuvant) - i - 1];
    }
       invers[strlen(cuvant)] = '\0';
    if (strcmp(cuvant, invers) == 0)
    {
        cout <<cuvant;
    }
    else{
        cout << "IMPOSIBIL";
    }
    return 0;
}
nu am luat punctaj la asta nu inteleg mai mult
#1335 Caractere 
Cerința
Se dau 2 șiruri de caractere Sa se afișeze toate caracterele primului șir ce se găsesc și în al doilea.

Date de intrare
Programul citește de la tastatură 2 șiruri de caractere, dispuse pe 2 linii.

Date de ieșire
Programul va afișa pe ecran toate caracterele primului șir ce se găsesc și în al doilea.

Restricții și precizări
fiecare șir citit va conține cel mult 250 de caractere;
caracterele vor fi afișate în ordinea în care se găsesc în primul șir.
Exemplu:
Intrare
/*
asD'";*]!
da';h
Ieșire

a';
Încărcare soluție
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[251], s2[251];
    cin.getline(s1, 251);
    cin.getline(s2, 251);
    for (int i = 0; i < strlen(s1); i++) 
    {
        if (strchr(s2, s1[i]))
        { 
            cout << s1[i];
        }
    }

    return 0;
}
#609 DublareVocale
Cerința
Se dă un şir format din cel mult 100 de caractere – litere mici ale alfabetului englez şi spaţii. Să se modifice acest şir prin dublarea fiecărei vocale.

Date de intrare
Programul citește de la tastatură şirul dat.

Date de ieșire
Programul va afișa pe ecran şirul obţinut în urma efectuării operaţiilor cerute.

Exemplu:
Intrare

problema aceea frumoasa
Ieșire

proobleemaa aaceeeeaa fruumooaasaa
Încărcare soluție
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[201];
    cin.getline(s,201);
    for(int i=0;i<strlen(s);i++)
    {
        if(strchr("aeiou",s[i])!=0)
        {
            cout<<s[i]<<s[i];
        }
        else
       {
            cout<<s[i];
       }
    }
    
    return 0;
}
#891 Pasareste
Cerința
Limba păsărească este foarte simplă; și asemănătoare cu limba română! Un text scris în română se traduce în păsărește astfel: după fiecare vocală se inserează litera p și vocala respectivă.

Se dă o propoziție scrisă în limba română. Să se traducă în păsărească.

Date de intrare
Programul citește de la tastatură un șir de caractere s.

Date de ieșire
Programul va afișa pe ecran șirul t, reprezentând traducerea în păsărească a șirului s.

Restricții și precizări
șirurile s și t vor avea cel mult 255 de caractere
șirul s va conține litere mici ale alfabetului englez și spații
vocalele sunt: aeiou
Exemplu:
Intrare

ana are mere
Ieșire

apanapa aparepe meperepe
Încărcare soluție

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[201];
    cin.getline(s,201);
    for(int i=0;i<strlen(s);i++)
    {
        if(strchr("aeiou",s[i])!=0)
        {
            cout<<s[i]<<'p'<<s[i];
        }
        else
       {
            cout<<s[i];
       }
    }
    return 0;
}
#892 Pasareste1 
Cerința
Limba păsărească este foarte simplă; și asemănătoare cu limba română! Un text scris în română se traduce în păsărește astfel: după fiecare vocală se inserează litera p și vocala respectivă.

Se dă o propoziție scrisă în limba păsărească. Să se traducă în limba română.

Date de intrare
Programul citește de la tastatură un șir de caractere s.

Date de ieșire
Programul va afișa pe ecran șirul t, reprezentând traducerea în română a șirului s.

Restricții și precizări
șirurile s și t vor avea cel mult 255 de caractere
șirul s va conține litere mici ale alfabetului englez și spații
vocalele sunt: aeiou
șirul dat în limba păsărească este corect
Exemplu:
Intrare

apanapa aparepe meperepe
Ieșire

ana are mere
Încărcare soluție
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char s[201];
    cin.getline(s, 201);
    for (int i = 0; i<strlen(s); i++) 
    {
        if (strchr("aeiou", s[i]) && s[i + 1] == 'p' && s[i + 2] == s[i])
        {
            i=i+2;
        }
         cout << s[i]; 
    }
   

    return 0;
}
