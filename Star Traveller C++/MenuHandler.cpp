#define _CRT_SECURE_NO_WARNINGS	// for terminal_printf
#include "MenuHandler.h"
#include "BearLibTerminal.h"
#include <string>

MenuHandler::MenuHandler()
	: _menuName("Undefined Menu")
{
	_menuOptions.push_back("1. Option One");
	_menuOptions.push_back("2. Option Two");
	_menuOptions.push_back("3. Option Three");
}

MenuHandler::MenuHandler(std::string menuName)
	: _menuName(menuName)
{

}

void MenuHandler::displayMenu(int x, int y)
{
	int i = 0;
	for (std::string option : _menuOptions)
	{
		terminal_printf(x, y + i, "%s", option.data());
		i++;
	}
}
