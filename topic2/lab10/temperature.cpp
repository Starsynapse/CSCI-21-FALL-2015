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
    kelvin_ = (5.0 * (temp - 32) / 9) + 273;
  }
  
  else
  {
    kelvin_ = temp;
  }
}

void Temperature::SetTempFromKelvin(double kelvin)
{
  kelvin_ = kelvin;
}

void Temperature::SetTempFromCelsius(double celsius)
{
  kelvin_ = celsius + 273.15;
}

void Temperature::SetTempFromFahrenheit(double fahrenheit)
{
  kelvin_ = (5.0 * (fahrenheit - 32) / 9) + 273;
}

double Temperature::GetTempAsKelvin() const
{
  return kelvin_;
}

double Temperature::GetTempAsCelsius() const
{
  double celsius;
  celsius = kelvin_ - 273.15;
  return celsius;
}

double Temperature::GetTempAsFahrenheit() const
{
  double fahrenheit;
  fahrenheit = ((kelvin_ * 9.0) / 5) + 32;
  return fahrenheit;
}

string Temperature::ToString(char unit) const
{
  stringstream ss;
  ss.str();
  string temperature;
  
  ss.setf(std::ios::fixed);
  ss.setf(std::ios::showpoint);
  ss.precision(2);
  
  if (unit == 'K')
  {
    ss << GetTempAsKelvin() << " " << "K";
  }
  
  if (unit == 'C')
  {
    ss << GetTempAsCelsius() << " " << "C";
  }
  
  if (unit == 'F')
  {
    ss << GetTempAsFahrenheit() << " " << "F";
  }
  
  else
  {
    ss << "Invalid Unit";
  }
  
  temperature = ss.str();
  return temperature;
}