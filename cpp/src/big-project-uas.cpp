#include <iostream>
#include <cstring>
using namespace std;
// float muwarritsLK(float);
// float muwarritsPR(float);
float count_mauruust(float);
float count_waarits(float);

void menu(), choice(), mauruuts(), waarits();
short pilihan;

int main()
{
    char repeat;
    cout << "===========================================" << endl;
    cout << "|         pembagian harta warisan         |" << endl;
    cout << "|      lembaga pengelola harta waris      |" << endl;
    cout << "|     perhitungan menurut hukum islam     |" << endl;
    cout << "===========================================" << endl;
    do
    {
        menu();
        choice();
        cout << "apakah ingin melanjutkan program (y/n)? ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
    if (repeat == 'n' || repeat == 'N')
    {
        cout << "=============== terimakasih ===============" << endl;
        cout << "| semoga dengan adanya program ini, dapat |" << endl;
        cout << "| memberi kemudahan kepada masyarakat dan |" << endl;
        cout << "|    menghindarkan dari kesalahpahaman    |" << endl;
        cout << "===========================================" << endl;
    }
    return 0;
}

void menu()
{
    cout << "orang yang mewariskan (al-muwarrits):" << endl;
    cout << "1. laki-laki" << endl;
    cout << "2. perempuan" << endl;
    cout << "masukkan pilihan anda\t : ";
    while (!(cin >> pilihan))
    {
        cout << "pilihan anda tidak sesuai, masukkan ulang" << endl;
        cout << "pilihan anda: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
}
void choice()
{
    switch (pilihan)
    {
    case 1:
        mauruuts();
        waarits();
        float muwarritsLK(float);
        break;
    case 2:
        mauruuts();
        waarits();
        float muwarritsPR(float);
        break;
    default:
        cout << "--------pilihan anda tidak tersedia--------" << endl;
        break;
    }
}
void mauruuts()
{
    int jmlharta, harta, hutang, wasiat, tazhij;
    cout << "-------------------------------------------" << endl;
    cout << "*note\t : isilah menggunakan angka nominal" << endl;
    cout << "\t   uang, jika tidak ada isilah 0*" << endl;
    cout << "\nbanyak harta (tirkah) yang diinputkan: ";
    cin >> jmlharta;
    for (int i = 0; i < jmlharta; i++)
    {
        cout << "nominal tirkah ke-" << i + 1 << "\t : ";
        cin >> harta;
    }
    cout << "jumlah hutang\t\t : ";
    cin >> hutang;
    cout << "jumlah wasiat (max 1/3)\t : ";
    cin >> wasiat;
    cout << "pengurusan jenazah\t : ";
    cin >> tazhij;
}
void waarits()
{
    int suami = 0, istri = 0, anakLK, anakPR, ayah, ibu, kakek, nenek1, nenek2;
    int cucuLKdrLK, cucuPRdrLK, saudaraLK, saudaraPR, saudaraLKseayah, saudaraPRseayah;
    int saudaraLKseibu, saudaraPRseibu, kemenakanLKkandung, kemenakanLKseayah;
    int pamankandung, pamanseayah, anakLKpamankandung, anakLKpamanseayah;
    cout << "-------------------------------------------" << endl;
    cout << "*note  : jika tidak ada/tidak memiliki atau" << endl;
    cout << "\t sudah meninggal, isilah dengan 0*" << endl;
    if (pilihan == 1)
    {
        cout << "\nistri sah (max 4)\t : ";
        cin >> istri;
    }
    if (pilihan == 2)
    {
        cout << "\nsuami (max 1)\t\t : ";
        cin >> suami;
    }
    cout << "anak kandung laki-laki\t : ";
    cin >> anakLK;
    cout << "anak kandung perempuan\t : ";
    cin >> anakPR;
    cout << "ayah kandung\t\t : ";
    cin >> ayah;
    cout << "ibu kandung\t\t : ";
    cin >> ibu;
    if (ayah == 0)
    {
        cout << "kakek (dari ayah)\t : ";
        cin >> kakek;
    }
    if (ibu == 0)
    {
        cout << "nenek (dari ayah)\t : ";
        cin >> nenek1;
        cout << "nenek (dari ibu)\t : ";
        cin >> nenek2;
    }
    if (anakLK == 0)
    {
        cout << "cucu laki dari anak laki : ";
        cin >> cucuLKdrLK;
    }
    if (anakPR < 2 && anakLK == 0)
    {
        cout << "cucu pr dari anak laki\t : ";
        cin >> cucuPRdrLK;
    }
    if (cucuLKdrLK == 0)
    {
        cout << "saudara kandung laki-laki: ";
        cin >> saudaraLK;
        cout << "saudara kandung perempuan: ";
        cin >> saudaraPR;
    }
    if (saudaraLK == 0)
    {
        cout << "saudara laki-laki seayah : ";
        cin >> saudaraLKseayah;
    }
    if (saudaraPR < 2)
    {
        cout << "saudara perempuan seayah : ";
        cin >> saudaraPRseayah;
    }
    if (cucuPRdrLK == 0 && cucuLKdrLK == 0)
    {
        cout << "saudara laki-laki seibu\t : ";
        cin >> saudaraLKseibu;
    }
    if (cucuLKdrLK == 0 && ayah == 0)
    {
        cout << "saudara perempuan seibu\t : ";
        cin >> saudaraPRseibu;
    }
    if (saudaraLKseayah == 0)
    {
        cout << "kemenakan laki-laki (dari saudara kandung laki-laki): ";
        cin >> kemenakanLKkandung;
    }
    if (kemenakanLKkandung == 0)
    {
        cout << "kemenakan laki-laki (dari saudara laki-laki seayah): ";
        cin >> kemenakanLKseayah;
    }
    if (kemenakanLKseayah == 0)
    {
        cout << "paman kandung (saudara kandung ayah)\t\t\t\t : ";
        cin >> pamankandung;
    }
    if (pamankandung == 0)
    {
        cout << "paman seayah (saudara tiri ayah)\t\t : ";
        cin >> pamanseayah;
    }
    if (pamanseayah == 0)
    {
        cout << "anak laki-laki paman kandung\t\t : ";
        cin >> anakLKpamankandung;
    }
    if (anakLKpamankandung == 0)
    {
        cout << "anak laki-laki paman seayah\t\t : ";
        cin >> anakLKpamanseayah;
    }
    cout << "-------------------------------------------" << endl;
}

float muwarritsLK(float)
{
    int istri, anakLK, anakPR, ayah, ibu, kakek, nenek;
    cout << "jumlah istri: ";
    cin >> istri;
    cout << "jumlah anak laki - laki:";
    cin >> anakLK;
    cout << "jumlah anak perempuan: ";
    cin >> anakPR;
}