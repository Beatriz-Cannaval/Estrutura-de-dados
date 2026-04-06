#include <iostream>
using namespace std;

int main() {
    int numero;
    float altura;

    int numMaisAlto, numMaisBaixo;
    float maiorAltura, menorAltura;

    for (int i = 1; i <= 10; i++) {
        cout << "Digite o numero do aluno: ";
        cin >> numero;

        cout << "Digite a altura (cm): ";
        cin >> altura;

        if (i == 1) {
            maiorAltura = menorAltura = altura;
            numMaisAlto = numMaisBaixo = numero;
        } else {
            if (altura > maiorAltura) {
                maiorAltura = altura;
                numMaisAlto = numero;
            }

            if (altura < menorAltura) {
                menorAltura = altura;
                numMaisBaixo = numero;
            }
        }
    }

    cout << "Aluno mais alto: " << numMaisAlto << " | Altura: " << maiorAltura << endl;
    cout << "Aluno mais baixo: " << numMaisBaixo << " | Altura: " << menorAltura << endl;

    return 0;
}
