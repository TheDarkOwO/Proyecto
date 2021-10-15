#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <dos.h>
using namespace std;
class Menu
{
public:
	void PrintTitle();
	void PrintText(string);
	int PrintMenu();
	void color(int color);
	void gotoxy(int x, int y);
};

#endif