#include "ColorARGB.h"
#include <iostream>

/// <summary>
/// Creates transparent black color.
/// </summary>
ColorARGB::ColorARGB()
{
	_alpha = 0;
	_red = 0;
	_green = 0;
	_blue = 0;
}

ColorARGB::ColorARGB(int alpha, int red, int green, int blue)
	: _alpha(alpha), _red(red), _green(green), _blue(blue)
{
}

/// <summary>
/// Retrieves the specified ARGB component value from the ColorARGB object.
/// </summary>
/// <param name="value">
/// (char) A character indicating which component to retrieve:
/// 'A' or 'a' for alpha, 'R' or 'r' for red, 'G' or 'g' for green, 'B' or 'b' for blue.
/// </param>
/// <returns>
/// The integer value of the requested ARGB component.
/// Returns 0 if the input is invalid and logs an error to std::cerr.
/// </returns>
int ColorARGB::getValue(char value) const
{
	switch (value)
	{
	case 'a':
	case 'A':
	{
		return _alpha;
		break;
	}
	case 'r':
	case 'R':
	{
		return _red;
		break;
	}
	case 'g':
	case 'G':
	{
		return _green;
		break;
	}
	case 'b':
	case 'B':
	{
		return _blue;
		break;
	}
	default:
		std::cerr << "Invalid color value.\n";
		return 0;
		break;
	}
}
