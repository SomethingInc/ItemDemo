// ItemDemo2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Item.h"

#include <iostream>
#include <vector>
#include <ctime>

int main()
{
	std::vector<Item*> items;
	srand(time(NULL));

	for (int i = 0; i < 5; ++i)
	{
		Item *item = new Item("Test " + std::to_string(i), rand() % 20, rand() % 30);
		items.push_back(item);
		std::cout << item->getName() << std::endl;
		std::cout << "    Cost:" << item->getCost() << std::endl;
		std::cout << "  Weight:" << item->getWeight() << std::endl;
	}

	std::cout << "=================" << std::endl;

	for (auto it = items.begin(); it != items.end(); ++it)
	{
		Item *item = *it;
		item->update();
		std::cout << item->getName() << std::endl;
		std::cout << "    Cost:" << item->getCost() << std::endl;
		std::cout << "  Weight:" << item->getWeight() << std::endl;
	}

	system("pause");
    return 0;
}

