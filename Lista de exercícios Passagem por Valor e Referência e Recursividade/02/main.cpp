#include <iostream>

using namespace std;


/*
Exerc�cio 2: Fa�a uma fun��o que receba um par�metro com o total de minutos passados ao longo do dia e tamb�m dois par�metros que devem ser preenchidos com o  valor da hora e do minuto corrente. Fa�a um programa que leia do teclado quantos  minutos se passaram desde meia-noite e imprima no formato de horas e minutos.
*/
// Fun��o que converte minutos passados desde meia-noite em horas e minutos


void converterMinutosParaHora(int totalMinutos, int& horas, int& minutos) {
    horas = totalMinutos / 60;
    minutos = totalMinutos % 60;
}

int main() {
    int minutosPassados;
    int horas, minutos;

    cout << "Digite o total de minutos passados desde meia-noite: ";
    cin >> minutosPassados;

    converterMinutosParaHora(minutosPassados, horas, minutos);

    cout << "Hora corrente: " << horas << " horas e " << minutos << " minutos." << endl;

    return 0;
}
