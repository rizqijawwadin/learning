#include <iostream>
using namespace std;

struct DataMahasiswa{
    string NamaMHS, GenderMHS, AlamatMHS, TgllhrMHS, NIM;
    DataMahasiswa *prev;
    DataMahasiswa *next;
};

DataMahasiswa *head, *tail, *cur, *newnode, *del, *afternode;
int countIdentitasMHS(){
    if (head == NULL){
        cout << "...no source data..." << endl;
    } else{
        cur = head;
        int amount = 0;
        while (cur != NULL){
            amount++;
            cur = cur -> next;
        }
        return amount;
    }

    return 0;
}

void IdentitasMHS(string data[5]){
    head = new DataMahasiswa();
    head -> NamaMHS = data[0];
    head -> NIM = data[1];
    head -> TgllhrMHS = data[2];
    head -> GenderMHS = data[3];
    head -> AlamatMHS = data[4];
    head -> prev = NULL;
    head -> next = NULL;
    tail = head;
}

void dataidentity(string data[5]){
    cout << "Nama\t\t: "; getline(cin, data[0]);
    cout << "NIM\t\t: "; cin >> data[1];
    cout << "Tanggal Lahir\t: "; cin >> data[2];
    cout << "Jenis Kelamin\t: "; cin >> data[3];
    cout << "Alamat\t\t: "; cin >> data[4];
    cout << endl;
}

void atthebeginning(string data[5]){
    if (head == NULL){
        cout << "...no source data..." << endl;
    } else{
        newnode = new DataMahasiswa();
        newnode -> NamaMHS = data[0];
        newnode -> NIM = data[1];
        newnode -> TgllhrMHS = data[2];
        newnode -> GenderMHS = data[3];
        newnode -> AlamatMHS = data[4];
        newnode -> prev = NULL;
        newnode -> next = head;
        head -> prev = newnode;
        head = newnode;
    }
}

void attheend(string data[5]){
    if (head == NULL){
        cout << "...no source data..." << endl;
    } else{
        newnode = new DataMahasiswa();
        newnode -> NamaMHS = data[0];
        newnode -> NIM = data[1];
        newnode -> TgllhrMHS = data[2];
        newnode -> GenderMHS = data[3];
        newnode -> AlamatMHS = data[4];
        newnode -> prev = tail;
        newnode -> next = NULL;
        tail -> next = newnode;
        tail = newnode;
    }
}

void atthemiddle(string data[5], int position){
    if (head == NULL){
        cout << "...no source data..." << endl;
    } else{
        if (position == 1){
            cout << "!! there is the wrong position !!\n" << endl;
        } else if (position > countIdentitasMHS()){
            cout << "!!! out of reach position !!!\n" << endl;
        } else{
            newnode = new DataMahasiswa();
            newnode -> NamaMHS = data[0];
            newnode -> NIM = data[1];
            newnode -> TgllhrMHS = data[2];
            newnode -> GenderMHS = data[3];
            newnode -> AlamatMHS = data[4];
            
            cur = head;
            int orderto = 1;
            while (orderto < position - 1){
                cur = cur -> next;
                orderto++;
            }
        
            afternode = cur -> next;
            newnode -> prev = cur;
            newnode -> next = afternode;
            cur -> next = newnode;
            afternode -> prev = newnode;
        }
    }
}

void deletebeginning(){
    if (head == NULL){
        cout << "...no source data..." << endl;
    } else{
        del = head;
        head = head -> next;
        head -> prev = NULL;
        delete del;
    }
}

void deleteend(){
    if (head == NULL){
        cout << "...no source data..." << endl;
    } else{
        del = tail;
        tail = tail -> prev;
        tail -> next = NULL;
        delete del;
    }
}

void deletemiddle(int position){
    if (head == NULL){
        cout << "...no source data..." << endl;
    } else{
        if (position == 1 || position == countIdentitasMHS()){
            cout << "!! there is the wrong position !!\n" << endl;
        } else if (position < 1 || position > countIdentitasMHS()){
            cout << "!!! out of reach position !!!\n" << endl;
        } else{
            int orderto = 1;
            cur = head;
            while (orderto < position - 1){
                cur = cur -> next;
                orderto++;
            }
        
            del = cur -> next;
            afternode = del -> next;
            cur -> next = afternode;
            afternode -> prev = cur;
            delete del;
        }
    }
}

