# 📘 **Dokumentasi Program: Aplikasi Menu Interaktif C++**

## 📝 Deskripsi Program

Program ini adalah aplikasi menu interaktif berbasis **console C++** yang dirancang untuk mendemonstrasikan konsep dasar pemrograman, seperti:

* Golongan tipe data
* Operator aritmatika
* Operator perbandingan
* Operator logika
* Sistem menu bertingkat (nested menu)
* Error handling untuk mencegah input tidak valid

Program menggunakan fungsi khusus (`inputInt()`) untuk **mencegah crash** apabila user memasukkan huruf, simbol, atau angka di luar range.

---

## 💻 Kode Program Lengkap

```cpp
#include <iostream>
#include <limits>
using namespace std;

void garis() {
    cout << "============================================" << endl;
}

// Fungsi input aman
int inputInt() {
    int x;
    while (true) {
        cin >> x;
        if (!cin.fail()) return x;

        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        cout << "Input tidak valid! Masukkan angka: ";
    }
}

int main() {
    int option;

    do {
        garis();
        cout << "                MENU UTAMA" << endl;
        garis();
        cout << "1. Golongan Tipe Data" << endl;
        cout << "2. Operator Aritmatika" << endl;
        cout << "3. Operator Perbandingan" << endl;
        cout << "4. Operator Logika" << endl;
        cout << "5. Keluar Program" << endl;
        garis();
        cout << "Masukkan pilihan (1-5): ";
        option = inputInt();
        garis();

        if (option < 1 || option > 5) {
            cout << "Pilihan tidak tersedia! Pilih angka 1–5." << endl;
            continue;
        }

        // ============================================
        // 1. Golongan Tipe Data
        // ============================================
        if (option == 1) {
            int sub;

            do {
                garis();
                cout << "         MENU GOLONGAN TIPE DATA" << endl;
                garis();
                cout << "1. Integer" << endl;
                cout << "2. Float" << endl;
                cout << "3. Double" << endl;
                cout << "4. Char" << endl;
                cout << "5. Kembali ke Menu Utama" << endl;
                garis();
                cout << "Masukkan pilihan (1-5): ";
                sub = inputInt();
                garis();

                if (sub < 1 || sub > 5) {
                    cout << "Pilihan tidak valid!" << endl;
                    continue;
                }

                if (sub == 1) cout << "Integer adalah tipe data bilangan bulat." << endl;
                if (sub == 2) cout << "Float adalah tipe data bilangan pecahan presisi tunggal." << endl;
                if (sub == 3) cout << "Double adalah tipe data bilangan pecahan presisi ganda." << endl;
                if (sub == 4) cout << "Char adalah tipe data karakter." << endl;

                garis();

            } while (sub != 5);
        }

        // ============================================
        // 2. Operator Aritmatika
        // ============================================
        if (option == 2) {
            int a, b;
            cout << "Masukkan nilai a: ";
            a = inputInt();
            cout << "Masukkan nilai b: ";
            b = inputInt();

            garis();
            cout << "Hasil Penjumlahan  : " << a + b << endl;
            cout << "Hasil Pengurangan  : " << a - b << endl;
            cout << "Hasil Perkalian    : " << a * b << endl;

            if (b != 0)
                cout << "Hasil Pembagian    : " << a / b << endl;
            else
                cout << "Hasil Pembagian    : Error (b = 0)" << endl;

            cout << "Hasil Modulus      : " << (b != 0 ? a % b : 0) << endl;
            garis();
        }

        // ============================================
        // 3. Operator Perbandingan
        // ============================================
        if (option == 3) {
            int a, b;
            cout << "Masukkan nilai a: ";
            a = inputInt();
            cout << "Masukkan nilai b: ";
            b = inputInt();
            garis();

            cout << "a == b : " << (a == b) << endl;
            cout << "a != b : " << (a != b) << endl;
            cout << "a > b  : " << (a > b) << endl;
            cout << "a < b  : " << (a < b) << endl;
            cout << "a >= b : " << (a >= b) << endl;
            cout << "a <= b : " << (a <= b) << endl;
            garis();
        }

        // ============================================
        // 4. Operator Logika
        // ============================================
        if (option == 4) {
            int x, y;

            cout << "Masukkan nilai x (0 atau 1): ";
            x = inputInt();

            cout << "Masukkan nilai y (0 atau 1): ";
            y = inputInt();

            garis();
            cout << "x AND y : " << (x && y) << endl;
            cout << "x OR y  : " << (x || y) << endl;
            cout << "NOT x   : " << (!x) << endl;
            garis();
        }

    } while (option != 5);

    garis();
    cout << "Program selesai. Terima kasih!" << endl;

    return 0;
}
```

---

## ▶️ **Simulasi Eksekusi Program**

### **1. Menu Utama**

```
1. Golongan Tipe Data
2. Operator Aritmatika
3. Operator Perbandingan
4. Operator Logika
5. Keluar Program
```

---

## 📂 1. Golongan Tipe Data

### Contoh:

Input:

```
1
1
```

Output:

```
Integer adalah tipe data bilangan bulat.
```

---

## ➗ 2. Operator Aritmatika

Input:

```
a = 10
b = 5
```

Output:

```
Hasil Penjumlahan  : 15
Hasil Pengurangan  : 5
Hasil Perkalian    : 50
Hasil Pembagian    : 2
Hasil Modulus      : 0
```

---

## ⚖️ 3. Operator Perbandingan

Input:

```
a = 7
b = 10
```

Output:

```
a == b : 0
a != b : 1
a > b  : 0
a < b  : 1
a >= b : 0
a <= b : 1
```

---

## 🔐 4. Operator Logika

Input:

```
x = 1
y = 0
```

Output:

```
x AND y : 0
x OR y  : 1
NOT x   : 0
```

---

## 🛡️ **Error Handling Demonstrasi**

### Jika user memasukkan huruf:

Input:

```
Masukkan pilihan: a
```

Output:

```
Input tidak valid! Masukkan angka:
```

### Jika user memasukkan angka di luar range:

```
Masukkan pilihan (1-5): 9
Pilihan tidak tersedia! Pilih angka 1–5.
```

---

## 🔎 **Analisis Program**

### 1. Struktur Program

* Program menggunakan **nested menu** (menu di dalam menu).
* Semua input menggunakan **inputInt()** untuk keamanan.
* Navigasi tidak kembali ke awal, tetapi bertahap sesuai sub-menu.

### 2. Keunggulan

* Lebih aman
* Lebih edukatif
* Cocok untuk praktik dasar C++

---

## 📊 Visualisasi Menu

```
MENU UTAMA
 ├── Golongan Tipe Data
 ├── Operator Aritmatika
 ├── Operator Perbandingan
 ├── Operator Logika
 └── Keluar Program
```

---

## 🏁 Output Akhir Program

```
Program selesai. Terima kasih!
```

---

