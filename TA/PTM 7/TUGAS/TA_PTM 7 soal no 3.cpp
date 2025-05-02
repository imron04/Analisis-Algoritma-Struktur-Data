#include <iostream>
#include <string>
using namespace std;

class Mobil {
private:
    string merk;
    double harga;
    int tahun;

public:
    // Constructor
    Mobil(string m = "", double h = 0.0, int t = 0) {
        merk = m;
        harga = h;
        tahun = t;
        cout << "Mobil '" << merk << "' telah dibuat." << endl;
    }

    // Destructor
    ~Mobil() {
        cout << "Mobil '" << merk << "' dihapus." << endl;
    }

    // Setter
    void setMerk(string m) {
        merk = m;
    }
    void setHarga(double h) {
        harga = h;
    }
    void setTahun(int t) {
        tahun = t;
    }

    // Getter
    string getMerk() {
        return merk;
    }
    double getHarga() {
        return harga;
    }
    int getTahun() {
        return tahun;
    }

    void tampilData() {
        cout << "Merk: " << merk << endl;
        cout << "Harga: Rp " << harga << endl;
        cout << "Tahun: " << tahun << endl;
    }
};

int main() {
    int jumlah_mobil;
    
    cout << "Masukkan jumlah mobil: ";
    cin >> jumlah_mobil;
    
    while (jumlah_mobil <= 0) {
        cout << "Jumlah harus lebih dari 0! Masukkan lagi: ";
        cin >> jumlah_mobil;
    }
    
    Mobil* showroom = new Mobil[jumlah_mobil];
    
    
    cin.ignore(1, '\n'); 
    for (int i = 0; i < jumlah_mobil; i++) {
        string merk;
        double harga;
        int tahun;
        
        cout << "\nMasukkan data mobil ke-" << i+1 << ":\n";
        cout << "Merk: ";
        getline(cin, merk);
        cout << "Harga: ";
        cin >> harga;
        cout << "Tahun: ";
        cin >> tahun;
        cin.ignore(1, '\n'); 
        
        showroom[i].setMerk(merk);
        showroom[i].setHarga(harga);
        showroom[i].setTahun(tahun);
    }
    
    cout << "\n=== Daftar Mobil di Showroom ===" << endl;
    for (int i = 0; i < jumlah_mobil; i++) {
        cout << "\nMobil ke-" << i+1 << ":\n";
        showroom[i].tampilData();
    }
    
    delete[] showroom;
    
    return 0;
}