void printIdentitasMHS(){
    if (head == NULL){
        cout << "...no source data..." << endl;
    } else{
        cout << "Jumlah data yang keluar: " <<countIdentitasMHS() << endl;
        cout << "Data Diri Mahasiswa:\n" << endl;
        cur = head;
        while (cur != NULL){
            cout << "Nama\t\t: " << cur -> NamaMHS << endl;
            cout << "NIM\t\t: " << cur -> NIM << endl;
            cout << "Tanggal Lahir\t: " << cur -> TgllhrMHS << endl;
            cout << "Jenis Kelamin\t: " << cur -> GenderMHS << endl;
            cout << "Alamat\t\t: " << cur -> AlamatMHS << "\n" << endl;
            cur = cur -> next;
        }
    }
}

void searchData(string NIMhs){
    DataMahasiswa* cur = head;
    bool found = false;
    while (cur != NULL){
        if (cur -> NIM == NIMhs){
            cout << "Nama\t\t: " << cur -> NamaMHS << endl;
            cout << "Tanggal Lahir\t: " << cur -> TgllhrMHS << endl;
            cout << "Jenis Kelamin\t: " << cur -> GenderMHS << endl;
            cout << "Alamat\t\t: " << cur -> AlamatMHS << "\n" << endl;
            cur = cur -> next;
            found = true;
            break;
        } else if (cur == NULL){
            cout << ".. data tidak ditemukan ..\n" << endl;
            break;
        }
    }
}

int main(){
    string newdata[5] = {"Patricia Sanders", "4063822670", "Mar 7, 2003", "Perempuan", "3274 Doe Meadow Drive, Annapolis Junction, MD 20701"};
    IdentitasMHS(newdata);
    // printIdentitasMHS();

    string dataDepan[5], dataBelakang[5], dataTengah[5];

    // string dataDepan[5] = {"Judith Rodriguez", "5187446291", "Feb 19, 2002", "Laki - laki", "4267 Cherry Tree Drive, Jacksonville, FL 32216"};
    // atthebeginning(dataDepan);
    // printIdentitasMHS();

    // string dataBelakang[5] = {"Rodger Struck", "4017153344", "Dec 5, 2002", "Laki - laki", "3831 Cedar Lane, Somerville, MA 02143"};
    // attheend(dataBelakang);
    // printIdentitasMHS();

    // string dataTengah[5] = {"Katie Sims", "6023099604", "Nov 1, 2005", "Perempuan", "1949 Linda Street, West Brunswick Twp, PA 19549"};
    // atthemiddle(dataTengah, 3);
    // printIdentitasMHS();

    // deletebeginning();
    // printIdentitasMHS();

    // deleteend();
    // printIdentitasMHS();

    // deletemiddle(3);
    // printIdentitasMHS();

    int choice;
    string NIMhs;
    do{
        cout << "Menu data yang tersedia\t:   1. Memasukkan data" << endl;
        cout << "\t\t\t    2. Menghapus data" << endl;
        cout << "\t\t\t    3. cari data" << endl;
        cout << "\t\t\t    4. data keseluruhan (selesai)" << endl;
        cout << "Pilih Menu yang Diinginkan: "; cin >> choice;
        cout << endl;

        switch (choice){
        case 1:
            int penambahan;
            cout << "1. Didepan" << endl;
            cout << "2. Dibelakang" << endl;
            cout << "3. Ditengah" << endl;
            cout << "pilih salah satu: "; cin >> penambahan;
            cout << endl;
            if (penambahan == 1){
                dataidentity(dataDepan);
                atthebeginning(dataDepan);
            } else if (penambahan == 2){
                dataidentity(dataBelakang);
                attheend(dataBelakang);
            } else if (penambahan == 3){
                dataidentity(dataTengah);
                atthemiddle(dataTengah, 3);
            } else{
                cout << "....pilihan tidak tersedia....\n" << endl;
            }
            break;
        
        case 2:
            int pengurangan;
            cout << "1. Didepan" << endl;
            cout << "2. Dibelakang" << endl;
            cout << "3. Ditengah" << endl;
            cout << "pilih salah satu: "; cin >> pengurangan;
            cout << endl;
            if (pengurangan == 1){
                deletebeginning();
            } else if (pengurangan == 2){
                deleteend();
            } else if (pengurangan == 3){
                deletemiddle(3);
            } else{
                cout << "....pilihan tidak tersedia....\n" << endl;
            }
            break;
        
        case 3:
            cout << "MASUKKAN NIM\t: "; cin >> NIMhs;
            cout << endl;
            searchData(NIMhs);
            break;
        
        case 4:
            printIdentitasMHS();
            break;
        
        default:
        cout << ".....menu tidak tersedia.....\n" << endl;
            break;
        }
    } while (choice != 4);
    
    return 0;
}