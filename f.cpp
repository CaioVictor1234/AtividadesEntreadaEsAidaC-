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
    std::string nome;
    int idade;
    std::cout << "Digite seu nome:";
    std::getline(std::cin, nome);
    std::cout << "Agora digite seu idade:";
    std::cin >> idade;
    std::cout << "Seu nome é:" << nome << std::endl;
     std::cout << "E sua idade é:" << idade << std::endl;
    return 0;
}