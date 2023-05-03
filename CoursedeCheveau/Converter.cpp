#include "Converter.h"
#include <iostream>

using namespace std;

double Converter::PoundKilo(double p)
{
	return p / 2, 205;
}

double Converter::KiloPound(double k)
{
	return k * 2205;
}

double Converter::FahrenheitCelsius(double f)
{
	return (f - 32) * 5 / 9;
}

double Converter::CelsiusFahrenheit(double c)
{
	return (c * 9 / 5) + 32;
}

double Converter::MeterFeet(double m)
{
	return m * 3281;
}

double Converter::FeetMeter(double f)
{
	return f / 3281;
}

double Converter::CmInches(double cm)
{
	return cm / 254;
}

double Converter::InchesCm(double in)
{
	return in * 254;
}

double Converter::LiterGallons(double l)
{
	return l / 3785;
}

double Converter::GallonsLiters(double g)
{
	return g * 3785;
}
