#pragma once
#define MAX_HEALTH_POINT 2000
#include<iostream>
#include<string>
using namespace std;
class OriginsBehaviour
{
public:
	virtual int Specify(int blood) = 0;
	virtual string Display() = 0;
	virtual string Name() = 0;
};
//
class Glacical : public OriginsBehaviour
{
public:
	int Specify(int blood) override {// decrease 10% lost heath point
		return blood * 0.95;
	}
	string Display() {
		return " is Glacial. Now his HP = ";
	}
	string Name() {
		return "Glacial";
	}
};
//
class Ocean : public OriginsBehaviour
{
public:
	int Specify(int blood ) {// revive 4 % * max HP, min lost HP isn't lower than 40 HP 
		return blood <= MAX_HEALTH_POINT * 0.04 ? 40  : blood - MAX_HEALTH_POINT * 0.04;
	}
	string Display() {
		return " is Ocean. Now his HP = ";
	}
	string Name() {
		return "Ocean";
	}
};

