#include <iostream>
using namespace std;

int main() {
    
    int batas = 4;

    int i = 0;

    cout << "Masukkan batas: "; 
    cin >> batas;

    string array[] = {"satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh"};
    
    while (i <= batas)
    {
        cout << "Elemen ke-" << i << ": " << array[i] << endl;
        i++;
    }

    // Contoh deklarasi array 2D
    string array2d[2][3] = {
        {"satu-satu", "satu-dua", "satu-tiga"},
        {"dua-satu", "dua-dua", "dua-tiga"}
    };

    // Menampilkan isi array 2D
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << "array2d[" << row << "][" << col << "]: " << array2d[row][col] << endl;
        }
    }
    
    return 0;
}
    
