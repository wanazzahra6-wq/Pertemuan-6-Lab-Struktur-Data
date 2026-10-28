#include<iostream>
using namespace std;

int main() {
    int data[] = {5, 2, 4, 1, 3};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // patokan index

        for (int j = i + 1; j < n; j++) { // j=4
            if (data[j] < data[minIndex]) { // 3 < 1?
                minIndex = j; // 3
            }
        }

        swap (data[i], data[minIndex]);

    } 

    cout << "hasil selektion sort : "; // 5 -> 1
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    return 0;

}
