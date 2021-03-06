/*
 * Name        : lab_9.cpp
 * Author      : Eduardo Zamora
 * Description : Building a Spaceship Class
 */
#include "lab_9.h"

// CODE HERE -- CLASS FUNCTION DEFINITIONS
void Spaceship::set_name(string name)//the following stuff just sets values
{
  name_ = name;
}

void Spaceship::set_top_speed(double top_speed)
{
  top_speed_ = top_speed;
}

void Spaceship::set_fuel_source(string fuel_source)
{
  fuel_source_ = fuel_source;
}

void Spaceship::set_crew_capacity(int crew_capacity)
{
  crew_capacity_ = crew_capacity;
}

string Spaceship::name() const//the following just get values
{
  return name_;
}

double Spaceship::top_speed() const
{
  return top_speed_;
}

string Spaceship::fuel_source() const
{
  return fuel_source_;
}

int Spaceship::crew_capacity() const
{
  return crew_capacity_;
}

string Spaceship::ToString() const
{
  stringstream ss;
  ss.str();
  
  ss.setf(std::ios::fixed);
  ss.setf(std::ios::showpoint);
  ss.precision(2);
  //these lines set the precision of a number to a certain numberical place
  
  string specifications;
  //string for output
  
  ss << name_ << "\n";
  ss << "Top Speed:     Warp " << top_speed_ << "\n";
  ss << "Fuel Source:   " << fuel_source_ << "\n";
  ss << "Crew Capacity: " << crew_capacity_;
  //conbines the values into a stringstream
  
  specifications = ss.str();
  //string is set to equal the stringstream
  
  return specifications;
}