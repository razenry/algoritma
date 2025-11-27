#include <iostream>
using namespace std;

void garis()
{
    cout << "========================================" << endl;
}

int main()
{
    int option;

    do
    {
        // MENU UTAMA
        garis();
        cout << "              MENU UTAMA               " << endl;
        garis();
        cout << "1. Golongan Tipe Data" << endl;
        cout << "2. Percabangan" << endl;
        cout << "3. Perulangan" << endl;
        cout << "4. Larik" << endl;
        cout << "5. Tutup Program" << endl;
        garis();

        cout << "Masukkan pilihan (1-5): ";
        cin >> option;
        garis();

        // ----------------------------
        // MENU 1 – GOLONGAN TIPE DATA
        // ----------------------------
        if (option == 1)
        {
            int subOption;
            do
            {
                cout << "[ Golongan Tipe Data ]" << endl;
                garis();
                cout << "1. Angka" << endl;
                cout << "2. Karakter" << endl;
                cout << "3. Waktu" << endl;
                cout << "4. Boolean" << endl;
                cout << "5. Kembali ke Menu Utama" << endl;
                garis();
                cout << "Masukkan pilihan (1-5): ";
                cin >> subOption;
                garis();

                // ---------- MENU ANGKA ----------
                if (subOption == 1)
                {
                    int subSubOption;
                    do
                    {
                        cout << "[ Angka ]" << endl;
                        garis();
                        cout << "1. Bilangan Bulat" << endl;
                        cout << "2. Bilangan Pecahan" << endl;
                        cout << "3. Kembali" << endl;
                        garis();
                        cout << "Masukkan pilihan (1-3): ";
                        cin >> subSubOption;
                        garis();

                        // BILANGAN BULAT
                        if (subSubOption == 1)
                        {
                            int a, b;
                            string op;

                            cout << "[ Bilangan Bulat ]" << endl;
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
                                if (b != 0)
                                    cout << "Hasil = " << a / b << endl;
                                else
                                    cout << "Error: pembagian dengan nol!" << endl;
                            }
                            else
                                cout << "Operator tidak valid." << endl;

                            garis();
                        }

                        // BILANGAN PECAHAN
                        if (subSubOption == 2)
                        {
                            float a, b;
                            string op;

                            cout << "[ Bilangan Pecahan ]" << endl;
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
                                if (b != 0)
                                    cout << "Hasil = " << a / b << endl;
                                else
                                    cout << "Error: pembagian dengan nol!" << endl;
                            }
                            else
                                cout << "Operator tidak valid." << endl;

                            garis();
                        }

                    } while (subSubOption != 3); // Kembali ke menu angka
                }

            } while (subOption != 5); // Kembali ke Menu Utama
        }

        // --------------------------
        // MENU 2 – PERCABANGAN
        // --------------------------

        if (option == 2)
        {
            int subOption;
            do
            {
                cout << "[ Percabangan ]" << endl;
                garis();
                cout << "1. If" << endl;
                cout << "2. If...else" << endl;
                cout << "3. If...else if...else" << endl;
                cout << "4. Switch Case" << endl;
                cout << "5. Ternary" << endl;
                cout << "6. Kembali ke Menu Utama" << endl;
                garis();
                cout << "Masukkan pilihan (1-6): ";
                cin >> subOption;
                garis();

                if (subOption == 1)
                {
                    int x;
                    cout << "Masukkan nilai x: ";
                    cin >> x;
                    garis();

                    if (x > 0)
                        cout << x << " adalah bilangan positif." << endl;

                    garis();
                }

                if (subOption == 2)
                {
                    int x;
                    cout << "Masukkan nilai x: ";
                    cin >> x;

                    if (x % 2 == 0)
                        cout << x << " adalah bilangan genap." << endl;
                    else
                        cout << x << " adalah bilangan ganjil." << endl;

                    garis();
                }

            } while (subOption != 6); // kembali ke menu utama
        }

    } while (option != 5);

    garis();
    cout << "Program selesai. Terima kasih" << endl;
    return 0;
}
