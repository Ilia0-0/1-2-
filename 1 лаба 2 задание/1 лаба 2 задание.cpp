#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int user_a;
	user_a = 0;
	cout << "Введите значение a \n";
	cin >> user_a;
	if (user_a > -120 && user_a < -100)
	{
		cout << "Число " << user_a << " относится к группе A\n\n\n\n\n";
	}
	else if (user_a > 100 && user_a % 5 == 0)
	{
		cout << "Число " << user_a << " относится к группе B\n\n\n\n\n";
	}
	else if (user_a < 0 && user_a % 2 == 0)
	{
		cout << "Число " << user_a << " относится к группе C\n\n\n\n\n";
	}
	else
		cout << "Число " << user_a << " относится к группе D\n\n\n\n\n";


}

