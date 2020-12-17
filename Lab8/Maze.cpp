#include "Maze.h"

Maze::Maze(int n, int m)
{
	N = n;
	M = m;
	m_field = new MCell[(long long)N * M];
}
const MCell& Maze::cell(int i, int j) const
{
	return m_field[i * N + j];
}
bool Maze::hasConnection(int i1, int j1, int i2, int j2)
{
	if (j1 == j2)
	{
		if ((i1 == i2 - 1) || (i1 - 1 == i2))
		{
			return (m_field[i1 * N + j1].down() | m_field[i2 * N + j2].down());
		}
	}
	if (i1 == i2)
	{
		if ((j1 == j2 - 1) || (j2 == j1 - 1))
		{
			return (m_field[i1 * N + j1].right() | m_field[i2 * N + j2].right());
		}
	}
	return false;
}
bool Maze::makeConnection(int i1, int j1, int i2, int j2)
{
	if (j1 == j2)
	{
		if (i1 == i2 - 1)
		{
			m_field[i1 * N + j1].m_down = true;
			return true;
		}
		if (i2 == i1 - 1)
		{
			m_field[i2 * N + j2].m_down = true;
			return true;
		}
	}
	if (i1 == i2)
	{
		if (j1 == j2 - 1)
		{
			m_field[i1 * N + j1].m_right = true;
			return true;
		}
		if (j2 == j1 - 1)
		{
			m_field[i2 * N + j2].m_right = true;
			return true;
		}
	}
	return false;
}
bool Maze::removeConnection(int i1, int j1, int i2, int j2)
{
	if (j1 == j2)
	{
		if (i1 == i2 - 1)
		{
			m_field[i1 * N + j1].m_down = false;
			return true;
		}
		if (i2 == i1 - 1)
		{
			m_field[i2 * N + j2].m_down = false;
			return true;
		}
	}
	if (i1 == i2)
	{
		if (j1 == j2 - 1)
		{
			m_field[i1 * N + j1].m_right = false;
			return true;
		}
		if (j2 == j1 - 1)
		{
			m_field[i2 * N + j2].m_right = false;
			return true;
		}
	}
	return false;
}
void Maze::PrintMaze() 
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 0)
			{
				if (this->hasConnection(i, j, i, j - 1) && j > 0)
				{
					if (this->hasConnection(i, j, i + 1, j))
					{
						printf("%c", 191);
						continue;
					}
				}
				else
				{
					printf("%c", '0');
				}
			}

			if (i > 0 && i < 4)
			{
				if (this->hasConnection(i, j, i - 1, j))
				{
					if (this->hasConnection(i, j, i, j + 1))
					{
						printf("%c", 192);
					}
				}
				if (this->hasConnection(i, j, i, j - 1))
				{
					if (this->hasConnection(i, j, i + 1, j))
					{
						printf("%c", 191);
					}
				}
				else
				{
					printf("%c", '0');
				}
			}
			if (i == 4)
			{
				if (this->hasConnection(i, j, i - 1, j))
				{
					if (this->hasConnection(i, j, i, j + 1))
					{
						printf("%c", 192);
					}
				}
				else
				{
					printf("%c", '0');
				}
			}
		}
		std::cout << '\n';
	}
}