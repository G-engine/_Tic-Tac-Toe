#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <windows.h>
#include <cwchar>

int main()
{
    char move[9] = {'.','.','.','.','.','.','.','.','.'},
         cell[9] = {'.','.','.','.','.','.','.','.','.'},
         step[9] = {'.','.','.','.','.','.','.','.','.'},
         symbol;

    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;
    cfi.dwFontSize.Y = 45;
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    std::wcscpy(cfi.FaceName, L"Consolas");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

    std::cout << "\nHello, it's a popular game named 'tic tac toe'\n"
    << "Use symbols 'q', 'w', 'e', 'a', 's', 'd', 'z', 'x', 'c' for the next control:\n"
    << 'q' << " | " << 'w' << " | " << 'e' << "\n"
    << "---------" << "\n"
    << 'a' << " | " << 's' << " | " << 'd' << "\n"
    << "---------" << "\n"
    << 'z' << " | " << 'x' << " | " << 'c' << "\n"

    "\nTry this and subscribe to my instagram @ivan.reliable\n" <<
    "Have a good game!\n\n" << "*****************************************************\n\n";

    std::srand(time(NULL));
    int queue = rand() % 2;
    if(queue == 0)
    {
        std::cout << "The player to the LEFT of the monitor moves first!\nGo in the order of the queue\n" << std::endl;
    }
    else
    {
        std::cout << "The player to the RIGHT of the monitor moves first!\nGo in the order of the queue\n" << std::endl;
    }

    std::cout << "                               " << cell[0] << " | " << cell[1] << " | " << cell[2] << std::endl;
    std::cout << "                               " << "---------" << std::endl;
    std::cout << "                               " << cell[3] << " | " << cell[4] << " | " << cell[5] << std::endl;
    std::cout << "                               " << "---------" << std::endl;
    std::cout << "                               " << cell[6] << " | " << cell[7] << " | " << cell[8] << std::endl << std::endl;

    for(int i = 0; i < std::size(move); i++)
    {
        if(i % 2 == 0)
        {
            symbol = 'X';
        }
        else
        {
            symbol = 'O';
        }

        std::cin >> move[i];

        while(((move[i] == step[0]) || (move[i] == step[1]) || (move[i] == step[2])
               || (move[i] == step[3]) || (move[i] == step[4]) || (move[i] == step[5])
               || (move[i] == step[6]) || (move[i] == step[7]) || (move[i] == step[8])))
        {
            std::cout << "\n\nThis cell has already taken! Take another cell\n\n";
            std::cin >> move[i];
        }

        system("cls");

        step[i] = move[i];


        switch (move[i])
        {
            case 'q':
                cell[0] = symbol;
                std::cout << "                               " << cell[0] << " | " << cell[1] << " | " << cell[2] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[3] << " | " << cell[4] << " | " << cell[5] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[6] << " | " << cell[7] << " | " << cell[8] << std::endl << std::endl;
                break;
            case 'w':
                cell[1] = symbol;
                std::cout << "                               " << cell[0] << " | " << cell[1] << " | " << cell[2] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[3] << " | " << cell[4] << " | " << cell[5] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[6] << " | " << cell[7] << " | " << cell[8] << std::endl << std::endl;
                break;
            case 'e':
                cell[2] = symbol;
                std::cout << "                               " << cell[0] << " | " << cell[1] << " | " << cell[2] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[3] << " | " << cell[4] << " | " << cell[5] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[6] << " | " << cell[7] << " | " << cell[8] << std::endl << std::endl;
                break;
            case 'a':
                cell[3] = symbol;
                std::cout << "                               " << cell[0] << " | " << cell[1] << " | " << cell[2] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[3] << " | " << cell[4] << " | " << cell[5] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[6] << " | " << cell[7] << " | " << cell[8] << std::endl << std::endl;
                break;
            case 's':
                cell[4] = symbol;
                std::cout << "                               " << cell[0] << " | " << cell[1] << " | " << cell[2] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[3] << " | " << cell[4] << " | " << cell[5] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[6] << " | " << cell[7] << " | " << cell[8] << std::endl << std::endl;
                break;
            case 'd':
                cell[5] = symbol;
                std::cout << "                               " << cell[0] << " | " << cell[1] << " | " << cell[2] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[3] << " | " << cell[4] << " | " << cell[5] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[6] << " | " << cell[7] << " | " << cell[8] << std::endl << std::endl;
                break;
            case 'z':
                cell[6] = symbol;
                std::cout << "                               " << cell[0] << " | " << cell[1] << " | " << cell[2] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[3] << " | " << cell[4] << " | " << cell[5] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[6] << " | " << cell[7] << " | " << cell[8] << std::endl << std::endl;
                break;
            case 'x':
                cell[7] = symbol;
                std::cout << "                               " << cell[0] << " | " << cell[1] << " | " << cell[2] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[3] << " | " << cell[4] << " | " << cell[5] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[6] << " | " << cell[7] << " | " << cell[8] << std::endl << std::endl;
                break;
            case 'c':
                cell[8] = symbol;
                std::cout << "                               " << cell[0] << " | " << cell[1] << " | " << cell[2] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[3] << " | " << cell[4] << " | " << cell[5] << std::endl;
                std::cout << "                               " << "---------" << std::endl;
                std::cout << "                               " << cell[6] << " | " << cell[7] << " | " << cell[8] << std::endl << std::endl;
                break;
            }

        if (((cell[0] == 'X') && (cell[1] == 'X') && (cell [2] == 'X')) || ((cell[3] == 'X') && (cell[4] == 'X') && (cell [5] == 'X'))
            || ((cell[6] == 'X') && (cell[7] == 'X') && (cell [8] == 'X')) || ((cell[0] == 'X') && (cell[3] == 'X') && (cell [6] == 'X'))
            || ((cell[1] == 'X') && (cell[4] == 'X') && (cell [7] == 'X')) || ((cell[2] == 'X') && (cell[5] == 'X') && (cell [8] == 'X'))
            || ((cell[0] == 'X') && (cell[4] == 'X') && (cell [8] == 'X')) || ((cell[2] == 'X') && (cell[4] == 'X') && (cell [6] == 'X')))
        {
            std::cout << "*********************************\nThe winner is player 1! Congrats!\n\n\n";
            std::this_thread::sleep_for(std::chrono::seconds(4));
            exit(0);
        }

        if (((cell[0] == 'O') && (cell[1] == 'O') && (cell [2] == 'O')) || ((cell[3] == 'O') && (cell[4] == 'O') && (cell [5] == 'O'))
           || ((cell[6] == 'O') && (cell[7] == 'O') && (cell [8] == 'O')) || ((cell[0] == 'O') && (cell[3] == 'O') && (cell [6] == 'O'))
           || ((cell[1] == 'O') && (cell[4] == 'O') && (cell [7] == 'O')) || ((cell[2] == 'O') && (cell[5] == 'O') && (cell [8] == 'O'))
           || ((cell[0] == 'O') && (cell[4] == 'O') && (cell [8] == 'O')) || ((cell[2] == 'O') && (cell[4] == 'O') && (cell [6] == 'O')))
        {
            std::cout << "*********************************\nThe winner is player 2! Congrats!\n\n\n";
            std::this_thread::sleep_for(std::chrono::seconds(4));
            exit(0);
        }
    }

    std::cout << "*************************\nThe game ended in a draw!\n\n\n\n";
    std::this_thread::sleep_for(std::chrono::seconds(4));

    return 0;
}
