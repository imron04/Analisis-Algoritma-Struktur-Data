#include <iostream>
#include <string>
using namespace std;

class Buku {
private:
    string judul;
    string pengarang;
    int tahunTerbit;

public:
    // Constructor
    Buku(string j = "", string p = "", int t = 0) {
        judul = j;
        pengarang = p;
        tahunTerbit = t;
        cout << "Objek Buku '" << judul << "' telah dibuat." << endl;
    }

    // Destructor
    ~Buku() {
        cout << "Objek Buku '" << judul << "' telah dihapus." << endl;
    }

    string getJudul() {
        return judul;
    }

    void inputData() {
        cout << "\nMasukkan data buku:\n";
        cout << "Judul: ";
        cin.ignore(1, '\n'); 
        getline(cin, judul);
        cout << "Pengarang: ";
        getline(cin, pengarang);
        cout << "Tahun Terbit: ";
        cin >> tahunTerbit;
    }

    void tampilData() {
        cout << "\nData Buku:\n";
        cout << "Judul: " << judul << endl;
        cout << "Pengarang: " << pengarang << endl;
        cout << "Tahun Terbit: " << tahunTerbit << endl;
    }
};

int linearSearch(Buku arr[], int n, string target) {
    for (int i = 0; i < n; i++) {
        if (arr[i].getJudul() == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int jumlah_buku;

    cout << "Masukkan jumlah buku: ";
    cin >> jumlah_buku;
    
    while (jumlah_buku <= 0) {
        cout << "Jumlah harus lebih dari 0! Masukkan lagi: ";
        cin >> jumlah_buku;
    }
    
    Buku* perpustakaan = new Buku[jumlah_buku];
    
    for (int i = 0; i < jumlah_buku; i++) {
        cout << "\nInput data buku ke-" << i+1 << ":";
        perpustakaan[i].inputData();
    }
    
    string cari;
    cout << "\nMasukkan judul buku yang dicari: ";
    cin.ignore(1, '\n');
    getline(cin, cari);
    
    int hasil = linearSearch(perpustakaan, jumlah_buku, cari);
    
    if (hasil != -1) {
        cout << "\nBuku ditemukan pada indeks " << hasil << ":";
        perpustakaan[hasil].tampilData();
    } else {
        cout << "\nBuku dengan judul '" << cari << "' tidak ditemukan." << endl;
    }
    
    delete[] perpustakaan;
    
    return 0;
}
