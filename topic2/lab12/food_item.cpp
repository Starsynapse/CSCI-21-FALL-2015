/*
 * Name        : food_item.cpp
 * Author      : Eduardo Zamora
 * Description : Defining the class functions.
 */

#include "food_item.h"

FoodItem(string name_, unsigned int value_, calories_, unit_of_measure_, units_)
{
  //empty on purpose
}

virtual ~FoodItem()
{
  //does nothing
}

void FoodItem::SetCalories(unsigned int calories)
{
  calories_ = calories;
}

void FoodItem::SetUnitOfMeasure(string unit_of_measure)
{
  unit_of_measure_ = unit_of_measure;
}

void FoodItem::SetUnits(double units)
{
  units_ = units;
}

unsigned int FoodItem::GetCalories()
{
  return calories_;
}

string FoodItem::GetUnitOfMeasure()
{
  return unit_of_measure_;
}

double GetUnits()
{
  return units_;
}

string Item::ToString()
{
  stringstream ss;
  ss.str();
  units_.setf(std::ios::showpoint | std::ios::fixed);
  units_.precision(2);
  
  ss << name_ << ", $" << value_ << ", " << units_ << " " << units_of_measure_ << ", " << calories_ << "calories";
}