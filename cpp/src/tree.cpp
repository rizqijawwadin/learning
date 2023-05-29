#include <iostream>
using namespace std;

typedef struct tree
{
    int data;
    tree *left;
    tree *right;
} tree;

void tambah(tree **root, int databaru)
{
    if ((*root) == NULL)
    {
        tree *baru = new tree;
        baru->data = databaru;
        baru->left = NULL;
        baru->right = NULL;
        (*root) = baru;
        (*root)->left = NULL;
        (*root)->right = NULL;
    }
    else if (databaru < (*root)->data)
    {
        tambah(&(*root)->left, databaru);
    }
    else if (databaru > (*root)->data)
    {
        tambah(&(*root)->right, databaru);
    }
    else if (databaru == (*root)->data)
    {
        cout << "!!! Data sudah ada !!!\n"
             << endl;
    }
}

tree *cari(tree *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (data < root->data)
    {
        return cari(root->left, data);
    }
    else if (data > root->data)
    {
        return cari(root->right, data);
    }
    else if (data == root->data)
    {
        return root;
    }
};

int height(tree *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int u = height(root->left), v = height(root->right);
    if (u > v)
    {
        return u + 1;
    }
    else
    {
        return v + 1;
    }
}

tree *FindMin(tree *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->left == NULL)
    {
        return root;
    }
    else
    {
        return FindMin(root->left);
    }
}

void leaf(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left != NULL)
    {
        leaf(root->left);
    }
    if (root->right != NULL)
    {
        leaf(root->right);
    }
    if (root->right == NULL && root->left == NULL)
    {
        cout << root->data;
    }
}

tree *hapus(tree *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    else if (data < root->data)
    {
        root->left = hapus(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = hapus(root->right, data);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL)
        {
            tree *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            tree *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            tree *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = hapus(root->right, temp->data);
        }
    }
    return root;
}

void inorder(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void preorder(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    tree *root = NULL;
    int choice, data;

    while (true)
    {
        cout << "Menu data yang tersedia:\n";
        cout << "1. Masukkan data\n";
        cout << "2. Mencari data\n";
        cout << "3. Menghapus data\n";
        cout << "4. Membaca data\n";
        cout << "5. Selesai/Keluar\n";
        cout << "Pilih menu yang diinginkan: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nMasukkan data (angka): ";
            cin >> data;
            tambah(&root, data);
            break;
        case 2:
            cout << "\nMasukkan data yang dicari: ";
            cin >> data;
            cout << "data ditemukan pada kedalaman: ";
            height(root);
            cout << endl;
            if (cari(root, data) != NULL)
            {
                cout << "!!! Data ditemukan dan tersimpan !!!\n"
                     << endl;
            }
            else
            {
                cout << "!!! Data tidak dapat ditemukan !!!\n"
                     << endl;
            }
            break;
        case 3:
            cout << "\nMasukkan data yang dihapus: ";
            cin >> data;
            root = hapus(root, data);
            cout << "Data berhasil dihapus.\n\n";
            break;
        case 4:
            cout << "\nMembaca secara In order: ";
            inorder(root);
            cout << endl;
            cout << "Membaca secara Post order: ";
            postorder(root);
            cout << endl;
            cout << "Membaca secara Pre order: ";
            preorder(root);
            cout << "\n\n";
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Menu tidak tersedia. Silahkan pilih kembali.\n\n";
            break;
        }
    }
    return 0;
}
