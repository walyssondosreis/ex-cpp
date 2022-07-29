//#include <iostream>
//#include <cstdio>
#include "MenuPrincipal.h"
#include "Manip.h"
using namespace std;



int main()
{
   /* FILE *ARQ;
    ARQ=fopen("FILMEDAT.bin","wb");

    Video l("A ilha","Suspense","bando de maconheiro",18,2006);
    Video v;
    fwrite(&l,sizeof(Video),1,ARQ);
    fclose(ARQ);

    ARQ=fopen("FILMEDAT.bin","rb");

    fread(&v,sizeof(Video),1,ARQ);
    fclose(ARQ);
    v.print();
*/
    Manip j;
    j.CadastroFilme();
   // j.ReadArq();
    return 0;
}
