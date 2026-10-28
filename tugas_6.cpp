#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah kata: ";
    cin >> n;
    
    vector<string> data(n);
    cout << "Masukkan " << n << " kata\n";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    
    cout << "\n=========================\n";
    cout << "PROSES INSERTION SORT:\n";
    cout << "===========================\n";
    
    for (int i = 1; i < n; i++) {
        string key = data[i]; // simpan nilai yg mau dibandingkan
        int j = i - 1;

        cout << "\nLangkah ke-" << i << " (Key = \"" << key << "\"):\n";

        while (j >= 0 && data[j] > key) {
            cout << "  -> Pergeseran: \"" << data[j] << "\" digeser ke posisi kanan\n";
            data[j + 1] = data[j]; // geser ke kanan
            j--;
        }
        data[j + 1] = key; 

        cout << "  -> Kondisi data saat ini: [ ";
        for (int k = 0; k < n; k++) {
            cout << data[k] << " ";
        }
        cout << "]\n";
    }

    cout << "\n========================================\n";
    cout << "Hasil akhir pengurutan alfabetis (A-Z):\n";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << "\n";

    return 0;
}