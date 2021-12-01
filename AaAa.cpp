#include <iostream>

using namespace std;

int main()
{
	char lit = '\0';
	cin >> lit;
	if (lit >= 'a' && lit <= 'z')
	{
		lit -= 32;
		cout << lit << endl;
	}
	else
	{
		lit += 32;
		cout << lit << endl;
	}
	system("pause");
	return 0;
}