//
// Created by eduar on 22/03/2022.
//

#include <iostream>
#include "trees.hpp"

Tree::Tree(int newSize, bool newEdible) : size{newSize}, edible{newEdible} {
    std::cout << "Uma arvore nova foi encontrada..." << std::endl;
}

Bamboo::Bamboo(int size) : Tree(size, true){
    std::cout << "E um Bamboo!" << std::endl;
}

Pine::Pine(int size) : Tree(size, true){
    std::cout << "E um Pinheiro!" << std::endl;
}

Ricinus::Ricinus(int size) : Tree(size, true){
    std::cout << "E uma mamoneira! Cuidado, suas sementes sao venenosas!" << std::endl;
}
