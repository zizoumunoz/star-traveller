#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include "AsciiHandler.h"

AsciiHandler::AsciiHandler(std::string fileName)
	: _fileName(fileName)
{

}

/// <summary>
/// Reads data from a .txt file and stores as an std::string.
/// </summary>
/// <param name="fileName">: Path to .txt file.</param>
int AsciiHandler::setArtData(std::string& fileName)
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
