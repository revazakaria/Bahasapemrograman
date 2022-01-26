#include <iostream>
using namespace std;

void kd_matkul()
{
    string kd_matkul;

     cout << "Masukan Kd_Matkul : ";
     getline(cin, kd_matkul);
}

void nama_matkul()
{
    string nama_matkul;

    cout << "Masukan Nama_Matkul : ";
    getline(cin, nama_matkul);
}

int main()
{
    kd_matkul();
    nama_matkul();

    return 0;
}