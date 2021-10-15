#include "Menu.h"

void Menu::color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void Menu::gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int Menu::PrintMenu()
{
    int Set[] = { 12,7,7}; // colores por defecto
    int counter = 1;
    char key;
    
    for (int i = 0;;)
    {
        gotoxy(15, 30);
        color(Set[0]);
        cout << "Iniciar";

        gotoxy(29, 30);
        color(Set[1]);
        cout << "Creditos";

        gotoxy(44, 30);
        color(Set[2]);
        cout << "Salir";

        key = _getch();

        if (key == 75 && (counter >= 2 && counter <= 3))
        {
            counter--;
        }
        else
        {
            if (key == 77 && (counter >= 1 && counter <= 2))
            {
                counter++;
            }
        }
        if (key == '\r')//carriage return
        {
            if (counter == 1)
            {
                // if enter is click and highlight is on 1 the program will run the code here
                system("cls");
                return 1;
                break;
            }
            if (counter == 2)
            {
                system("cls");
                return 2;
                break;
            }
            if (counter == 3)
            {
                system("cls");
                return 3;
                break;
            }         
        }

        for (int i = 0; i <= 2; i++)
        {
            Set[i] = 7;
        }
        switch (counter)
        {
        case 1:
            Set[0] = 12;
            break;
        case 2:
            Set[1] = 12;
            break;
        case 3:
            Set[2] = 12;
            break;
        default:
            break;
        }
    }
}

void Menu::PrintText(string Message)
{

    char* PrintText = new char[Message.length() + 1];    
    for (int i = 0; i < Message.length(); i++)
    {
        PrintText[i] = Message[i];
        cout << PrintText[i];
        PrintText[i] = NULL;
        Sleep(100);
    }
    cout << endl;
    delete[] PrintText;
}

void Menu::PrintTitle()
{
    ifstream Title ("T2itle.txt");
    string Line;
    if (Title.is_open())
    {
        gotoxy(10, 1);
        color(4);
        int i = 1;
        while (getline(Title, Line))
        {
            gotoxy(10, i);
            cout << Line << endl;
            i++;
        }
    }
    ifstream Skull("Skull.txt");
    if (Title.is_open())
    {
        gotoxy(80, 1);
        color(7);
        int i = 1;
        while (getline(Skull, Line))
        {
            gotoxy(80, i);
            cout << Line << endl;
            i++;
        }
    }
}