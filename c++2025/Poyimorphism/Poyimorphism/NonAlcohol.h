#ifndef NONALCOHOL_H
#define NONALCOHOL_H
#include "Drink.h"

class NonAlcohol : public Drink {
public:
	NonAlcohol(string name, int price, int quantity);

	void printTitle() override;
	void printData() override;
	~NonAlcohol() override;
};
#endif
