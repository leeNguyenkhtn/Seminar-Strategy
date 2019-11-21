#pragma once
#include <iostream>
#include <string>
#include "OriginsBehaviour.h"
#include "ArmorsBehaviour.h"
#include "WeaponsBehaviour.h"
using namespace std;
class Hero
{
private:
	string name;
	int shield;
	int healthPoint;
	int attackPoint;
	WeaponsBehaviour* weapon;
	ArmorsBehaviour* armor;
	OriginsBehaviour* origin;
public:
	Hero(string name);
	Hero(string name, int shield, int healthPoint, int attackPoint);
	void SetProperty(WeaponsBehaviour* weapon, ArmorsBehaviour* armor, OriginsBehaviour* origin);
	void Info();
	void Attack(Hero* otherHero);
	int GetCurHP();
};

