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
    
    return 0;
}
    
