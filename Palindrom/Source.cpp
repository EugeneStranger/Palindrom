#include <iostream>;
#include <cstring>;

using namespace std;

bool checkPal(string word)
{
	int len = word.length();
	for (int i = 0; i < len / 2; ++i)
	{
		if (word[i] != word[len - i - 1])
		{
			return false;
		}
	}
	return true;
}void main()
{
	string str;
	setlocale(LC_ALL, "Russian");
	cout << "������� �����: ";
	cin >> str;
	if ((str.find_first_not_of("0123456789") == string::npos) == true)
	{
		if (checkPal(str))
		{
			cout << "����� �������� �����������";
		}
		else
		{
			cout << "����� �� �������� �����������";
		}
	}
	else
	{
		cout << "�������� �������� �� �������� ������";
	}
}
