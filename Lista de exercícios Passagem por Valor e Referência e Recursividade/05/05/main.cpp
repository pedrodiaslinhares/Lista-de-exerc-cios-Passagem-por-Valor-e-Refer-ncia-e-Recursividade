#include <iostream>

using namespace std;

const int TAMANHO_VETOR = 10;


int pesquisaBinaria(const int vetor[], int tamanho, int valor) {
    int low = 0;
    int high = tamanho - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (vetor[mid] == valor) {
            return mid;
        } else if (vetor[mid] < valor) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {

    int vetor[TAMANHO_VETOR] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};


    int valores[] = {75, 22, 90};
    int tamanhoValores = sizeof(valores) / sizeof(valores[0]);

    for (int i = 0; i < tamanhoValores; ++i) {
        int valor = valores[i];
        int resultado = pesquisaBinaria(vetor, TAMANHO_VETOR, valor);
        if (resultado != -1) {
            cout << "Valor " << valor << " indice " << resultado << ".\n";
        } else {
            cout << "Valor " << valor << " nao encontrado no vetor.\n";
        }
    }

    return 0;
}
