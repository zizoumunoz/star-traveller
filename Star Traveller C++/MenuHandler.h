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

	/// <summary>
	/// Sets title for Menu object.
	/// </summary>
	/// <param name="newTitle">(string) New title.</param>
	void setTitle(std::string newTitle);

	/// <summary>
	/// Returns title of menu object.
	/// </summary>
	/// <returns>(String) Menu title.</returns>
	std::string getTitle();

private:
	std::string _menuName;
	std::vector<std::string> _menuOptions;

};
