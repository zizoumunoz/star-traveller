#pragma once
#include <string>
#include "ColorARGB.h"

class AsciiHandler
{
public:
	/// <summary>
	/// Creates ASCII art object with default white color.
	/// </summary>
	AsciiHandler();

	/// <summary>
	/// Reads data from a .txt file and stores as an std::string.
	/// </summary>
	/// <param name="fileName">: Path to .txt file.</param>
	int setArtData(std::string fileName);

	/// <summary>
	/// Displays ASCII art on window with given coordinates.
	/// </summary>
	/// <param name="xCoord">(int) Terminal x coordinate.</param>
	/// <param name="yCoord">(int) Termianl y coordinate.</param>
	void displayArt(int xCoord, int yCoord);

	/// <summary>
/// Sets Bearlibterm color for ASCII art.
/// </summary>
/// <param name="newColor">(ColorARGB) ARGB Color object.</param>
	void setColor(ColorARGB newColor);

private:
	std::string _artData;
	std::string _fileName;
	ColorARGB _artColor;
};
