/*
 * Name        : food_item.h
 * Author      : Eduardo Zamora
 * Description : Writing the derived class.
 */

#ifndef FOOD_ITEM_H_
#define FOOD_ITEM_H_

#include "item.h"

class FoodItem : public Item
{
 public:
  //constructor
  FoodItem(string name_ = "fooditem", unsigned int value_ = 0, unsigned int calories_ = 0, string unit_of_measure_ = "nonunits", double units_ = 0);
  
  //destructor
  virtual ~FoodItem();
  
  //mutators
  void set_calories(unsigned int calories);
  
  void set_unit_of_measure(string unit_of_measure);
  
  void set_units(double units);
  
  //accessors
  unsigned int calories();
  
  string unit_of_measure();
  
  double units();
  
  //returns a string containing name_, value_, units_, units_of_measure_, and calories_
  string ToString();
  
 private:
  //holds a calorie count
  unsigned int calories_;
  
  //holds a unit of measure (such as "ounces")
  string unit_of_measure_;
  
  //holds a count of how many units we have
  double units_;
};

#endif /* FOOD_ITEM_H_ */