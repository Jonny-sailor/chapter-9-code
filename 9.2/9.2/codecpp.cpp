// static.срр Ч использование статической локальной переменной 
#include <iostream> 
#include <string>
//  онстанты 
// ѕрототип функции 
void strcount(const std::string &str);
int main()
{
	using namespace std;
	std::string input;
	cout << "Enter a line: \n";
	while (cin)
	{
		getline (cin, input);
		strcount(input);
		cout << "Enter next line (empty line to quit) :\n";
		
	}
	cout << "Bye\n";
	return 0;
}
void strcount(const std::string  &str)
{
	using namespace std;
	static int total = 0; // статическа€ локальна€ переменна€ 
	int count = 0; // автоматическа€ локальна€ переменна€ 
	cout << "\"" << str << "\" contains ";
	while (str[count] != '\0') // переход к концу строки 
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}