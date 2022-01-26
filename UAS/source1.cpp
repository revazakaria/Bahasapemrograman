#include <iostream>
using namespace std;

int main()
{
    string kd_matkul;
    string nama_matkul;
    
    cout << "Masukan Kd_Matkul : ";
    getline(cin, kd_matkul);
    cout << "Masukan Nama_Matkul : ";
    getline(cin, nama_matkul);
    
    cout << "Kd_Matkul : " << kd_matkul << endl;
    cout << "Alamat Kd_Matkul : " << &kd_matkul << endl;
    cout << "Nama_Matkul : " << nama_matkul << endl;
    cout << "Alamat Nama_Matkul : " << &nama_matkul << endl;
    
    return 0;
}