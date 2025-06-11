#ifndef ZOO_H_
#define ZOO_H_
#include "animal.h"
class Zoo 
{
public:

    void addAnimal(Animal* animal);

    void performActions();

//private:
    Animal* animals[10]; // 동물 객체를 저장하는 포인터 배열
    int animalCount = 0; // 현재 저장된 동물의 수       
};

#endif