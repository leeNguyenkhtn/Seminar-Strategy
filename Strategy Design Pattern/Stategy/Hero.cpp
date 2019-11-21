#include "Hero.h"
//
Hero::Hero(string name) {
	this->name = name;
	shield = 75;
	healthPoint = 1000;
	attackPoint = 150;
	weapon = new Blade();
	armor = new ChainVest();
	origin = new Glacical();
}
//
Hero::Hero(string name, int shield, int healthPoint, int attackPoint) {
	this->name = name;
	this->shield = shield;
	this->healthPoint = healthPoint;
	this->attackPoint = attackPoint;
	weapon = new Blade();
	armor = new ChainVest();
	origin = new Glacical();
}
//
void Hero::SetProperty(WeaponsBehaviour* weapon, ArmorsBehaviour* armor, OriginsBehaviour* origin) {
	this->weapon = weapon;
	this->armor = armor;
	this->origin = origin;
}
//
void Hero::Info() {
	cout << "Name : " << name << endl;
	cout << "HP : " << healthPoint << endl;
	cout << "Shield : " << shield << endl;
	cout << "ATK : " << attackPoint << endl;
	cout << "Weapon : " << weapon->Name() << endl;
	cout << "Armor : " << armor->Name() << endl;
	cout << "Origin : " << origin->Name() << endl;
}
//
void Hero::Attack(Hero* otherHero) {
	int curATK = this->weapon->Increase(this->attackPoint);//current attack damage after hero uses weapon
	int lostBlood = this->armor->Decrease(curATK, shield);//lost HP after other hero uses shield
	lostBlood = otherHero->origin->Specify(lostBlood);//current lost HP 
	if (otherHero->armor->Name() == "Counter Shield") {
		this->healthPoint -= lostBlood * 0.2;
	}
	otherHero->healthPoint -= lostBlood;
	cout << this->name + " attack " + otherHero->name + " " + this->weapon->Display() << endl;
	cout << curATK << endl;
	cout << otherHero->name + " defend " + otherHero->armor->Display() << endl;
	cout << lostBlood << endl;
	cout << otherHero->name + otherHero->origin->Display() << otherHero->healthPoint << endl;
}
int Hero::GetCurHP() {
	return healthPoint;
}
