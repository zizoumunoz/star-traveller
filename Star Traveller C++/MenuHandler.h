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
	/// <summary>
	/// Default constructor. 
	/// </summary>
	MenuHandler();
	/// <summary>
	/// Creates menu object with given title.
	/// </summary>
	/// <param name="menuName">(std::string) Menu title.</param>
	MenuHandler(std::string menuName);

	/// <summary>
	/// Display Menu at given coordinates.
	/// </summary>
	/// <param name="x">(int) X coord.</param>
	/// <param name="y">(int) Y coord.</param>
	void displayMenu(int x, int y);

private:
	std::string _menuName;
	std::vector<std::string> _menuOptions;

};
