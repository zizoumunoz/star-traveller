#pragma once

class ColorARGB
{
public:
	ColorARGB();
	ColorARGB(int alpha, int red, int green, int blue);
	int getValue(char value) const;

private:
	int _alpha;
	int _red;
	int _green;
	int _blue;
};