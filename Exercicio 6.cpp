#include <iostream>;
using namespace std;

int main()
{
    int idade;
    cout << "Digite uma idade: ";
    cin >> idade;
    int n = 0;
    int c = 0;
    while (idade != 0)
	{
		c++;
		n += idade;
		cout << "Digite outra idade: ";
		cin >> idade;
	}
	cout << "A media das idade e: " << n / c;
	return 0;
}

