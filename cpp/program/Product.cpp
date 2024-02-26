/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */
#include <string>
using namespace std;

// class product menjadi parent class dengan kedudukan tertinggi karena definisi dari sebuah produk itu sangat luas yang nantinya bisa saja mungkin
// akan memiliki produk produk lain diluar lingkup pakaian
class Product {
private:
    string idProduct;
    string name;
    string brand;
    int price;

public:
    // Constructor
    Product() {}

    // Encapsulation
    string getIdProduct() {
        return idProduct;
    }

    void setIdProduct(string idProduct) {
        this->idProduct = idProduct;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    string getBrand() {
        return brand;
    }

    void setBrand(string brand) {
        this->brand = brand;
    }

    int getPrice() {
        return price;
    }

    void setPrice(int price) {
        this->price = price;
    }
};