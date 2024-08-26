#include <iostream>

using namespace std;

/*
Exerc�cio 6: Calcular o somat�rio de 1 � N Recursivamente e Iterativamente. Valores  menores ou iguais a zero representam situa��es de erro.
*/

int somatorioRecursivo(int N)
{
    if (N <= 0){
        return -1;
    }

    if (N == 1){
        return 1;
    }

    return N + somatorioRecursivo(N - 1);
}

int somatorioIterativo(int N)
{
    if (N <= 0){
        return -1;
    }

    int soma = 0;

    for (int i = 1; i <= N; ++i){
        soma += i;
    }

    return soma;
}

int main()
{
    int N, resultado;

    cout << "Digite um valor para N: ";
    cin >> N;

    if (N <= 0)
    {
        cerr << "Erro: N deve ser maior que zero." << endl;
        return 1;
    }

    resultado = somatorioRecursivo(N);
    cout << "O somat�rio de 1 a " << N << " (recursivo) e " << resultado << "." << endl;



    cout << "O somat�rio de 1 a " << N << " (iterativo) e " << resultado << "." << endl;
    resultado = somatorioIterativo(N);


    return 0;
}
