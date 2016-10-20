#include "Placement.h"

void view_chaff(const chaff *pc)
{
	std::cout << pc->dross << std::endl << pc->slag << std::endl << std::endl;
}

void dont_close(void)
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

}
