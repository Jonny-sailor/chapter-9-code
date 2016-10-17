#include "golf.h"
#include <iostream>
void setgolf(golf &g, const char * name, int he)
{
	g.fullname = name;
	g.handicap = he;
}

int setgolf(golf &g)
{
	std::cout << "Please input name: ";
	std::getline(std::cin, g.fullname);
	std::cout << "Please input handicap: ";
	std::cin >> g.handicap;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (g.fullname[0] == '\n')
		return 0;
	else
		return 1;
}

void handicap(golf &g, int he)
{
	g.handicap = he;
}

void showgolf(const golf &g)
{
	std::cout << g.fullname << '\t' << g.handicap << std::endl;
}

void dont_close(void)
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
};