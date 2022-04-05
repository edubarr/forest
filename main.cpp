//
// Created by eduar on 22/03/2022.
//
#include <iostream>
#include "trees.hpp"
#include "animals.hpp"


int main() {
    bool run = true;
    int choice;

    std::cout << "Bem vindo ao simulador de floresta! Fique a vontade, a floresta lhe obedece!" << std::endl;

    /*new Bamboo(10);
    new Pine(5);
    new Ricinus(5);

    new Panda();
    new Folivora();*/

    while (run){
        std::cout << std::endl
             << " 1 - Exibir floresta completa\n"
             << " 2 - Plantas\n"
             << " 3 - Animais\n"
             << " 4 - Sair\n"
             << " Escolha uma opcao e confirme com Enter: ";

        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << std::endl;
                std::cout << "Exibindo floresta atual:" << std::endl;
                break;
            case 2:
                std::cout << std::endl;
                std::cout << "Plantas:" << std::endl;
                break;
            case 3:
                std::cout << std::endl;
                std::cout << "Animais:" << std::endl;
                break;
            case 4:
                std::cout << std::endl;
                std::cout << "Encerrando sua floresta, até mais!" << std::endl;
                run = false;
                break;
            default:
                std::cout << std::endl;
                std::cout << "Favor escolher uma opcao valida!" << std::endl;
                break;
        }
    }
    return 0;
}
