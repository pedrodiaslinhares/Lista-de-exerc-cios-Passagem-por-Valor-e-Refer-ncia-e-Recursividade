#include <iostream>

using namespace std;
/*
Exerc�cio 3: Fa�a uma fun��o que receba por par�metro o tempo de dura��o expressa em segundos e retorna tamb�m por par�metro esse tempo em horas, minutos e  segundos.
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
