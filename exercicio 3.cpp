#include <iostream>;
using namespace std;

int main()
{
	char m;
	cout << "Digite sua mencao(A - F): ";
	cin >> m;
	switch(m){
		case 'A':
			cout << "Excelente";
			break;
		case 'B':
			cout << "Otimo";
			break;
		case 'C':
			cout << "Bom";
			break;
		case 'D':
			cout << "Regular";
			break;	
		case 'E':
			cout << "Ruim";
			break;
		case 'F':
			cout << "Sem rendimento";
			break;
		default:
			cout << "Mencao inexistente";	
	}
	return 0;
}
