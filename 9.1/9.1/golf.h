#ifndef GOLF_H_
#define GOLF_H_

#include <string>




struct golf
{
	std::string fullname;
	int handicap;
};

// ��������������� ������: 
// ������� ����������� ���������.���� golf ��� ������ � ��� �������� (����), 
// ��������� ������������ �� ��������� 
void setgolf(golf &g, const char * name, int he);
// ������������� ������: 
// ������� ���������� ������������ ������ ��� � ��������, 
// ����������� ��������� ��������� g ��������� ��������; 
// ���������� 1, ���� ������� ���, � 0, ���� ������� ������ ������ 
int setgolf(golf &g);
// ������� ������������� ����� �������� ��������� 
void handicap(golf &g, int he);
// ������� ���������� ���������� ��������� ���� golf 
void showgolf(const golf &g);

void dont_close(void);

#endif // !GOLF_H_

