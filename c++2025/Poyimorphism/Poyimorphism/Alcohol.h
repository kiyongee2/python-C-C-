#ifndef ALCOHOL_H
#define ALCOHOL_H
#include "Drink.h"

class Alcohol : public Drink {
private:
	float alcper; //알콜 도수

public:
	Alcohol(string name, int price, int quantity, float alcper);

	void printTitle() override;
	void printData() override;
	~Alcohol() override;
};
#endif 
