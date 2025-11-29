# 🌟 **DOKUMENTASI PROGRAM — APLIKASI MENU INTERAKTIF C++**

---

# 📘 **1. Deskripsi Program**

Aplikasi ini adalah **program menu interaktif berbasis C++** yang dibuat untuk memperkenalkan konsep-konsep fundamental pemrograman melalui menu yang terstruktur, jelas, dan mudah dipahami.

Program ini menampilkan contoh:

* Tipe data
* Operator
* Perulangan
* Array 1D & 2D
* Menu bertingkat (nested menu)
* Sistem input aman (anti-crash)

---

# 🧩 **2. Fitur Utama Program**

### ✔ Sistem Menu Bertingkat

Setiap menu memiliki sub-menu sehingga navigasi terasa natural dan edukatif.

### ✔ Input Aman

Menggunakan fungsi `inputInt()` untuk menghindari crash saat user memasukkan karakter tidak valid.

### ✔ Contoh-Konsep Lengkap

Program mencakup:

* Operator Aritmatika
* Operator Perbandingan
* Operator Logika
* Perulangan lengkap (for, while, do-while, range-based loop)
* Array 1D & 2D

### ✔ Tampilan Bersih

Setiap menu dibatasi garis dan diberi penjelasan yang singkat dan mudah dimengerti.

---

# 🖥️ **3. Kode Program (Versi Modular)**

Karena full code sudah kamu punya di file `.cpp`, bagian ini cukup menjelaskan bahwa:

> Program terdiri dari beberapa fungsi terstruktur:

```
menuUtama()
menuTipeData()
menuAritmatika()
menuPerbandingan()
menuLogika()
menuPerulangan()
menuArray()
menuArray1D()
menuArray2D()
inputInt()
```

---

# 🧭 **4. Struktur Navigasi Menu**

```
MENU UTAMA
 ├── 1. Tipe Data
 │     ├── Integer
 │     ├── Float
 │     ├── Double
 │     └── Char
 │
 ├── 2. Operator Aritmatika
 │
 ├── 3. Operator Perbandingan
 │
 ├── 4. Operator Logika
 │
 ├── 5. Perulangan
 │     ├── For Loop
 │     ├── While Loop
 │     ├── Do-While Loop
 │     └── Range-Based Loop
 │
 ├── 6. Larik (Array)
 │     ├── Array 1 Dimensi
 │     └── Array 2 Dimensi
 │
 └── 7. Keluar Program
```

---

# ▶️ **5. Simulasi Eksekusi Program**

---

## 📌 **Menu Utama**

```
============================================
                 MENU UTAMA
============================================
1. Golongan Tipe Data
2. Operator Aritmatika
3. Operator Perbandingan
4. Operator Logika
5. Perulangan
6. Larik (Array)
7. Keluar Program
============================================
Masukkan pilihan (1-7):
```

---

# 🧱 **6. Contoh Output Per Menu**

---

## 📂 **1. Golongan Tipe Data**

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

## ➗ **2. Operator Aritmatika**

Input:

```
a = 12
b = 6
```

Output:

```
Hasil Penjumlahan  : 18
Hasil Pengurangan  : 6
Hasil Perkalian    : 72
Hasil Pembagian    : 2
Hasil Modulus      : 0
```

---

## ⚖ **3. Operator Perbandingan**

Input:

```
a = 5
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

## 🔐 **4. Operator Logika**

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

## 🔁 **5. Perulangan**

### Range-Based Loop (Modern C++)

Input:

```
n = 5
Array = {1, 2, 3, 4, 5}
```

Output:

```
1 2 3 4 5
```

---

## 📊 **6. Array 1 Dimensi**

Input:

```
Jumlah elemen: 5
Isi: 1 2 3 4 5
```

Output:

```
Isi array: 1 2 3 4 5
```

---

## 🧮 **7. Array 2 Dimensi**

Input:

```
Baris : 2
Kolom : 3
Isi matriks:
1 2 3
4 5 6
```

Output:

```
Matriks:
1 2 3
4 5 6
```

---

# 🛡️ **8. Error Handling**

### Input huruf

```
Masukkan pilihan: a
```

Output:

```
Input tidak valid! Masukkan angka:
```

### Input angka di luar menu

```
Masukkan pilihan: 10
```

Output:

```
Pilihan tidak tersedia!
```

---

# 📊 **9. Visualisasi Bagian Perulangan**

```
PERULANGAN
 ├── For Loop
 ├── While Loop
 ├── Do-While Loop
 └── Range-Based Loop (Modern C++)
```

---

# 🏁 **10. Output Akhir Program**

```
============================================
Program selesai. Terima kasih!
============================================
```

---

