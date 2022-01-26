#include<iostream>
#include<fstream>
using namespace std;

void create()
{
    string nama_matkul;
    ofstream txt;
    txt.open("soalganjil.txt", ios::app);
    cout<<"Masukkan Nama_Matkul : ";
    cin>>nama_matkul;
    txt<<nama_matkul;
    txt<<endl;
    txt.close();
}
void read()
{
    string nama_matkul;
    ifstream txt ("soalganjil.txt");
    if(txt.is_open())
    {
        while(! txt.eof())
        {
            getline(txt, nama_matkul);
            cout<<nama_matkul<<endl;
            cout<<endl;
        }
    } 
}
int main(){
    int pil;
    main:
    cout<<"Pilihan Menu"<<endl;
    cout<<"1. Create"<<endl;
    cout<<"2. Read"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Masukkan Pilihan :";
    cin>>pil;
    switch(pil){
        case 1:
            create();
            goto main;            
            break;
        case 2:
            read();
            goto main;
            break;
        case 3:
            return 0;
    }
}