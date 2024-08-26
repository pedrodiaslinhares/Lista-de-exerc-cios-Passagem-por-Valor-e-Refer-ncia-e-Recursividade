#include <iostream>

using namespace std;
/*
Exercício 1: Faça uma função que recebe a idade de uma pessoa em dias e retorna essa idade expressa em anos, meses e dias.
*/


void calcularIdade(int dias, int& anos, int& meses, int& diasRestantes) {
    const int diasPorAno = 365;
    const int diasPorMes = 30;


    anos = dias / diasPorAno;
    dias = dias % diasPorAno;

    meses = dias / diasPorMes;
    diasRestantes = dias % diasPorMes;
}

int main() {
    int idadeEmDias;
    int anos, meses, diasRestantes;

    cout << "Digite a idade em dias: ";
    cin >> idadeEmDias;

    calcularIdade(idadeEmDias, anos, meses, diasRestantes);

    cout << "Idade: " << anos << " anos, " << meses << " meses e " << diasRestantes << " dias." << endl;

    return 0;
}
