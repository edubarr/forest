//
// Created by eabarros on 23/03/2022.
//

#ifndef FOREST_ANIMALS_HPP
#define FOREST_ANIMALS_HPP


class Animal {
public:
    Animal(int newLife, int newFood, int newStrength);
    /*void setLife(int new_life);
    void setFood(int new_food);
    void setStrength(int new_strength);
    void changeHunger(int change);*/
private:
    int life;
    int food; // 0 - Herbivorous, 1 - Carnivorous
    int strength;
    int hunger = 0;
};

class Panda : Animal {
public:
    Panda();
};


#endif //FOREST_ANIMALS_HPP
