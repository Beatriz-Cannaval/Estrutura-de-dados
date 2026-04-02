#include <iostream>
using namespace std;

int main() {
    float preco, valorFinal;
    int codigo;

    // Entrada
    cout << "Digite o preco do produto: ";
    cin >> preco;

    cout << "Digite o codigo de pagamento (1 a 4): ";
    cin >> codigo;

    // Condicoes
    if (codigo == 1) {
        valorFinal = preco * 0.90; // 10% desconto
    }
    else if (codigo == 2) {
        valorFinal = preco * 0.95; // 5% desconto
    }
    else if (codigo == 3) {
        valorFinal = preco; // sem desconto
    }
    else if (codigo == 4) {
        valorFinal = preco * 1.10; // 10% acrescimo
    }
    else {
        cout << "Codigo invalido!" << endl;
        return 0;
    }

    // Saida
    cout << "Valor a pagar: " << valorFinal << endl;

    return 0;
}
