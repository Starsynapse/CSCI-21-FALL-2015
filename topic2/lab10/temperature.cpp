/*
 * Name        : temperature.cpp
 * Author      : Eduardo Zamora
 * Description : class function definitions
 */
 
#include "temperature.h"

// CLASS FUNCTION DEFINITIONS GO HERE
Temperature::Temperature()
{
  kelvin_ = 0;
}

Temperature::Temperature(double kelvin)
{
  kelvin_ = kelvin;
}

Temperature::Temperature(double temp, char unit)
{
  if (unit == 'C')
  {
    kelvin_ = temp + 273.15;
  }
  
  else if (unit == 'F')
  {
    kelvin_ = (5.0 * (temp - 32) / 9) + 273
  }
  
  else
  {
    kelvin_ = temp;
  }
}

void SetTempFromKelvin(double kelvin)
{
  kelvin_ = kelvin;
}

void SetTempFromCelsius(double celsius)
{
  kelvin_ = celsius + 273.15;
}

void SetTempFromFahrenheit(double fahrenheit)
{
  kelvin_ = (5.0 * (fahrenheit - 32) / 9) + 273
}

double GetTempAsKelvin() const
{
  retun kelvin_;
}

double GetTempAsCelsius() const
{
  celsius = kelvin_ - 273.15;
  return celsius;
}

double GetTempAsFahrenheit() const
{
  fahrenheit = ((kelvin_ * 9.0) / 5) + 32;
  return fahrenheit;
}

string ToString(char unit = 'K') const
{
  
}