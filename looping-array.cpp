#include <iostream>
using namespace std;

int main() {
    
    int batas = 1;

    int i = 0;

    string array[] = {"satu", "dua", "tiga", "empat", "lima"};
    
    while (i <= batas)
    {
        cout << "Elemen ke-" << i << ": " << array[i] << endl;
        i++;
    }
    

    return 0;
}
    
