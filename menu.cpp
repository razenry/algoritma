#include <iostream>
#include <limits>
using namespace std;

// ANSI COLORS
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define WHITE "\033[37m"

// Clear screen (cross platform)
void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Garis dengan warna
void garis()
{
    cout << CYAN << "========================================" << RESET << endl;
}

// Input aman integer
int inputInt()
{
    int x;
    while (true)
    {
        cin >> x;

        if (!cin.fail())
            return x;

        cout << RED << "Input tidak valid! Masukkan angka yang benar: " << RESET;
        cin.clear();
        cin.ignore(1000, '\n');
    }
}

// Pause sebelum lanjut
void pause()
{
    cout << YELLOW << "Tekan ENTER untuk lanjut..." << RESET;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

// ------ Forward declarations (functions per menu/submenu) ------
void menuUtama();
void menuGolonganTipeData();
void menuAngka();
void menuBilanganBulat();
void menuBilanganPecahan();
void menuKarakter();
void menuWaktu();
void menuBoolean();
void menuPercabangan();
void menuPerulangan();
void menuLarik();

// -------------------------------
// main
// -------------------------------
int main()
{
    menuUtama();
    return 0;
}

// -------------------------------
// Menu Utama
// -------------------------------
void menuUtama()
{
    int option;

    do
    {
        clearScreen();
        garis();
        cout << BLUE << "               MENU UTAMA               " << RESET << endl;
        garis();
        cout << "1. Golongan Tipe Data" << endl;
        cout << "2. Percabangan" << endl;
        cout << "3. Perulangan" << endl;
        cout << "4. Larik" << endl;
        cout << "5. Tutup Program" << endl;
        garis();

        cout << "Masukkan pilihan (1-5): ";
        option = inputInt();
        garis();

        if (option < 1 || option > 5)
        {
            cout << RED << "Pilihan tidak tersedia! Masukkan 1-5." << RESET << endl;
            pause();
            continue;
        }

        if (option == 1)
            menuGolonganTipeData();
        else if (option == 2)
            menuPercabangan();
        else if (option == 3)
            menuPerulangan();
        else if (option == 4)
            menuLarik();

    } while (option != 5);

    clearScreen();
    garis();
    cout << GREEN << "Program selesai. Terima kasih" << RESET << endl;
    garis();
}

// -------------------------------
// Menu: Golongan Tipe Data
// -------------------------------
void menuGolonganTipeData()
{
    int subOption = 0;

    do
    {
        clearScreen();
        garis();
        cout << BLUE << "[ Golongan Tipe Data ]" << RESET << endl;
        garis();
        cout << "1. Angka" << endl;
        cout << "2. Karakter" << endl;
        cout << "3. Waktu" << endl;
        cout << "4. Boolean" << endl;
        cout << "5. Kembali ke Menu Utama" << endl;
        garis();

        cout << "Masukkan pilihan (1-5): ";
        subOption = inputInt();

        if (subOption < 1 || subOption > 5)
        {
            cout << RED << "Pilihan tidak tersedia!" << RESET << endl;
            pause();
            continue;
        }

        if (subOption == 1)
            menuAngka();
        else if (subOption == 2)
            menuKarakter();
        else if (subOption == 3)
            menuWaktu();
        else if (subOption == 4)
            menuBoolean();

    } while (subOption != 5);
}

// -------------------------------
// Menu: Angka (submenu dari Golongan Tipe Data)
// -------------------------------
void menuAngka()
{
    int subSubOption = 0;

    do
    {
        clearScreen();
        garis();
        cout << GREEN << "[ Angka ]" << RESET << endl;
        garis();
        cout << "1. Bilangan Bulat" << endl;
        cout << "2. Bilangan Pecahan" << endl;
        cout << "3. Kembali" << endl;
        garis();
        cout << "Masukkan pilihan (1-3): ";
        subSubOption = inputInt();

        if (subSubOption < 1 || subSubOption > 3)
        {
            cout << RED << "Pilihan tidak tersedia!" << RESET << endl;
            pause();
            continue;
        }

        if (subSubOption == 1)
            menuBilanganBulat();
        else if (subSubOption == 2)
            menuBilanganPecahan();

    } while (subSubOption != 3);
}

// -------------------------------
// Menu: Bilangan Bulat
// -------------------------------
void menuBilanganBulat()
{
    int a, b;
    string op;

    clearScreen();
    garis();
    cout << MAGENTA << "[ Bilangan Bulat ]" << RESET << endl;
    garis();

    cout << "Masukkan nilai a: ";
    a = inputInt();
    cout << "Masukkan nilai b: ";
    b = inputInt();
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;

    garis();

    if (op == "+")
        cout << "Hasil = " << a + b << endl;
    else if (op == "-")
        cout << "Hasil = " << a - b << endl;
    else if (op == "*")
        cout << "Hasil = " << a * b << endl;
    else if (op == "/")
    {
        if (b == 0)
            cout << RED << "Error: Pembagian dengan nol!" << RESET << endl;
        else
            cout << "Hasil = " << a / b << endl;
    }
    else
        cout << RED << "Operator tidak valid." << RESET << endl;

    garis();
    pause();
}

// -------------------------------
// Menu: Bilangan Pecahan
// -------------------------------
void menuBilanganPecahan()
{
    float a, b;
    string op;

    clearScreen();
    garis();
    cout << MAGENTA << "[ Bilangan Pecahan ]" << RESET << endl;
    garis();

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;

    garis();

    if (op == "+")
        cout << "Hasil = " << a + b << endl;
    else if (op == "-")
        cout << "Hasil = " << a - b << endl;
    else if (op == "*")
        cout << "Hasil = " << a * b << endl;
    else if (op == "/")
    {
        if (b == 0)
            cout << RED << "Error: Pembagian dengan nol!" << RESET << endl;
        else
            cout << "Hasil = " << a / b << endl;
    }
    else
        cout << RED << "Operator tidak valid." << RESET << endl;

    garis();
    pause();
}

// -------------------------------
// Menu: Karakter
// -------------------------------
void menuKarakter()
{
    int ulang = 0;
    do
    {
        clearScreen();
        garis();
        cout << YELLOW << "[ Karakter ]" << RESET << endl;
        garis();

        char ch;
        cout << "Masukkan sebuah karakter: ";
        cin >> ch;

        garis();
        cout << "Karakter yang dimasukkan: " << GREEN << ch << RESET << endl;
        garis();

        cout << "1. Coba lagi" << endl;
        cout << "2. Kembali" << endl;
        cout << "Masukkan pilihan: ";
        ulang = inputInt();

    } while (ulang == 1);
}

// -------------------------------
// Menu: Waktu
// -------------------------------
void menuWaktu()
{
    int ulang = 0;
    do
    {
        clearScreen();
        garis();
        cout << CYAN << "[ Menu Waktu ]" << RESET << endl;
        garis();
        cout << "1. Input Waktu" << endl;
        cout << "2. Tampilkan Date (Tanggal Sekarang)" << endl;
        cout << "3. Tampilkan Time (Waktu Sekarang)" << endl;
        cout << "4. Tampilkan DateTime (Tanggal + Waktu)" << endl;
        cout << "5. Kembali" << endl;
        garis();
        cout << "Pilih opsi: ";
        int pilihan = inputInt();

        clearScreen();

        switch (pilihan)
        {
        case 1:
        {
            garis();
            cout << CYAN << "[ Input Waktu ]" << RESET << endl;
            garis();

            int jam, menit, detik;
            cout << "Masukkan jam (0-23): ";
            jam = inputInt();
            cout << "Masukkan menit (0-59): ";
            menit = inputInt();
            cout << "Masukkan detik (0-59): ";
            detik = inputInt();

            garis();
            if (jam < 0 || jam > 23 || menit < 0 || menit > 59 || detik < 0 || detik > 59)
                cout << RED << "Waktu tidak valid!" << RESET << endl;
            else
                cout << "Waktu: " << jam << ":" << menit << ":" << detik << endl;

            garis();
            break;
        }

        case 2:
        {
            garis();
            cout << CYAN << "[ Tanggal Hari Ini ]" << RESET << endl;
            garis();

            time_t now = time(nullptr);
            tm *ltm = localtime(&now);

            cout << "Tanggal: "
                 << ltm->tm_mday << "-"
                 << ltm->tm_mon + 1 << "-"
                 << ltm->tm_year + 1900 << endl;

            garis();
            break;
        }

        case 3:
        {
            garis();
            cout << CYAN << "[ Waktu Sekarang ]" << RESET << endl;
            garis();

            time_t now = time(nullptr);
            tm *ltm = localtime(&now);

            cout << "Waktu: "
                 << ltm->tm_hour << ":"
                 << ltm->tm_min << ":"
                 << ltm->tm_sec << endl;

            garis();
            break;
        }

        case 4:
        {
            garis();
            cout << CYAN << "[ DateTime Sekarang ]" << RESET << endl;
            garis();

            time_t now = time(nullptr);
            tm *ltm = localtime(&now);

            cout << "DateTime: "
                 << ltm->tm_mday << "-"
                 << ltm->tm_mon + 1 << "-"
                 << ltm->tm_year + 1900 << "  "
                 << ltm->tm_hour << ":"
                 << ltm->tm_min << ":"
                 << ltm->tm_sec << endl;

            garis();
            break;
        }

        case 5:
            return; // ← langsung kembali seperti menuKarakter

        default:
            cout << RED << "Pilihan tidak valid!" << RESET << endl;
        }

        cout << "\n1. Kembali ke Menu Waktu\n2. Kembali ke Menu Sebelumnya\n";
        cout << "Masukkan pilihan: ";
        ulang = inputInt();

    } while (ulang == 1);
}

// -------------------------------
// Menu: Boolean
// -------------------------------
void menuBoolean()
{
    clearScreen();
    garis();
    cout << GREEN << "[ Boolean ]" << RESET << endl;
    garis();

    int x;
    cout << "Masukkan angka (0/1): ";
    x = inputInt();

    if (x == 0)
        cout << "Nilai Boolean = FALSE" << endl;
    else if (x == 1)
        cout << "Nilai Boolean = TRUE" << endl;
    else
        cout << RED << "Boolean hanya menerima 0 atau 1!" << RESET << endl;

    garis();
    pause();
}

// -------------------------------
// Menu: Percabangan
// -------------------------------
void menuPercabangan()
{
    int subOption = 0;

    do
    {
        clearScreen();
        garis();
        cout << BLUE << "[ Percabangan ]" << RESET << endl;
        garis();
        cout << "1. If" << endl;
        cout << "2. If...else" << endl;
        cout << "3. If...else if...else" << endl;
        cout << "4. Switch Case" << endl;
        cout << "5. Ternary" << endl;
        cout << "6. Kembali ke Menu Utama" << endl;
        garis();

        cout << "Masukkan pilihan (1-6): ";
        subOption = inputInt();

        if (subOption == 1)
        {
            clearScreen();
            garis();
            cout << "[ IF ]" << endl;
            garis();
            int x;
            cout << "Masukkan nilai x: ";
            x = inputInt();

            cout << (x > 0 ? "Bilangan positif" : "Bukan bilangan positif") << endl;
            garis();
            pause();
        }

        if (subOption == 2)
        {
            clearScreen();
            garis();
            cout << "[ IF..ELSE ]" << endl;
            garis();
            int x;
            cout << "Masukkan nilai x: ";
            x = inputInt();

            if (x % 2 == 0)
                cout << "Genap" << endl;
            else
                cout << "Ganjil" << endl;

            garis();
            pause();
        }

        if (subOption == 3)
        {
            clearScreen();
            garis();
            cout << "[ IF..ELSE IF..ELSE ]" << endl;
            garis();

            int umur;
            cout << "Masukkan umur: ";
            umur = inputInt();

            if (umur <= 10)
                cout << "Anak-anak" << endl;
            else if (umur <= 17)
                cout << "Remaja" << endl;
            else if (umur <= 30)
                cout << "Dewasa" << endl;
            else
                cout << "Tua" << endl;

            garis();
            pause();
        }

        if (subOption == 4)
        {
            clearScreen();
            garis();
            cout << "[ SWITCH CASE ]" << endl;
            garis();

            int hari;
            cout << "Masukkan angka 1-7: ";
            hari = inputInt();

            switch (hari)
            {
            case 1:
                cout << "Senin";
                break;
            case 2:
                cout << "Selasa";
                break;
            case 3:
                cout << "Rabu";
                break;
            case 4:
                cout << "Kamis";
                break;
            case 5:
                cout << "Jumat";
                break;
            case 6:
                cout << "Sabtu";
                break;
            case 7:
                cout << "Minggu";
                break;
            default:
                cout << RED << "Tidak ada hari ke-" << hari << RESET;
            }

            cout << endl;
            garis();
            pause();
        }

        if (subOption == 5)
        {
            clearScreen();
            garis();
            cout << "[ TERNARY ]" << endl;
            garis();

            int nilai;
            cout << "Masukkan nilai (0-100): ";
            nilai = inputInt();

            cout << (nilai >= 75 ? "LULUS" : "TIDAK LULUS") << endl;

            garis();
            pause();
        }

    } while (subOption != 6);
}

// -------------------------------
// Menu: Perulangan
// -------------------------------
void menuPerulangan()
{
    int pilih;

    do
    {
        clearScreen();
        garis();
        cout << MAGENTA << "[ PERULANGAN ]" << RESET << endl;
        garis();
        cout << "1. For" << endl;
        cout << "2. While" << endl;
        cout << "3. Do While" << endl;
        cout << "4. Kembali" << endl;
        garis();

        cout << "Masukkan pilihan (1-4): ";
        pilih = inputInt();

        if (pilih == 1)
        {
            clearScreen();
            int n;
            cout << "Cetak angka 1 sampai: ";
            n = inputInt();

            for (int i = 1; i <= n; i++)
                cout << i << " ";

            cout << endl;
            garis();
            pause();
        }

        if (pilih == 2)
        {
            clearScreen();
            int n;
            cout << "Cetak angka 1 sampai: ";
            n = inputInt();

            int i = 1;
            while (i <= n)
                cout << i++ << " ";

            cout << endl;
            garis();
            pause();
        }

        if (pilih == 3)
        {
            clearScreen();
            int n;
            cout << "Cetak angka 1 sampai: ";
            n = inputInt();

            int i = 1;
            do
            {
                cout << i << " ";
                i++;
            } while (i <= n);

            cout << endl;
            garis();
            pause();
        }

    } while (pilih != 4);
}

// -------------------------------
// Menu: Larik (Array) - Pilih Dimensi
// -------------------------------
void menuLarik()
{
    int pilih;

    do
    {
        clearScreen();
        garis();
        cout << GREEN << "[ LARIK / ARRAY ]" << RESET << endl;
        garis();
        cout << "1. Array 1 Dimensi" << endl;
        cout << "2. Array 2 Dimensi (Matriks)" << endl;
        cout << "3. Kembali" << endl;
        garis();

        cout << "Masukkan pilihan (1-3): ";
        pilih = inputInt();

        // -----------------------------------
        // ARRAY 1 DIMENSI
        // -----------------------------------
        if (pilih == 1)
        {
            clearScreen();
            garis();
            cout << GREEN << "[ ARRAY 1 DIMENSI ]" << RESET << endl;
            garis();

            int n;
            cout << "Jumlah elemen array: ";
            n = inputInt();

            int *arr = new int[n];

            cout << "Masukkan elemen:" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "Index " << i << ": ";
                arr[i] = inputInt();
            }

            garis();
            cout << "Isi array: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";

            cout << endl;
            garis();
            pause();

            delete[] arr;
        }

        // -----------------------------------
        // ARRAY 2 DIMENSI / MATRIKS
        // -----------------------------------
        else if (pilih == 2)
        {
            clearScreen();
            garis();
            cout << BLUE << "[ ARRAY 2 DIMENSI / MATRIKS ]" << RESET << endl;
            garis();

            int baris, kolom;
            cout << "Masukkan jumlah baris: ";
            baris = inputInt();
            cout << "Masukkan jumlah kolom: ";
            kolom = inputInt();

            // Alokasi dinamis matriks
            int **matriks = new int *[baris];
            for (int i = 0; i < baris; i++)
                matriks[i] = new int[kolom];

            cout << "Masukkan elemen matriks:" << endl;
            for (int i = 0; i < baris; i++)
            {
                for (int j = 0; j < kolom; j++)
                {
                    cout << "Elemen [" << i << "][" << j << "]: ";
                    matriks[i][j] = inputInt();
                }
            }

            garis();
            cout << "Isi matriks:" << endl;
            for (int i = 0; i < baris; i++)
            {
                for (int j = 0; j < kolom; j++)
                    cout << matriks[i][j] << " ";
                cout << endl;
            }

            garis();
            pause();

            // Dealokasi
            for (int i = 0; i < baris; i++)
                delete[] matriks[i];
            delete[] matriks;
        }

    } while (pilih != 3);
}
