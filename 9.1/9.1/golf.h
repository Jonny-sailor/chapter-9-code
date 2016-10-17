#ifndef GOLF_H_
#define GOLF_H_

#include <string>




struct golf
{
	std::string fullname;
	int handicap;
};

// Неинтерактивная версия: 
// функция присваивает структуре.типа golf имя игрока и его гандикап (фору), 
// используя передаваемые ей аргументы 
void setgolf(golf &g, const char * name, int he);
// Интерактивная версия: 
// функция предлагает пользователю ввести имя и гандикап, 
// присваивает элементам структуры g введенные значения; 
// возвращает 1, если введено имя, и 0, если введена пустая строка 
int setgolf(golf &g);
// Функция устанавливает новое значение гандикапа 
void handicap(golf &g, int he);
// Функция отображает содержимое структуры типа golf 
void showgolf(const golf &g);

void dont_close(void);

#endif // !GOLF_H_

