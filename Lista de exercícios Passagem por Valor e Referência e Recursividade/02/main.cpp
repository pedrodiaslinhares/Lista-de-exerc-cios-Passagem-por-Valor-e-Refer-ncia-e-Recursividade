#include <iostream>

using namespace std;


/*
Exercício 2: Faça uma função que receba um parâmetro com o total de minutos passados ao longo do dia e também dois parâmetros que devem ser preenchidos com o  valor da hora e do minuto corrente. Faça um programa que leia do teclado quantos  minutos se passaram desde meia-noite e imprima no formato de horas e minutos.
*/
// Função que converte minutos passados desde meia-noite em horas e minutos


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
