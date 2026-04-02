#include <iostream>
using namespace std;

int main() {
    float horas, salarioMinimo;
    float valorHora, salarioBruto, imposto, salarioFinal;

    // Entrada
    cout << "Digite o numero de horas trabalhadas: ";
    cin >> horas;

    cout << "Digite o valor do salario minimo: ";
    cin >> salarioMinimo;

    // Calculos
    valorHora = salarioMinimo / 2;
    salarioBruto = horas * valorHora;
    imposto = salarioBruto * 0.03;
    salarioFinal = salarioBruto - imposto;

    // Saida
    cout << "Valor da hora: " << valorHora << endl;
    cout << "Salario bruto: " << salarioBruto << endl;
    cout << "Imposto: " << imposto << endl;
    cout << "Salario a receber: " << salarioFinal << endl;

    return 0;
}
