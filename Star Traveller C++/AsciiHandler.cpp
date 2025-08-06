#define _CRT_SECURE_NO_WARNINGS	// for terminal_printf

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include "AsciiHandler.h"
#include "BearLibTerminal.h"
#include "ColorARGB.h"

AsciiHandler::AsciiHandler()
{
	// default color white
	ColorARGB white(255, 255, 255, 255);
	setColor(white);
}

int AsciiHandler::setArtData(std::string fileName)
{
	// Set input file stream (Opening file for reading)
	std::ifstream sourceFile(fileName);

	// Error check
	if (!sourceFile)
	{
		std::cerr << "Could not open " << fileName << "\n";
		return 1;
	}

	// Store data into _artData
	std::ostringstream buffer;
	buffer << sourceFile.rdbuf();	// Read entire file to output string stream
	_artData = buffer.str();
	sourceFile.close();
	return 0;
}

void AsciiHandler::displayArt(int xCoord, int yCoord)
{
	terminal_color(
		color_from_argb(_artColor._alpha, _artColor._red, _artColor._green, _artColor._blue)
	);
	terminal_printf(xCoord, yCoord, "%s", _artData.data());

	terminal_color(color_from_name("white"));	// Reset term color to white
}

void AsciiHandler::setColor(ColorARGB newColor)
{
	_artColor = newColor;
}
