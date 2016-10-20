#include"Sales.h"

namespace SALES {
	void setSales(SALES::Sales & s, const double ar[], int n)

	{
		
			s = { ar[0] };
			s.min = ar[0];
			s.max = ar[0];

		for (int i = 0; i < n; ++i)
		{
			if (ar[i] < s.sales[0] && ar[i] != 0)
			{
				s.sales[0] = ar[i];
			}
			if (ar[i] > s.max)
			{
				s.max = ar[i];
			}
			if (ar[i] < s.min && ar[i] != 0)
			{
				s.min = ar[i];
			}
				s.average += ar[i];
		}
		s.average /=  n;

	}


	void setSales(SALES::Sales & s)
	{
		s = { 0 };

		iter
		{
			std::cout << "Please enter sales on " << i + 1 << " quarter" << std::endl;
			std::cin >> s.sales[i];
			if (!std::cin)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				--i;
			}
		}
		s.min = s.sales[0];
		s.max = s.sales[0];
			
			iter
		{
			if (s.min > s.sales[i])
			{
                s.min = s.sales[i];
			}
			if (s.max < s.sales[i])
			{
				s.max = s.sales[i];
			}

			s.average += s.sales[i];
		}
		s.average /= SALES::QUARTERS;

	}

	void showSales(const SALES::Sales & s)
	{
		iter
		{
			std::cout << s.sales[i] << std::endl;
		}
		std::cout << s.average << std::endl;
		std::cout << s.min << std::endl;
		std::cout << s.max << std::endl;


	}

	void dontclose(void)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.get();
	}

}