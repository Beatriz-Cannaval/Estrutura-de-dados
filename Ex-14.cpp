#include <iostream>
using namespace std;

int main() {
    int op;

    do {
        cout << "\n1 - Opcao 1\n2 - Opcao 2\n3 - Sair\n";
        cin >> op;

        switch(op) {
            case 1: cout << "Escolheu 1"; break;
            case 2: cout << "Escolheu 2"; break;
            case 3: cout << "Saindo..."; break;
            default: cout << "Invalido";
        }

    } while (op != 3);

    return 0;
}
