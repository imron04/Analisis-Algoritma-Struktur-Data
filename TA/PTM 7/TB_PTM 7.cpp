#include <iostream>
using namespace std;

int main() {
    int x[] = {6, 12, 18, 24};
    int cari;
    int L = 0;
    int R = 3; 
    int mid;

    cout << "Masukkan data yang dicari: ";
    cin >> cari;

    bool ketemu = false;

    while (L <= R && !ketemu) {
        mid = (L + R) / 2;

        if (x[mid] == cari) {
            cout << "Bilangan ditemukan." << endl;
            ketemu = true;
        } else if (x[mid] < cari) {
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }

    if (!ketemu) {
        cout << "Bilangan tidak ditemukan." << endl;
    }

    return 0;
}
