#ifndef SALES_H
#define SALES_H

#include <iostream>
namespace SALES
{
#define iter for (int i = 0; i < SALES::QUARTERS; ++i)
	
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	// Копирует меньшее значение из 4 или n элементов из массива 
	// аг в член sales структуры s, вычисляет и сохраняет 
	// среднее арифметическое, максимальное и минимальное 
	// значения введенных чисел; 
	// оставшиеся элементы sales, если таковые есть, устанавливаются в 0 
	void setSales(Sales & s, const double ar[], int n);
	// Интерактивно подсчитывает продажи за 4 квартала, 
	// сохраняет их в члене sales структуры s, вычисляет и 
	// сохраняет среднее арифметическое, а также максимальное 
	// и минимальное значения введенных чисел 
	void setSales(Sales & s);
	// Отображает всю информацию из структуры s 
	void showSales(const Sales & s);
	void dontclose(void);
}




#endif // !SALES_H
