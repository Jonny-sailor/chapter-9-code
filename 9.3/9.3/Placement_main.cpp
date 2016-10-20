#include "Placement.h"

chaff buffer[SIZE];

int main()
{
	chaff *pc = new (buffer) chaff;
	chaff arr[2]{ {"Jonny", 777}, {"Jimmy", 555} };
	
	pc[0] = arr[0];
	pc[1] = arr[1];

	for (int i = 0; i < 2;++i)
	{
		view_chaff(pc);
		++pc;
	}

	dont_close();
}
