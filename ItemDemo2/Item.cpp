#include "stdafx.h"
#include "Item.h"


Item::Item() 
	: mName("")
	, mCost(0)
	, mWeight(0.0f)
{

}

Item::Item(std::string name) 
	: mName(name)
	, mCost(0)
	, mWeight(0.0f)
{

}

Item::Item(std::string name, int cost, float weight)
	: mName(name)
	, mCost(cost)
	, mWeight(weight)
{

}

Item::~Item()
{
	// Do Nothing
}

void Item::update()
{
	mCost--;
	// Logic
}

// Getters & Setters
std::string Item::getName()
{
	return mName;
}
void Item::setName(std::string name)
{
	mName = name;
}

int Item::getCost()
{
	return mCost;
}
void Item::setCost(int cost)
{
	mCost = cost;
}

float Item::getWeight()
{
	return mWeight;
}
void Item::setWeight(float weight)
{
	mWeight = weight;
}