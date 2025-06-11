#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal
{
public:
	virtual void makesound() = 0;
};

class Dog : public Animal
{
public:
	void makesound() override;
};

class Cat : public Animal
{
public:
	void makesound() override;
};

class Cow : public Animal
{
public:
	void makesound() override;
};
#endif
