/*
 * Name        : food_item.h
 * Author      : Eduardo Zamora
 * Description : Writing the derived class.
 */

#ifndef ITEM_H_
#define ITEM_H_

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class FoodItem : public Item
{
 public:
  //constructor
  FoodItem(string name_ = "fooditem", unsigned int value_ = 0, calories_ = 0, unit_of_measure_ = "nonunits", units_ = 0);
  
  //destructor
  virtual ~FoodItem();
  
  //mutators
  void SetCalories(unsigned int calories);
  
  void SetUnitOfMeasure(string unit_of_measure);
  
  void SetUnits(double units);
  
  //accessors
  unsigned int GetCalories();
  
  string GetUnitOfMeasure();
  
  double GetUnits();
  
  //returns a string containing name_, value_, units_, units_of_measure_, and calories_
  string ToString();
  
 private:
  //holds a calorie count
  unsigned int calories_;
  
  //holds a unit of measure (such as "ounces")
  string unit_of_measure_;
  
  //holds a count of how many units we have
  double units_;
}