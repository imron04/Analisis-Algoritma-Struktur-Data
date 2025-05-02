#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

string toLowerCase(string str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

int linearSearch(string arr[], int n, string target) {
    string lowerTarget = toLowerCase(target);
    for (int i = 0; i < n; i++) {
        if (toLowerCase(arr[i]) == lowerTarget) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    
    while (n <= 0) {
        cout << "Jumlah harus lebih dari 0! Masukkan lagi: ";
        cin >> n;
    }
    
    string mahasiswa[n];
    
    cin.ignore(1, '\n'); 
    cout << "\nMasukkan nama mahasiswa:\n";
    for (int i = 0; i < n; i++) {
        cout << "Nama mahasiswa ke-" << i+1 << ": ";
        getline(cin, mahasiswa[i]);
    }
    
    string cari;
    cout << "\nMasukkan nama yang dicari: ";
    getline(cin, cari);
    
    int hasil = linearSearch(mahasiswa, n, cari);
    
    if (hasil != -1) {
        cout << "Nama '" << mahasiswa[hasil] << "' ditemukan pada indeks " << hasil << endl;
    } else {
        cout << "Nama '" << cari << "' tidak ditemukan dalam daftar" << endl;
    }
    
    return 0;
}
