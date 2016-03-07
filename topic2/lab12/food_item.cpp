/*
 * Name        : food_item.cpp
 * Author      : Eduardo Zamora
 * Description : Defining the derived class functions.
 */

#include "food_item.h"

FoodItem::FoodItem(string name_, unsigned int value_, unsigned int calories_, string unit_of_measure_, double units_)
{
  //empty on purpose
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

string Item::ToString()
{
  string output;
  stringstream ss;
  ss.str();
  
  
  
  units_.setf(std::ios::showpoint | std::ios::fixed);
  units_.precision(2);
  
  ss << name_ << ", $" << value_ << ", " << units_ << " " << units_of_measure_ << ", " << calories_ << "calories";
  output = ss.str();
  return output;
}