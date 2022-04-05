//
// Created by eduar on 23/03/2022.
//

#include <iostream>
#include "animals.hpp"

Animal::Animal(int newLife, int newFood, int newStrength) : life{newLife}, food{newFood}, strength{newStrength} {
    std::cout << "Esta escutando esse barulho? Aparentemente tem um novo Animal por perto!" << std::endl;
}

/*void Animal::getLife(int new_life) { this->life = new_life; }

void Animal::setFood(int new_food) { this->food = new_food; }

void Animal::setStrength(int new_strength) { this->strength = new_strength; }

void Animal::changeHunger(int change) { this->hunger += change; }*/

Panda::Panda() : Animal(10, 0, 5) {
    std::cout << "Parece que um panda sentiu cheiro de bambu e apareceu na floresta!" << std::endl;
}

Folivora::Folivora() : Animal(10, 0, 5) {
    std::cout << "Parece que um bicho-preguica esta chegando na floresta!" << std::endl;
}

// Esquilo, preguiça, carnivoros