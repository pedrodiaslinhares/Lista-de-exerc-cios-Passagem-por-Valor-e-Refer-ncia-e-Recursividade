#include <iostream>

using namespace std;

/*
Exercício 6: Calcular o somatório de 1 à N Recursivamente e Iterativamente. Valores  menores ou iguais a zero representam situações de erro.
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
    cout << "O somatório de 1 a " << N << " (recursivo) e " << resultado << "." << endl;



    cout << "O somatório de 1 a " << N << " (iterativo) e " << resultado << "." << endl;
    resultado = somatorioIterativo(N);


    return 0;
}
