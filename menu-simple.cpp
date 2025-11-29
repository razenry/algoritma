#include <iostream>
using namespace std;

int main()
{
    int pilihan;

    do
    {
        system("cls"); // Windows
        // system("clear"); // Linux/Mac

        cout << "========================================" << endl;
        cout << "           MENU BELAJAR CODING          " << endl;
        cout << "========================================" << endl;
        cout << "1. Tipe Data & Operator" << endl;
        cout << "2. Percabangan" << endl;
        cout << "3. Perulangan" << endl;
        cout << "4. Array" << endl;
        cout << "5. Keluar" << endl;
        cout << "========================================" << endl;
        cout << "Pilih (1-5): ";
        cin >> pilihan;

        if (pilihan == 1)
        {
            // TIPE DATA & OPERATOR
            system("cls");
            cout << "========================================" << endl;
            cout << "           TIPE DATA & OPERATOR         " << endl;
            cout << "========================================" << endl;

            int jenis;
            cout << "1. Bilangan Bulat\n2. Bilangan Pecahan\n3. Karakter\n4. Boolean\nPilih: ";
            cin >> jenis;

            if (jenis == 1)
            {
                int a, b;
                char op;
                cout << "Masukkan a: ";
                cin >> a;
                cout << "Masukkan b: ";
                cin >> b;
                cout << "Operator (+, -, *, /): ";
                cin >> op;

                if (op == '+')
                    cout << "Hasil: " << a + b << endl;
                else if (op == '-')
                    cout << "Hasil: " << a - b << endl;
                else if (op == '*')
                    cout << "Hasil: " << a * b << endl;
                else if (op == '/')
                {
                    if (b == 0)
                        cout << "Error: Tidak bisa bagi 0!" << endl;
                    else
                        cout << "Hasil: " << a / b << endl;
                }
            }
            else if (jenis == 2)
            {
                float a, b;
                char op;
                cout << "Masukkan a: ";
                cin >> a;
                cout << "Masukkan b: ";
                cin >> b;
                cout << "Operator (+, -, *, /): ";
                cin >> op;

                if (op == '+')
                    cout << "Hasil: " << a + b << endl;
                else if (op == '-')
                    cout << "Hasil: " << a - b << endl;
                else if (op == '*')
                    cout << "Hasil: " << a * b << endl;
                else if (op == '/')
                {
                    if (b == 0)
                        cout << "Error: Tidak bisa bagi 0!" << endl;
                    else
                        cout << "Hasil: " << a / b << endl;
                }
            }
            else if (jenis == 3)
            {
                char c;
                cout << "Masukkan karakter: ";
                cin >> c;
                cout << "Karakter kamu: " << c << endl;
            }
            else if (jenis == 4)
            {
                int x;
                cout << "Masukkan 0 atau 1: ";
                cin >> x;
                if (x == 0)
                    cout << "FALSE" << endl;
                else if (x == 1)
                    cout << "TRUE" << endl;
                else
                    cout << "Bukan boolean!" << endl;
            }

            cout << "========================================" << endl;
            system("pause");
        }

        else if (pilihan == 2)
        {
            // PERCABANGAN
            system("cls");
            cout << "========================================" << endl;
            cout << "              PERCABANGAN              " << endl;
            cout << "========================================" << endl;

            int jenis;
            cout << "1. IF\n2. IF ELSE\n3. SWITCH\nPilih: ";
            cin >> jenis;

            if (jenis == 1)
            {
                int x;
                cout << "Masukkan angka: ";
                cin >> x;
                if (x > 0)
                    cout << "Positif" << endl;
            }
            else if (jenis == 2)
            {
                int x;
                cout << "Masukkan angka: ";
                cin >> x;
                if (x % 2 == 0)
                    cout << "Genap" << endl;
                else
                    cout << "Ganjil" << endl;
            }
            else if (jenis == 3)
            {
                int hari;
                cout << "Masukkan angka 1-7: ";
                cin >> hari;
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
                    cout << "Hari tidak ada";
                }
                cout << endl;
            }

            cout << "========================================" << endl;
            system("pause");
        }

        else if (pilihan == 3)
        {
            // PERULANGAN
            system("cls");
            cout << "========================================" << endl;
            cout << "               PERULANGAN              " << endl;
            cout << "========================================" << endl;

            int jenis, n;
            cout << "1. FOR\n2. WHILE\n3. DO WHILE\nPilih: ";
            cin >> jenis;
            cout << "Cetak angka 1 sampai: ";
            cin >> n;

            if (jenis == 1)
            {
                for (int i = 1; i <= n; i++)
                    cout << i << " ";
            }
            else if (jenis == 2)
            {
                int i = 1;
                while (i <= n)
                    cout << i++ << " ";
            }
            else if (jenis == 3)
            {
                int i = 1;
                do
                {
                    cout << i++ << " ";
                } while (i <= n);
            }

            cout << "\n========================================" << endl;
            system("pause");
        }

        else if (pilihan == 4)
        {
            // ARRAY
            system("cls");
            cout << "========================================" << endl;
            cout << "                 ARRAY                 " << endl;
            cout << "========================================" << endl;

            int jenis;
            cout << "1. Array 1D\n2. Array 2D\nPilih: ";
            cin >> jenis;

            if (jenis == 1)
            {
                int n;
                cout << "Jumlah elemen: ";
                cin >> n;
                int arr[n];

                for (int i = 0; i < n; i++)
                {
                    cout << "Elemen " << i << ": ";
                    cin >> arr[i];
                }

                cout << "Isi array: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
            }
            else if (jenis == 2)
            {
                int baris, kolom;
                cout << "Jumlah baris: ";
                cin >> baris;
                cout << "Jumlah kolom: ";
                cin >> kolom;
                int arr[baris][kolom];

                for (int i = 0; i < baris; i++)
                {
                    for (int j = 0; j < kolom; j++)
                    {
                        cout << "Elemen [" << i << "][" << j << "]: ";
                        cin >> arr[i][j];
                    }
                }

                cout << "Isi matriks:\n";
                for (int i = 0; i < baris; i++)
                {
                    for (int j = 0; j < kolom; j++)
                        cout << arr[i][j] << " ";
                    cout << endl;
                }
            }

            cout << "========================================" << endl;
            system("pause");
        }

    } while (pilihan != 5);

    cout << "Terima kasih sudah belajar!" << endl;
    return 0;
}