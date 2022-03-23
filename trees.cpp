//
// Created by eabarros on 22/03/2022.
//

#include <iostream>
#include "trees.hpp"

Tree::Tree(int newSize, bool newEdible) : size{newSize}, edible{newEdible} {}

Bamboo::Bamboo(int size) : Tree(size, true){
    std::cout <<"It's a Bamboo!" << std::endl;
}
