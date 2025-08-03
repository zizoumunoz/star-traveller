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

/// <summary>
/// Reads data from a .txt file and stores as an std::string.
/// </summary>
/// <param name="fileName">: Path to .txt file.</param>
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

/// <summary>
/// Displays ASCII art on window with given coordinates.
/// </summary>
/// <param name="xCoord">(int) Terminal x coordinate.</param>
/// <param name="yCoord">(int) Termianl y coordinate.</param>
void AsciiHandler::displayArt(int xCoord, int yCoord)
{
	terminal_color(
		color_from_argb(_artColor._alpha, _artColor._red, _artColor._green, _artColor._blue)
	);
	terminal_printf(xCoord, yCoord, "%s", _artData.data());
}

/// <summary>
/// Sets Bearlibterm color for ASCII art.
/// </summary>
/// <param name="newColor">(ColorARGB) ARGB Color object.</param>
void AsciiHandler::setColor(ColorARGB newColor)
{
	_artColor = newColor;
}
