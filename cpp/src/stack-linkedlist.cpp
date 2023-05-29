#include <iostream>
using namespace std;

struct node
{
    long nim;
    string nama, gender, tgllhr;
    node *next;
};

node *top;
void stack()
{
    top = NULL;
}
void push(long nim, string nama, string gender, string tgllhr)
{
    node *newNode = new node;
    newNode->nim = nim;
    newNode->nama = nama;
    newNode->gender = gender;
    newNode->tgllhr = tgllhr;
    top = newNode;
    cout << "Data mahasiswa berhasil ditambahkan\n"
         << endl;
}
void pop()
{
    if (top == NULL)
    {
        cout << "data kosong\n"
             << endl;
    }
    else
    {
        node *temp = top;
        top = top->next;
        cout << "Data mahasiswa dengan nama " << temp->nama << " berhasil dihapus\n"
             << endl;
        delete temp;
    }
}
void display()
{
    if (top == NULL)
    {
        cout << "....Stack kosong....\n"
             << endl;
    }
    else
    {
        node *temp = top;
        while (temp != NULL)
        {
            cout << "NIM\t: " << temp->nim << endl;
            cout << "Nama\t: " << temp->nama << endl;
            cout << "Gender\t: " << temp->gender << endl;
            cout << "Tgl. Lahir\t: " << temp->tgllhr << endl;
            temp = temp->next;
        }
    }
}

int main()
{
    stack;
    int pilihan;
    long nim;
    string nama, gender, tgllhr;

    do
    {
        cout << "1. masukkan data" << endl;
        cout << "2. hapus data" << endl;
        cout << "3. membaca data (selesai)" << endl;
        cout << "pilih menu yang diinginkan: ";
        cin >> pilihan;
        cout << endl;
        switch (pilihan)
        {
        case 1:
            cout << "NIM\t: ";
            cin >> nim;
            cout << "Nama\t: ";
            cin >> nama;
            cout << "Gender\t: ";
            cin >> gender;
            cout << "Tgl. lahir\t: ";
            cin >> tgllhr;
            cout << endl;
            push(nim, nama, gender, tgllhr);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        default:
            cout << "...pilihan tidak ada di menu..." << endl;
            break;
        }
    } while (pilihan != 3);

    return 0;
}