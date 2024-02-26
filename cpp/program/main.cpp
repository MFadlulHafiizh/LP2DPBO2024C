/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */
#include <bits/stdc++.h>
#include <iostream>
#include "Shirt.cpp"

using namespace std;
void printTable(list<Shirt> shirtList){
    int minLenColumn[] = {9, 4, 5, 4, 8, 6, 6, 5, 5}; //inisialisasi width setiap kolom, nilai awal diambil dari panjang karakter header
    string header[] = {"ID Produk", "Brand", "Nama", "Size", "Material", "Gender", "Sleeve", "Color", "Harga"};
    for (list<Shirt>::iterator it = shirtList.begin(); it != shirtList.end(); it++) //ambil nilai karakter terpanjang dari masing masing atribut untuk setiap kolom table
    {
        if (it->getIdProduct().length() > minLenColumn[0]) {
            minLenColumn[0] = it->getIdProduct().length();
        }
        if (it->getBrand().length() > minLenColumn[1]) {
            minLenColumn[1] = it->getBrand().length();
        }
        if (it->getName().length() > minLenColumn[2]) {
            minLenColumn[2] = it->getName().length();
        }
        if (it->getSize().length() > minLenColumn[3]) {
            minLenColumn[3] = it->getSize().length();
        }
        if (it->getMaterial().length() > minLenColumn[4]) {
            minLenColumn[4] = it->getMaterial().length();
        }
        if (it->getGender().length() > minLenColumn[5]) {
            minLenColumn[5] = it->getGender().length();
        }
        if (it->getSleeveType().length() > minLenColumn[6]) {
            minLenColumn[6] = it->getSleeveType().length();
        }
        if (it->getColor().length() > minLenColumn[7]) {
            minLenColumn[7] = it->getColor().length();
        }
        if (to_string(it->getPrice()).length() > minLenColumn[8]) {
            minLenColumn[8] = to_string(it->getPrice()).length();
        }
    }
    int totalLenTable = 28; //nilai awal adalah total nilai fix penambahan karakter diluar panjang karakter inputan. seperti garis pemisah table | dan spasi tambahan
    for (int i = 0; i < sizeof(minLenColumn) / sizeof(minLenColumn[0]); i++) //tambahkan setiap karakter terpanjang pada masing masing kolom untuk mendapatkan total panjang table
    {
        totalLenTable += minLenColumn[i];
    }

    //print garis atas table
    for (int i = 0; i < totalLenTable; i++)
    {
        cout << "-";
    }
    cout << "\n";
    //print header
    for (int i = 0; i < header->length(); i++)
    {
        cout << ((i == 0) ? "| " : "") << setw(minLenColumn[i]+1) << left << header[i] << (i == (header->length()-1) ? "|\n" : "| ");
    }
    //print garis pemisah header table dengan data
    for (int i = 0; i < totalLenTable; i++)
    {
        cout << "-";
    }
    cout << "\n";

    //print semua elemen list pada masing masing kolom beserta setting width untuk lebar table dari nilai yang sudah didapat
    for (list<Shirt>::iterator it = shirtList.begin(); it != shirtList.end(); it++){
        cout << "| " << setw(minLenColumn[0]+1) << left << it->getIdProduct() << "| ";
        cout << setw(minLenColumn[1]+1) << left << it->getBrand() << "| ";
        cout << setw(minLenColumn[2]+1) << left << it->getName() << "| ";
        cout << setw(minLenColumn[3]+1) << left << it->getSize() << "| ";
        cout << setw(minLenColumn[4]+1) << left << it->getMaterial() << "| ";
        cout << setw(minLenColumn[5]+1) << left << it->getGender() << "| ";
        cout << setw(minLenColumn[6]+1) << left << it->getSleeveType() << "| ";
        cout << setw(minLenColumn[7]+1) << left << it->getColor() << "| ";
        cout << setw(minLenColumn[8]+1) << left << it->getPrice() << "|\n";

    }
    

    

}

int main(){
    list<Shirt> shirtList; //buat list of shirt class
    int n;
    cout << "Masukan jumlah data yang ingin diinputkan: ";
    cin >> n;
    while (n < 3)
    {
        cout << "Jumlah minimal data yang diinputkan 3, silahkan inputkan ulang jumlah : ";
        cin >> n;
    }
    cin.ignore(); //membersihkan input buffer karena pada input berikutnya menggunakan getline agar dapat memasukan karakter spasi pada string, menghindari ghost input (input ke skip)
    for (int i = 0; i < n; i++) //input data shirt sebanyak inputan dan masukan pada list
    {
        cout << "Masukan data ke " << i+1 << ":\n";
        Shirt temp;
        cout << "Masukan ID Produk: ";
        string idProduct;
        getline(cin, idProduct);
        temp.setIdProduct(idProduct);

        cout << "Masukan nama produk: ";
        string name;
        getline(cin, name);
        temp.setName(name);

        cout << "Masukan brand produk: ";
        string brand;
        getline(cin, brand);
        temp.setBrand(brand);

        cout << "Masukan harga produk: ";
        int price;
        cin >> price;
        temp.setPrice(price);
        cin.ignore(); //clear input buffer

        cout << "Masukan ukuran: ";
        string size;
        getline(cin, size);
        temp.setSize(size);

        cout << "Masukan bahan: ";
        string material;
        getline(cin, material);
        temp.setMaterial(material);

        cout << "Masukan jenis peruntukan gender: ";
        string gender;
        getline(cin, gender);
        temp.setGender(gender);

        cout << "Masukan warna: ";
        string color;
        getline(cin, color);
        temp.setColor(color);

        cout << "Jenis Sleeve: ";
        string sleeveType;
        getline(cin, sleeveType);
        temp.setSleeveType(sleeveType);

        shirtList.push_back(temp);
        cout << "\n";
    }
    printTable(shirtList); //print pada layar semua data yang ditampung pada list dalam format table
    
    
}