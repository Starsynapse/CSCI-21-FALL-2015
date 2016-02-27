/*
 * Name        : temperature.cpp
 * Author      : Eduardo Zamora
 * Description : class function definitions
 */
 
#include "temperature.h"

// CLASS FUNCTION DEFINITIONS GO HERE
Temperature::Temperature()
//if nothing is specified kelvin defaults to zero
{
  kelvin_ = 0;
}

Temperature::Temperature(double kelvin)
//if one parameter is specified temperature is set in kelvin
{
  kelvin_ = kelvin;
}

Temperature::Temperature(double temp, char unit)
//if two parameters are specified this function will convert the temperature
{
  if (unit == 'C' || unit == 'c')
  //converts from celsius to kelvin
  {
    kelvin_ = temp + 273.15;
  }
  
  else if (unit == 'F' || unit == 'f')
  //converts from fahrenheit to kelvin
  {
    kelvin_ = (5.0 * (temp - 32.0) / 9.0) + 273.15;
  }
  
  else
  //anything else and a kelvin temperature will be assumed
  {
    kelvin_ = temp;
  }
}

void Temperature::SetTempFromKelvin(double kelvin)
//sets the internal temperature if already kelvin
{
  kelvin_ = kelvin;
}

void Temperature::SetTempFromCelsius(double celsius)
//converts temperature from celsius to kelvin and then sets it
{
  kelvin_ = celsius + 273.15;
}

void Temperature::SetTempFromFahrenheit(double fahrenheit)
//converts temperature from fahrenheit to kelvin and then sets it
{
  kelvin_ = (5.0 * (fahrenheit - 32.0) / 9.0) + 273.15;
}

double Temperature::GetTempAsKelvin() const
//returns the set temperature as kelvin
{
  return kelvin_;
}

double Temperature::GetTempAsCelsius() const
//returns the set temperature as celsius
{
  double celsius;
  celsius = kelvin_ - 273.15;
  return celsius;
}

double Temperature::GetTempAsFahrenheit() const
//returns the set temperatures as fahrenheit
{
  double fahrenheit;
  fahrenheit = ((kelvin_ - 273.15) * 9.0 / 5.0) + 32.0;
  return fahrenheit;
}

string Temperature::ToString(char unit) const
//converts and returns the saved temperature as a string with the temperature type
{
  stringstream ss;
  ss.str();
  string temperature;
  
  ss.setf(std::ios::fixed);
  ss.setf(std::ios::showpoint);
  ss.precision(2);
  
  if (unit == 'K' || unit == 'k')
  //If its kelvin you want kelvin you'll get
  {
    ss << GetTempAsKelvin() << " " << "Kelvin";
  }
  
  else if (unit == 'C' || unit == 'c')
  //If its celsius you want celsius you'll get
  {
    ss << GetTempAsCelsius() << " " << "Celsius";
  }
  
  else if (unit == 'F' || unit == 'f')
  //If its fahrenheit you want fahrenheit you'll get
  {
    ss << GetTempAsFahrenheit() << " " << "Fahrenheit";
  }
  
  else
  {
    ss << "Invalid Unit";
  }
  
  temperature = ss.str();
  return temperature;
}