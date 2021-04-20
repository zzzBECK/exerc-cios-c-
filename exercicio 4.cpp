#include <iostream>;
using namespace std;

int main()
{
	int n;
	cout << "Digite um numero: ";
	cin >> n;
	for (int i = 0; i < 10; i++){
		cout << n << " X " << i << " = " << n * i << endl;
	}
	
	return 0;
}
