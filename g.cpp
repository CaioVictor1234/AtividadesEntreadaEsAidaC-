/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
int main()
{
    std::string ruaDoUsuario,bairroDoUsuario,cidadeDoUsuario,estadoDoUsuario;
    int numeroDaCasaDoUsuario;
    std::cout<<"Formulario de endereço:\n";
    std::cout<<"Número da casa:";
    std::cin >> numeroDaCasaDoUsuario;
    std::cout<<"Rua:\n";
     std::getline(std::cin, ruaDoUsuario);
     std::getline(std::cin, ruaDoUsuario);
    std::cout<<"Bairro:\n";
     std::getline(std::cin, bairroDoUsuario);
    std::cout<<"Cidade:\n";
     std::getline(std::cin, cidadeDoUsuario);
    std::cout<<"Estado:\n";
     std::getline(std::cin, estadoDoUsuario);
      std::cout<<"O usuario moro no estado " << estadoDoUsuario << ". A cidade onde o usuario mora é " << cidadeDoUsuario  << ". O usuario morra no bairro " << bairroDoUsuario << ". O usuario mora na rua \n " << ruaDoUsuario  << ". E reside na casa de numero " << numeroDaCasaDoUsuario;
    return 0;
}