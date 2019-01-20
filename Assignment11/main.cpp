#include "Cash.h"
#include <iostream>

int main() {

	Cash cash(2, 101);
	cash.ShowMeTheMoney(); // $3.01
	cash++;
	++cash;
	cash.ShowMeTheMoney(); // $4.02
	cash--;
	--cash;
	cash.ShowMeTheMoney(); // $3.01
	Cash moreCash(1, 20);
	moreCash.ShowMeTheMoney(); // $1.20
	cash += moreCash;
	cash.ShowMeTheMoney(); // $4.21
	cash -= moreCash;
	cash.ShowMeTheMoney(); // $3.01
	Cash addCash = cash + moreCash;
	addCash.ShowMeTheMoney(); // $4.21
	Cash minusCash = cash - moreCash;
	minusCash.ShowMeTheMoney(); // $1.81
	
	std::cout << (cash > moreCash) << std::endl; // true
	std::cout << (cash >= cash) << std::endl; // true
	std::cout << (cash < addCash) << std::endl; // true
	std::cout << (cash <= minusCash) << std::endl; // false
	std::cout << (cash == moreCash) << std::endl; // false
	std::cout << (cash != moreCash) << std::endl; // true

	cash *= 2;
	cash.ShowMeTheMoney(); // $6.02
	Cash multCash = cash * 3;
	multCash.ShowMeTheMoney(); // $18.06
	Cash friendCash = 5 * cash;
	friendCash.ShowMeTheMoney(); // $30.10

	system("pause");
	return 0;
}