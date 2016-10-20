#ifndef PLACEMENT_
# define PLACEMENT_
# include <iostream>

const int SIZE = 3;

struct chaff
{
	char dross[20];
	int slag;
};

void view_chaff(const chaff *pc);

void dont_close(void);

#endif // !PLACEMENT_
