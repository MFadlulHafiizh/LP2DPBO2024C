/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */
#include "Clothing.cpp"

// class shirt menjadi kelas cucu, dimana ia merupakan keturunan yang memiliki atribut lebih spesifik seperti nama nya baju itu adalah sebuah pakaian
// yang dimana sebuah pakaian itu bisa menjadi salah satu produk sehingga artibut dari kelas product dan clothing pasti dimiliki oleh shirt ini
class Shirt : public Clothing {
private:
    string color;
    string sleeveType;

public:
    // Constructor
    Shirt() {}

    // Encapsulation
    string getColor() {
        return color;
    }

    void setColor(string color) {
        this->color = color;
    }

    string getSleeveType() {
        return sleeveType;
    }

    void setSleeveType(string sleeveType) {
        this->sleeveType = sleeveType;
    }
};