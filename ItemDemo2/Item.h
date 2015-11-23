#include <string>

#pragma once

class Item
{
public:
	Item();
	Item(std::string name);
	Item(std::string name, int cost, float weight);
	~Item();

	void update();

	// Getters & Setters
	std::string getName();
	void setName(std::string name);

	int getCost();
	void setCost(int cost);

	float getWeight();
	void setWeight(float weight);
protected:
	std::string mName;
	int mCost;
	float mWeight;
};

