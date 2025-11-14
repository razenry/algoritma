# Dokumentasi Program: Simulasi Nested Loop

## Deskripsi Program
Program ini mendemonstrasikan penggunaan **nested loop** (perulangan bersarang) dalam bahasa C++. Program terdiri dari dua loop:
- **Outer loop**: Loop luar yang berjalan 3 kali
- **Inner loop**: Loop dalam yang berjalan 2 kali untuk setiap iterasi loop luar

## Kode Program
```cpp
#include <iostream>
using namespace std;

int main() {
    // Outer loop: iterates 3 times (i = 0, 1, 2)
    for (int i = 0; i < 3; i++) {
        cout << "Outer loop: i = " << i << endl;
        
        // Inner loop: iterates 2 times for each outer iteration
        for (int j = 0; j < 2; j++) {
            cout << "  Inner loop: j = " << j << endl;
        }
    }
    
    return 0;
}
```

## Simulasi Eksekusi Program

### Iterasi 1: i = 0
```
Outer loop: i = 0
  Inner loop: j = 0
  Inner loop: j = 1
```

### Iterasi 2: i = 1
```
Outer loop: i = 1
  Inner loop: j = 0
  Inner loop: j = 1
```

### Iterasi 3: i = 2
```
Outer loop: i = 2
  Inner loop: j = 0
  Inner loop: j = 1
```

## Output Lengkap Program
```
Outer loop: i = 0
  Inner loop: j = 0
  Inner loop: j = 1
Outer loop: i = 1
  Inner loop: j = 0
  Inner loop: j = 1
Outer loop: i = 2
  Inner loop: j = 0
  Inner loop: j = 1
```

## Analisis Kondisi

### 1. Kondisi Normal (Program Berjalan Sesuai Rencana)
- **Total iterasi outer loop**: 3 kali (i = 0, 1, 2)
- **Total iterasi inner loop**: 2 kali untuk setiap outer loop
- **Total eksekusi inner loop**: 3 × 2 = 6 kali

### 2. Urutan Eksekusi
```
i=0 → j=0 → j=1
i=1 → j=0 → j=1  
i=2 → j=0 → j=1
```

### 3. Pola Perubahan Variabel
```
Iterasi 1: i=0, j=0 → i=0, j=1
Iterasi 2: i=1, j=0 → i=1, j=1
Iterasi 3: i=2, j=0 → i=2, j=1
```

### 4. Kondisi Batas (Boundary Conditions)
- **Nilai minimum i**: 0
- **Nilai maksimum i**: 2
- **Nilai minimum j**: 0
- **Nilai maksimum j**: 1
- **Kondisi keluar outer loop**: i < 3 (false ketika i = 3)
- **Kondisi keluar inner loop**: j < 2 (false ketika j = 2)

## Visualisasi Proses
```
OUTER LOOP START
├─0─ i = 0
│   ├── INNER LOOP START
│   │   ├── j = 0
│   │   └── j = 1
│   └── INNER LOOP END
├── i = 1
│   ├── INNER LOOP START
│   │   ├── j = 0
│   │   └── j = 1
│   └── INNER LOOP END
├── i = 2
│   ├── INNER LOOP START
│   │   ├── j = 0
│   │   └── j = 1
│   └── INNER LOOP END
└── OUTER LOOP END
```

## Karakteristik Nested Loop
1. **Inner loop menyelesaikan semua iterasi** sebelum outer loop melanjutkan ke iterasi berikutnya
2. **Inner loop direset** setiap kali outer loop iterasi baru dimulai (j dimulai dari 0 lagi)
3. **Waktu eksekusi** meningkat secara eksponensial dengan bertambahnya nested loop
4. **Kompleksitas waktu**: O(n × m) dimana n iterasi outer, m iterasi inner

Program ini berhasil menunjukkan konsep dasar nested loop dengan output yang mudah dipahami dan diprediksi.
