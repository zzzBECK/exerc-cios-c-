#include <iostream>
using namespace std;

int main(){
    int ano;
    cout << "Insira o ano em que nasceu: ";
    cin >> ano;
    int idade = 2021 - ano;
    cout << "Sua idade e: " << idade << endl;
    if (idade <= 18){
        cout << "voce e crianca/adolescente";
    }
    else if (idade > 59){
    cout << "voce e idoso";
    }    
    else if (idade > 18 && idade < 59){
    cout << "voce e adulto";
    }
}
