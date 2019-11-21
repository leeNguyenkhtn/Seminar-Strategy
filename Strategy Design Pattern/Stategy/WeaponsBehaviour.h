#pragma once
#include <iostream>
#include <string>
using namespace std;
class WeaponsBehaviour
{
public:
	virtual int Increase (int attack) = 0;
	virtual string Display() = 0;
	virtual string Name() = 0;
};
//
class Blade :public WeaponsBehaviour {
public:
	int Increase(int attack) {// increase 30% attack damage
		return attack * 1.3;
	}
	string Display() {
		return "by Blade";
	}
	string Name() {
		return "Blade";
	}
};
//
class Spear :public WeaponsBehaviour {
public:
	int Increase(int attack) {// increase 40 attack damage
		return attack + 40;
	}
	string Display() {
		return "by Spear";
	}
	string Name() {
		return "Spear";
	}
};

