#include <iostream>
using namespace std;

int main() {
    int n, soma = 0;

    cin >> n;

    while (n > 0) {
        soma += n;
        cin >> n;
    }

    cout << "Soma: " << soma;

    return 0;
}
