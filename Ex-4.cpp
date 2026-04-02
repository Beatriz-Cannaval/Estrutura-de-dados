#include <iostream>
using namespace std;

int main() {
    float salario, novoSalario;

    // Entrada
    cout << "Digite o salario: ";
    cin >> salario;

    // Reajuste
    if (salario < 1000) {
        novoSalario = salario * 1.15;
    }
    else if (salario >= 1000 && salario <= 1500) {
        novoSalario = salario * 1.10;
    }
    else {
        novoSalario = salario * 1.05;
    }

    // Saida
    cout << "Novo salario: " << novoSalario << endl;

    return 0;
}
