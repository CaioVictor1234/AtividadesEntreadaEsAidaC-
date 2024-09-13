/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

int main() {
    // Cria uma variável para armazenar a entrada do usuário
    std::string entrada;

    // Solicita ao usuário para digitar "verdadeiro" ou "falso"
    std::cout << "Digite 'verdadeiro' ou 'falso': ";
    std::cin >> entrada;

    // Exibe o valor digitado na tela
    std::cout << "O valor digitado foi: " << entrada << std::endl;

    return 0;
}