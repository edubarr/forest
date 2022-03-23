//
// Created by eabarros on 22/03/2022.
//

#ifndef FOREST_TREES_HPP
#define FOREST_TREES_HPP

class Tree {
public:
    Tree(int newSize, bool newEdible);
private:
int size;
bool edible;
};

class Bamboo : Tree {
public:
    explicit Bamboo(int size);
};

#endif //FOREST_TREES_HPP
