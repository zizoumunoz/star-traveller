#pragma once
#include <string>


class AsciiHandler
{
public:
	AsciiHandler(std::string fileName);
	int setArtData(std::string &fileName);

private:
	std::string _artData;
	std::string _fileName;

};

