#include <iostream>
using namespace std;

int main() {
    float nota, soma = 0;
    int total = 0;

    cin >> nota;

    while (nota >= 0) {
        soma += nota;
        total++;
        cin >> nota;
    }

    if (total > 0)
        cout << "Media: " << soma / total;
    else
        cout << "Sem dados";

    return 0;
}
