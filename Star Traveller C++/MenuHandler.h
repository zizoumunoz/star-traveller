#pragma once
#include <string>
#include <vector>

// TO-DO

/// <summary>
/// Class to handle all menus, their content, and options.
/// </summary>
class MenuHandler
{
public:
	// Default
	MenuHandler();
	// Overloaded constructor
	MenuHandler(std::string menuName);

private:
	std::string _menuName;
	std::vector<std::string> _menuOptions;
	
};
