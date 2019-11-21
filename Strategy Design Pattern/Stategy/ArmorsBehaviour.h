#pragma once
#include <iostream>
#include <string>
using namespace std;
class ArmorsBehaviour
{
public:
	virtual int Decrease(int attack, int shield) = 0;
	virtual string Display() = 0 ;
	virtual string Name() = 0;
};
//
class CounterShield :public ArmorsBehaviour// anti 20% attack damage 
{
public:
	int Decrease(int attack, int shield) {
		return (attack * 100) / (100 + shield);
	}
	string Display() {
		return "by Counter Shield";
	}
	string Name() {
		return "Counter Shield";
	}
};
//
class ChainVest :public ArmorsBehaviour// decrease 15% attack damage 
{
public:
	int Decrease(int attack, int shield) {
		return (attack * 100) / (100 + shield) * 0.85;
	}
	string Display() {
		return "by Chain Vest";
	}
	string Name() {
		return "Chain Vest";
	}
};

