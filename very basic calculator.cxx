#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	double a = 0;
	double b = 0;
	char c;
	
	cout << "Write 2 numbers please.";
	cin >> a >> b;
	cin >> c;
	while (c != '+' && c != '-' && c != '*' && c != '/')
	{
		cout << "You must choose between +, -, * and /.";
		cin >> c;
	}
	
	if (c == '+')
	{
		cout << a + b;
	} 
	else if (c == '-')
	{
		cout << a - b;
	}
	else if (c == '*')
	{
		cout << a * b;
	}
	else if (c == '/')
	{
		cout << a / b;
	}

	return 0;
	
}