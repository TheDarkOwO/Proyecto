// Proyecto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Menu.h"

using namespace std;
int main()
{
	//PlaySound(TEXT("Sample.wav"), NULL, SND_ASYNC | SND_FILENAME | SND_LOOP); 
	Menu i; string test = "No deberias estar aqui";
	i.PrintTitle();
	i.PrintMenu();
	Sleep(100);
	system("cls");
	i.PrintText(test);
	Sleep(2000);
	system("cls");
	return 0;
}
