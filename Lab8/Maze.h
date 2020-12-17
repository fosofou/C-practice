#pragma once
#include "MCell.h"
#include <algorithm>
#include <iostream>
class Maze
{
public:
	Maze(int n, int m);
	~Maze() { delete m_field; }
	const MCell& cell(int i, int j) const;
	bool hasConnection(int i1, int j1, int i2, int j2);
	bool makeConnection(int i1, int j1, int i2, int j2);
	bool removeConnection(int i1, int j1, int i2, int j2);
	void PrintMaze() ;
	
protected:
private:
	MCell* m_field;
	int M;
	int N;
};

