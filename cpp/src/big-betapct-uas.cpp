#include <iostream>
#include <cstring>
using namespace std;
int countmauruuts(int, int, int, int, int&);
int countwaarits(int, int, int, int, int, int);
void menu(), mauruuts(), waarits(), valuewaarits();
short pilihan;
char suami, ayah, ibu, kakek;
int harta[5], fardl[50], jmlharta, hutang, wasiat, tazhij, result;
int istri = 0, anakLK, anakPR, nenek1, nenek2, cucuLKdrLK, cucuPRdrLK;
int val1, val2, rules;

int main(){
    char repeat;
    cout << "=================================================" << endl;
    cout << "|            pembagian harta warisan            |" << endl;
    cout << "|         lembaga pengelola harta waris         |" << endl;
    cout << "|        perhitungan menurut hukum islam        |" << endl;
    cout << "=================================================" << endl;
    do{
        menu();
        mauruuts();
        waarits();
        valuewaarits();
        cout << "apakah ingin melanjutkan 'program (y/n)? ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
    if (repeat == 'n' || repeat == 'N'){
        cout << "================== terimakasih ==================" << endl;
        cout << "|semoga dengan adanya program ini, dapat memberi|" << endl;
        cout << "| kemudahan kepada masyarakat dan menghindarkan |" << endl;
        cout << "| dari konflik, perseteruan, dan kesalahpahaman |" << endl;
        cout << "=================================================" << endl;
    }
    return 0;
}

void menu(){
    cout << "orang yang mewariskan (al-muwarrits) :" << endl;
    cout << "1. laki-laki" << endl;
    cout << "2. perempuan" << endl;
    cout << "masukkan pilihan anda\t\t  : "; cin >> pilihan;
    while (!(pilihan == 1 || pilihan == 2)){
        cin.clear();
        cin.ignore(123, '\n');
        cout << "pilihan anda tidak sesuai, masukkan dengan angka" << endl;
        cout << "masukkan ulang pilihan anda\t  : "; cin >> pilihan;
    }
}
void mauruuts(){
    cout << "-------------------------------------------------" << endl;
    cout << "*note\t : isilah menggunakan angka nominal uang," << endl;
    cout << "\t   jika tidak ada isilah 0*" << endl;
    cout << "\njumlah tirkah\t\t\t  : "; cin >> harta[0];
    cout << "jumlah hutang\t\t\t  : "; cin >> harta[1];
    cout << "jumlah wasiat (max 1/3)\t\t  : "; cin >> harta[2];
    while (harta[2] > harta[0] / 3){
        cin.clear();
        cin.ignore(123, '\n');
        cout << "masukkan anda tidak sesuai, masukkan dengan benar" << endl;
        cout << "jumlah wasiat (max 1/3)\t\t  : "; cin >> harta[2];
    }
    cout << "pengurusan jenazah\t\t  : "; cin >> harta[3];
    countmauruuts(harta[0], harta[1], harta[2], harta[3], harta[4]);
    cout << "harta siap dibagi (Al-Irts)\t  : " << harta[4] << endl;
}
void waarits(){
    cout << "------------------ perhatikan! ------------------" << endl;
    cout << "perlu diketakui bahwa program ini masih jauh dari" << endl;
    cout << "  kata sempurna, ahli waris hanya terbatas dari" << endl;
    cout << " ayahkandung dan ibu kandung sampai anak kandung" << endl;
    cout << "   laki-laki dan anakkandung perempuan. ketika" << endl;
    cout << " telah sampai pada kedua tingkatan tersebut maka" << endl;
    cout << " wajib diisi minimal 1 orang untuk ayah dan anak" << endl;
    cout << "\t\tkandung laki-laki" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "*note  : jika tidak ada/tidak memiliki atau sudah" << endl;
    cout << "\t meninggal, isilah dengan 0. beberapa me-" << endl;
    cout << "\t nggunakan perintah yes/no, isilah y/n*" << endl;
    if (pilihan == 1){
        cout << "\nistri sah (max 4)\t\t  : "; cin >> istri;  
        while (istri > 4 || istri < 0){
            cin.clear();
            cin.ignore(123, '\n');
            cout << "masukkan anda tidak valid, masukkan dengan benar" << endl;
            cout << "istri sah (max 4)\t\t  : "; cin >> istri;
        }
    }
    if (pilihan == 2){
        cout << "\nsuami (y/n)\t\t\t  : "; cin >> suami;
        while (!((suami == 'y' || suami == 'Y') || (suami == 'n' || suami == 'N'))){
            cin.clear();
            cin.ignore(123, '\n');
            cout << "masukkan anda tidak valid, masukkan dengan benar" << endl;
            cout << "suami (y/n)\t\t\t  : "; cin >> suami;
        }
    }
    cout << "anak kandung laki-laki\t\t  : "; cin >> anakLK;
    while (anakLK < 0){
        cin.clear();
        cin.ignore(123, '\n');
        cout << "masukkan anda tidak valid, masukkan dengan benar" << endl;
        cout << "anak kandung laki-laki\t\t  : "; cin >> anakLK;
    }
    cout << "anak kandung perempuan\t\t  : "; cin >> anakPR;
    while (!(anakPR >= 0)){
        cin.clear();
        cin.ignore(123, '\n');
        cout << "masukkan anda tidak valid, masukkan dengan benar" << endl;
        cout << "anak kandung perempuan\t\t  : "; cin >> anakPR;
    }
    cout << "ayah kandung (y/n)\t\t  : "; cin >> ayah;
    while (!((ayah == 'y' || ayah == 'Y') || (ayah == 'n' || ayah == 'N'))){
        cin.clear();
        cin.ignore(123, '\n');
        cout << "masukkan anda tidak valid, masukkan dengan benar" << endl;
        cout << "ayah kandung (y/n)\t\t  : "; cin >> ayah;
    }
    cout << "ibu kandung (y/n)\t\t  : "; cin >> ibu;
    while (!((ibu == 'y' || ibu == 'Y') || (ibu == 'n' || ibu == 'N'))){
        cin.clear();
        cin.ignore(123, '\n');
        cout << "masukkan anda tidak valid, masukkan dengan benar" << endl;
        cout << "ibu kandung (y/n)\t\t  : "; cin >> ibu;
    }
    cout << "-------------------------------------------------" << endl;
}
void valuewaarits(){
    cout << "\t       *hasil perhitungan*" << endl;
    cout << "\nashabul furudh\t\t\t    bagian" << endl;
    if (suami == 'y' || suami == 'Y'){
        if (anakLK == 0 && anakPR == 0){
            fardl[0] = harta[4] / 2;
        } else{
            fardl[0] = harta[4] / 4;
        }
        cout << "suami\t\t\t\t  : " << fardl[0] << endl;
    }
    if (!(istri < 1 || istri > 4)){
        if (anakLK == 0 && anakPR == 0){
            fardl[0] = harta[4] / 4;
        } else{
            fardl[0] = harta[4] / 8;
        }
        cout << "istri (untuk " << istri << " bagian)\t\t  : " << fardl[0] << endl;
    }
    if ((ayah == 'y' || ayah == 'Y') || (ibu == 'y' || ibu == 'Y')){
        if (anakLK == 0 && cucuLKdrLK == 0){
            
        } else{
            fardl[1] = harta[4] / 6;
            fardl[2] = harta[4] / 6;
        }
        cout << "ayah kandung\t\t\t  : " << fardl[1] << endl;
        cout << "ibu kandung\t\t\t  : " << fardl[2] << endl;
    }
    if (anakLK > 0){
        val1 = anakLK * 2 + anakPR;
        val2 = (harta[4] - (fardl[0] + fardl[1] + fardl[2])) / val1;
        fardl[3] = val2 * 2;
        fardl[4] = val2;
        cout << "anak kandung laki-laki (tiap anak): " << fardl[3] << endl;
        cout << "anak kandung perempuan (tiap anak): " << fardl[4] << endl;
    }
    rules = countwaarits(fardl[0], fardl[1], fardl[2], fardl[3], fardl[4], harta[4]);
    cout << "\nsisa harta warisan\t\t  : " << rules << endl;
    if (rules > 0){
        cout << "-------------------------------------------------" << endl;
        cout << "jika semua ahli warris tidak ada, maka seharusnya" << endl;
        cout << "tirkah itu diserahkan ke baitul maal (kas negara)" << endl;
        cout << "demikian halnya jika tirkah setelah dibagi kepada" << endl;
        cout << "ahli waris masih ada sisa, maka sisanya harus di-" << endl;
        cout << "serahkan kepada baitul mal. jika tidak ada baitul" << endl;
        cout << "mal atau ada akan namun baitul mal tersebut tidak" << endl;
        cout << " terurus dengan baik, maka tirkah tersebut dapat " << endl;
        cout << "   diberikan/dikembalikan kepada dzawil furudl   " << endl;
        cout << "  sesuai dengan perbandingan pendapatan masing-" << endl;
        cout << "  masing, kecuali suami atau istri. tetapi jika" << endl;
        cout << "  dzawil furudl tidak ada, maka tirkah tersebut" << endl;
        cout << "       boleh diberikan kepada dzawil arham" << endl;
    }
    cout << "-------------------------------------------------" << endl;
}

int countmauruuts(int v, int w, int x, int y, int& z){
    z = v - w - x - y;
    return z;
}
int countwaarits(int a, int b, int c, int d, int e, int z){
    int verif;
    verif = a + b + c + (d * anakLK) + (e * anakPR);
    z -= verif;
    return z;
}