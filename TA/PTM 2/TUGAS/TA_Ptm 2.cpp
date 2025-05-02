#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    int angka[n];

    cout << "Masukkan 5 bilangan bulat:\n";
    for (int i = 0; i < n; i++) {
        cin >> angka[i];
    }

    cout << "Sebelum diurut: ";
    for (int i = 0; i < n; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (angka[j] > angka[j + 1]) {
                int temp = angka[j];
                angka[j] = angka[j + 1];
                angka[j + 1] = temp;
            }
        }

        cout << "Iteration " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << angka[k] << " ";
        }
        cout << endl;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    return 0;
}

