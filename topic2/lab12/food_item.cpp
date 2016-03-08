/*
 * Name        : food_item.cpp
 * Author      : Eduardo Zamora
 * Description : Defining the derived class functions.
 */

#include "food_item.h"

FoodItem::FoodItem(string name, unsigned int value, unsigned int calories, string unit_of_measure, double units)
{
  Item::set_name(name);
  Item::set_value(value);
  calories_ = calories;
  unit_of_measure_ = unit_of_measure;
  units_ = units;
}

FoodItem::~FoodItem()
{
  //does nothing
}

void FoodItem::set_calories(unsigned int calories)
{
  calories_ = calories;
}

void FoodItem::set_unit_of_measure(string unit_of_measure)
{
  unit_of_measure_ = unit_of_measure;
}

void FoodItem::set_units(double units)
{
  units_ = units;
}

unsigned int FoodItem::calories()
{
  return calories_;
}

string FoodItem::unit_of_measure()
{
  return unit_of_measure_;
}

double FoodItem::units()
{
  return units_;
}

string FoodItem::ToString()
{
  string output;
  stringstream ss;
  ss.str();
  
  ss.setf(std::ios::showpoint | std::ios::fixed);
  ss.precision(2);
  
  ss << Item::ToString() << ", " << units_ << " " << unit_of_measure_ << ", " << calories_ << " calories";
  output = ss.str();
  return output;
}