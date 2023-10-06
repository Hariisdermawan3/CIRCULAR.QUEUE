#include <iostream>
using namespace std;

#define N 10

int Q[N];
int F = 0;
int R = -1;
int COUNTER = 0;

void AWAL(void)
{
    F = 0;
    R = -1;
    COUNTER = 0;
}
void INSERT(void)
{
    if (COUNTER < N)
    {
        int X;
        cout<<"Masukan Karakter : ";
        cin>>X;
        R = (R + 1) % N;
        Q[R] = X;
        COUNTER++;
    }
    else
    {
        cout << "Antrian Penuh";
    }
}
void DELETE(void)
{
    if (COUNTER > 0)
    {
        int X;
        X = Q[F];
        F = (F + 1) % N;
        COUNTER--;
        cout<<"Karakter Yang Dihapus " << X <<endl;
    }
    else
    {
        cout << "Antrian Kosong";
    }
}
void CETAK_ANTRIAN(void)
{
    if (COUNTER > 0)
    {
        cout << "Isi Antrian : ";
        int I = F;
        int cetak = COUNTER;

        while (cetak > 0)
        {
            cout << Q[I] << " ";
            I = (I + 1) % N;
            cetak--;
        }
        cout << endl;
    }
    else
    {
        cout << "Antrian Kosong" << endl;
    }
}
int main(void)
{

    int pilih;
    while (true)
    {
        cout << "|--------------------|" << endl;
        cout << "|    Menu Pilihan    |" << endl;
        cout << "|--------------------|" << endl;
        cout << "| 1. INSERT          | "<< endl;
        cout << "| 2. DELETE          | "<< endl;
        cout << "| 3. CETAK ANTRIAN   | "<< endl;
        cout << "| 4. QUIT            | "<<endl;
        cout<<  "|--------------------| "<< endl;
        cout << "Pilih Menu (1-4) = ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            INSERT();
            break;
        case 2:
            DELETE();
            break;
        case 3:
            CETAK_ANTRIAN();
            break;
        case 4:
            cout<<"|--------------------|"<<endl;
            cout<<"|  Berhasil Keluar   |"<<endl;
            cout<<"|--------------------|"<<endl;
            return 0;
        default:
            cout << "Pilihan Yang Anda Masukan Tidak Sesuai" << endl;
        }
    }
    return 0;
}