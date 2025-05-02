#include <iostream>
#include <string>
using namespace std;

class Buku {
private:
    string judul;
    string penulis;
    int tahun_terbit;

public:
    Buku() {
        judul = "";
        penulis = "";
        tahun_terbit = 0;
        cout << "Objek Buku '" << judul << "' telah dibuat." << endl;
    }

    ~Buku() {
        cout << "Objek Buku '" << judul << "' telah dihapus." << endl;
    }

    void inputData() {
        cout << "\nMasukkan data buku:\n";
        cout << "Judul: ";
        cin.ignore(1, '\n'); 
        getline(cin, judul);
        cout << "Penulis: ";
        getline(cin, penulis);
        cout << "Tahun Terbit: ";
        cin >> tahun_terbit;
    }

    void tampilData() {
        cout << "\nData Buku:\n";
        cout << "Judul: " << judul << endl;
        cout << "Penulis: " << penulis << endl;
        cout << "Tahun Terbit: " << tahun_terbit << endl;
    }
};

int main() {
    int jumlah_buku;
    
    do {
        cout << "Masukkan jumlah buku (maksimal 5): ";
        cin >> jumlah_buku;
        if (jumlah_buku > 5 || jumlah_buku <= 0) {
            cout << "Jumlah buku harus antara 1 dan 5!" << endl;
        }
    } while (jumlah_buku > 5 || jumlah_buku <= 0);

    Buku perpustakaan[jumlah_buku];

    for (int i = 0; i < jumlah_buku; i++) {
        cout << "\nInput data buku ke-" << i+1 << ":";
        perpustakaan[i].inputData();
    }

    cout << "\n=== Daftar Buku di Perpustakaan ===" << endl;
    for (int i = 0; i < jumlah_buku; i++) {
        cout << "\nBuku ke-" << i+1 << ":";
        perpustakaan[i].tampilData();
    }

    return 0;
}
