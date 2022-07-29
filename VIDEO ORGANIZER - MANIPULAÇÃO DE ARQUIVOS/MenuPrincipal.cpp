#include "MenuPrincipal.h"
string MenuPrincipal::NomePrograma = "MyVIDEO ORGANIZER\n\t\t\t\t-----------------";
MenuPrincipal::MenuPrincipal()
{
    //ctor
}

MenuPrincipal::~MenuPrincipal()
{
    //dtor
}
void MenuPrincipal::NomeProgramaPrint()
{
    cout<<"\n\t\t\t\t"<<NomePrograma<<endl;
}
void MenuPrincipal::start()
{
    NomeProgramaPrint();
    cout<<"\n*PRESS 'C' PARA CADASTRAR UM NOVO VIDEO"<<endl;
}
