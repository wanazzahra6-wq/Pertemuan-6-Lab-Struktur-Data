#include<iostream>
using namespace std;

int main() {
    int data[] = {5, 2, 4, 1, 3}; // mulaai dari angak ke 2/ 1karena yg didepan ga ada kirinya
    int n = 5; // sesuai panjang array

    for (int i = 1; i < n; i++) { 
        int key = data[i]; // key 2
        int j = i - 1; // j = 0

        while (j >= 0 && data[j] > key) { // data j atau index 0 > key (5>2)
            data[j + 1] = data[j];
            j--; 
        }
        data[j + 1] = key; 
    }
    cout << "Hasil insertion sort : ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
 
    return 0;
}
