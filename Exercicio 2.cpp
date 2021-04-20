#include <iostream>;
using namespace std;

    else if (idade > 18 && idade < 59){
    cout << "voce e adulto";
    }
int main()
{
	int ano;
	cout << "Digite o ano em que nasceu: ";
	cin >> ano;
	cout << "Voce tem: " << 2021 - ano << " anos" << endl;
	if (2021 - ano <= 18){
		cout << "Voce e crianca/adolescente";
	}
	else if (2021 - ano > 59){
		cout << "Voce e idoso";
	}
	else if (2021 - ano > 18 && 2021 - ano < 59){
		cout << "Voce e adulto";
	}
	return 0;
}
