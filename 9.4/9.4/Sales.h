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
	// �������� ������� �������� �� 4 ��� n ��������� �� ������� 
	// �� � ���� sales ��������� s, ��������� � ��������� 
	// ������� ��������������, ������������ � ����������� 
	// �������� ��������� �����; 
	// ���������� �������� sales, ���� ������� ����, ��������������� � 0 
	void setSales(Sales & s, const double ar[], int n);
	// ������������ ������������ ������� �� 4 ��������, 
	// ��������� �� � ����� sales ��������� s, ��������� � 
	// ��������� ������� ��������������, � ����� ������������ 
	// � ����������� �������� ��������� ����� 
	void setSales(Sales & s);
	// ���������� ��� ���������� �� ��������� s 
	void showSales(const Sales & s);
	void dontclose(void);
}




#endif // !SALES_H
