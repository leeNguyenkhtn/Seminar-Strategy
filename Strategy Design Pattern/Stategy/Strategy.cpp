#include "Hero.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
	Hero* Sparta = new Hero("Sparta", 150, 2000, 200);
	Sparta->SetProperty(new Spear(), new CounterShield(), new Ocean());
	Hero* BladeMaster = new Hero("Blade Master", 120, 2000, 250);
	BladeMaster->SetProperty(new Blade(), new ChainVest(), new Glacical());
	//
	Sparta->Attack(BladeMaster);
	cout << "////////////////////////" << endl;
	//
	BladeMaster->Attack(Sparta);
	cout << "////////////////////////" << endl;
	//
	cout << "Blade Master HP = " << BladeMaster->GetCurHP() << endl;
}