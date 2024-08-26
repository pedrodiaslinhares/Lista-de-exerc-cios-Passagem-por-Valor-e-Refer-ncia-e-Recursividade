#include <iostream>

using namespace std;
/*
Exercício 3: Faça uma função que receba por parâmetro o tempo de duração expressa em segundos e retorna também por parâmetro esse tempo em horas, minutos e  segundos.
*/


void converterTempo(int segundos, int &horas, int &minutos, int &segundosRestantes) {
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundosRestantes = segundos % 60;
}

int main() {
    int segundos, horas, minutos, segundosRestantes;

    cout << "Digite o tempo em segundos: ";
    cin >> segundos;

    converterTempo(segundos, horas, minutos, segundosRestantes);

    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundosRestantes << endl;

    return 0;
}
