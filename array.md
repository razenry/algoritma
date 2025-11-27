# Dokumentasi Program Array C++

Program berikut meminta input batas dari pengguna, lalu menampilkan elemen array string sesuai batas tersebut.

## Kode Program

```cpp
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
```

## Penjelasan

- Program meminta input `batas` dari pengguna.
- Array berisi 10 elemen string.
- Program menampilkan elemen array dari indeks 0 hingga `batas` (inklusif).

## Output

### Kondisi Normal

Jika pengguna memasukkan batas antara 0 hingga 9, program akan menampilkan elemen array sesuai indeks.

**Contoh Input:**
```
Masukkan batas: 4
```
**Contoh Output:**
```
Elemen ke-0: satu
Elemen ke-1: dua
Elemen ke-2: tiga
Elemen ke-3: empat
Elemen ke-4: lima
```

### Kondisi Batas Di Luar Range

- Jika batas < 0: Tidak ada output array, karena kondisi `i <= batas` tidak terpenuhi.
- Jika batas >= 10: Program akan mencoba mengakses indeks di luar array, sehingga terjadi **runtime error (out of bounds)**.

**Contoh Input:**
```
Masukkan batas: 12
```
**Output:**
```
Elemen ke-0: satu
...
Elemen ke-9: sepuluh
Elemen ke-10: [undefined behavior, bisa crash atau output acak]
Elemen ke-11: [undefined behavior]
Elemen ke-12: [undefined behavior]
```

## Catatan

- Pastikan input batas antara 0 hingga 9 untuk menghindari error.
- Untuk keamanan, tambahkan validasi input agar tidak melebihi ukuran array.
