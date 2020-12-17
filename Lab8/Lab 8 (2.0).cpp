// Lab 8 (2.0).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Maze.h"

int main()
{
	using namespace std;
	Maze maze = Maze(5, 5);
	maze.makeConnection(0, 0, 0, 1);
	maze.makeConnection(0, 1, 1, 1);
	maze.makeConnection(1, 1, 1, 2);
	maze.makeConnection(1, 2, 2, 2);
	maze.makeConnection(2, 2, 2, 3);
	maze.makeConnection(2, 3, 3, 3);
	maze.makeConnection(3, 3, 3, 4);
	maze.makeConnection(3, 4, 4, 4);
	maze.PrintMaze();
}

 


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
