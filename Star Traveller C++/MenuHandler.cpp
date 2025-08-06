#include "MenuHandler.h"

// TO-DO

// Default
MenuHandler::MenuHandler()
	: _menuName("Undefined Menu")
{
	_menuOptions.push_back("1. Option One");
	_menuOptions.push_back("2. Option Two");
	_menuOptions.push_back("3. Option Three");
}

// Overloaded
MenuHandler::MenuHandler(std::string menuName)
	: _menuName(menuName)
{

}
