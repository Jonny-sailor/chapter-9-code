#include "golf.h"
#include <iostream>
const int  size = 5;

int main()
{
	golf players[size];
    
	char *name = "Jonny";
	int gandicap = 777;

	for (int i = 0; i < size; ++i)
	{
		setgolf(players[i], name, gandicap);
	}
	for (int i = 0; i < size; ++i)
	{
		showgolf(players[i]);
	}
	for (int i = 0; i < size; ++i)
	{
		setgolf(players[i]);
	}
	for (int i = 0; i < size; ++i)
	{
		showgolf(players[i]);
	}

	dont_close();
}

