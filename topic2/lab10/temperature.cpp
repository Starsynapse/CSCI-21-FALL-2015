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
  if (unit == 'C' || unit == 'c')
  {
    kelvin_ = temp + 273.15;
  }
  
  else if (unit == 'F' || unit == 'f')
  {
    kelvin_ = (5.0 * (temp - 32.0) / 9.0) + 273.15;
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
  kelvin_ = (5.0 * (fahrenheit - 32.0) / 9.0) + 273.15;
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
  fahrenheit = ((kelvin_ - 273.15) * 9.0 / 5.0) + 32.0;
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
  
  if (unit == 'K' || unit == 'k')
  {
    ss << GetTempAsKelvin() << " " << "Kelvin";
  }
  
  else if (unit == 'C' || unit == 'c')
  {
    ss << GetTempAsCelsius() << " " << "Celsius";
  }
  
  else if (unit == 'F' || unit == 'f')
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