#include <iostream>
using namespace std;

int main() {
    int numero[] = {25, 10, 65, 23, 45, 67, 98, 34};
    size_t n = sizeof(numero) / sizeof(numero[0]);

    for (size_t i = 0; i < n; i++) {
        cout << numero[i] << ' ';
    }
    cout << '\n';

    return 0;
}
