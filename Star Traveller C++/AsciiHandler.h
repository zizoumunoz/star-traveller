#pragma once
#include <string>
#include "ColorARGB.h"

class AsciiHandler
{
public:
	AsciiHandler();
	int setArtData(std::string fileName);
	void displayArt(int xCoord, int yCoord);
	void setColor(ColorARGB newColor);

private:
	std::string _artData;
	std::string _fileName;
	ColorARGB _artColor;
};
