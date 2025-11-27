#include <iostream>
using namespace std;

int main()
{
    int option;
    do {
        cout << "Opsi Menu:" << endl;
        cout << "1. Golongan Type Data" << endl;
        cout << "2. Percabangan" << endl;
        cout << "3. Perulangan" << endl;
        cout << "4. Larik" << endl;
        cout << "5. Tutup" << endl;

        cout << "Masukan angka pilihan: (1,2,3,4,5): ";
        cin >> option;

        if (option == 1)
        {
            int subOption;
            cout << "Anda memilih Golongan Type Data" << endl;
            cout << "Berikut Menu Golongan Type Data:" << endl;
            cout << "1. Angka" << endl;
            cout << "2. Karakter" << endl;
            cout << "3. Waktu" << endl;
            cout << "4. Boolean" << endl;
            cout << "5. Kembali ke menu utama" << endl;
            cout << "Masukan angka pilihan: (1,2,3,4,5): ";
            cin >> subOption;

            if (subOption == 1) {
                cout << "Anda memilih menu Angka" << endl;
                cout << "1. Bilangan Bulat" << endl;
                cout << "2. Bilangan Pecahan" << endl;
                cout << "3. Kembali ke menu Golongan Type Data" << endl;
                int subSubOption;
                cout << "Masukan angka pilihan: (1,2,3): ";
                cin >> subSubOption;

                if (subSubOption == 1) {
                    cout << "Anda memilih menu Bilangan Bulat" << endl;
                    cout << "Masukan nilai a: " << endl;
                    int a;
                    cin >> a;

                    cout << "Masukan nilai b: " << endl;
                    int b;
                    cin >> b;

                    cout << "Masukan Operator :" << endl;
                    string op;
                    cin >> op;

                    if (op == "+") {
                        cout << "Hasil dari " << a << " + " << b << " = " << a + b << endl;
                    }
                    else if (op == "-") {
                        cout << "Hasil dari " << a << " - " << b << " = " << a - b << endl;
                    }
                    else if (op == "*") {
                        cout << "Hasil dari " << a << " * " << b << " = " << a * b << endl;
                    }
                    else if (op == "/") {
                        if (b != 0) {
                            cout << "Hasil dari " << a << " / " << b << " = " << a / b << endl;
                        } else {
                            cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
                        }
                    } else {
                        cout << "Operator tidak dikenali." << endl;
                    }

                }

                if (subSubOption == 2) {
                    cout << "Anda memilih menu Bilangan Pecahan" << endl;
                    cout << "Masukan nilai a: " << endl;
                    float a;
                    cin >> a;

                    cout << "Masukan nilai b: " << endl;
                    float b;
                    cin >> b;

                    cout << "Masukan Operator :" << endl;
                    string op;
                    cin >> op;

                    if (op == "+") {
                        cout << "Hasil dari " << a << " + " << b << " = " << a + b << endl;
                    }
                    else if (op == "-") {
                        cout << "Hasil dari " << a << " - " << b << " = " << a - b << endl;
                    }
                    else if (op == "*") {
                        cout << "Hasil dari " << a << " * " << b << " = " << a * b << endl;
                    }
                    else if (op == "/") {
                        if (b != 0) {
                            cout << "Hasil dari " << a << " / " << b << " = " << a / b << endl;
                        } else {
                            cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
                        }
                    } else {
                        cout << "Operator tidak dikenali." << endl;
                    }
                }

                if (subSubOption == 3)
                {
                    continue;
                }
                


            }

            if (subOption == 5) {
                continue; // kembali ke menu utama
            }
            // Tambahkan aksi lain sesuai kebutuhan
        }
        // Tambahkan aksi untuk option 2, 3, 4 jika diperlukan

    } while (option != 5);

    cout << "Program selesai." << endl;
    return 0;
}
