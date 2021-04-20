#include <iostream>;
using namespace std;

int main(){
	int n;
	int m = 0;
	cout << "Digite um numero: ";
	cin >> n;
	while(n != 2){
		m += n;
		cout << "Digite outro numero: ";
		cin >> n;
	}
	cout << "a soma dos numeros digitados e: " << m;
	
	return 0;
}
