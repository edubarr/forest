//
// Created by eduar on 22/03/2022.
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

class Pine : Tree {
public:
    explicit Pine(int size);
};

class Ricinus : Tree {
public:
    explicit Ricinus(int size);
};

#endif //FOREST_TREES_HPP
