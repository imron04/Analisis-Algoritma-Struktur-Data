#include <iostream>
using namespace std;

int main() {
    int y;
    cout << "Masukkan jumlah buku: ";
    cin >> y;
    cin.ignore(); // menghindari input buffer

    string x[y];

    for (int i = 0; i < y; i++) {
        cout << "Masukkan nama buku ke-" << i + 1 << ": ";
        getline(cin, x[i]); // getline utk input string
    }

    // proses insertion sort 
    for (int i = 1; i < y; i++) {
        string key = x[i];
        int j = i - 1;

        while (j >= 0 && x[j] > key) { // ascending
            x[j + 1] = x[j];
            j--;
        }

        x[j + 1] = key;

        // output proses sorting
        cout << "Proses sorting iterasi ke-" << i << ": ";
        for (int m = 0; m < y; m++) {
            cout << x[m] << " | ";
        }
        cout << endl;
    }

    // Moutput hasil akhir
    cout << "\nDaftar buku setelah sorting (Ascending):\n";
    for (int i = 0; i < y; i++) {
        cout << i + 1 << ". " << x[i] << endl;
    }

    return 0;
}

