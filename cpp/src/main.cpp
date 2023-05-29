#include <iostream>
using namespace std;

struct Data {
    string nama;
    int umur;
    double gaji;
};

struct Node {
    Data data;
    Node* prev;
    Node* next;
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insert(Data data) {
        Node* node = new Node;
        node->data = data;
        node->next = NULL;

        if (head == NULL) {
            node->prev = NULL;
            head = node;
            tail = node;
        }
        else {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
    }

    void print() {
        Node* node = head;
        while (node != NULL) {
            cout << "Nama: " << node->data.nama << endl;
            cout << "Umur: " << node->data.umur << endl;
            cout << "Gaji: " << node->data.gaji << endl << endl;
            node = node->next;
        }
    }

    void search(string nama) {
        Node* node = head;
        bool found = false;
        while (node != NULL) {
            if (node->data.nama == nama) {
                cout << "Nama: " << node->data.nama << endl;
                cout << "Umur: " << node->data.umur << endl;
                cout << "Gaji: " << node->data.gaji << endl << endl;
                found = true;
            }
            node = node->next;
        }
        if (!found) {
            cout << "Data tidak ditemukan." << endl << endl;
        }
    }
};

int main() {
    LinkedList linkedList;
    int choice;
    string nama;
    Data data;

    do {
        cout << "Menu:" << endl;
        cout << "1. Tambah data" << endl;
        cout << "2. Tampilkan data" << endl;
        cout << "3. Cari data" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan anda: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 1:
            cout << "Tambah data" << endl;
            cout << "Nama: ";
            cin >> data.nama;
            cout << "Umur: ";
            cin >> data.umur;
            cout << "Gaji: ";
            cin >> data.gaji;
            linkedList.insert(data);
            break;
        case 2:
            cout << "Data yang tersimpan:" << endl << endl;
            linkedList.print();
            break;
        case 3:
            cout << "Cari data" << endl;
            cout << "Nama: ";
            cin >> nama;
            linkedList.search(nama);
            break;
        case 4:
            cout << "Terima kasih." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
