#include "Sales.h"
const int SIZE = 10;
int main()
{
	const double values_const[SIZE]{ 177.0, 156.0, 12.0, 777.0 };

	SALES::Sales arr[2];

			
	SALES::setSales(arr[0], values_const, 10);
	SALES::setSales(arr[1]);

	SALES::showSales(arr[0]);
	
	SALES::showSales(arr[1]);

	SALES::dontclose();

}