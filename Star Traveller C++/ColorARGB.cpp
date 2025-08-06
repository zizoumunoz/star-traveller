#include "ColorARGB.h"
#include <iostream>

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
