// static.��� � ������������� ����������� ��������� ���������� 
#include <iostream> 
#include <string>
// ��������� 
// �������� ������� 
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
	static int total = 0; // ����������� ��������� ���������� 
	int count = 0; // �������������� ��������� ���������� 
	cout << "\"" << str << "\" contains ";
	while (str[count] != '\0') // ������� � ����� ������ 
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}