/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */
#include "Product.cpp"

// class clothing merupakan anak dari sebuah produk karena secara posisi nya memang pakaian adalah sebuah "benda" sama seperti produk.
// lalu menjadi posisi anak pertama dari produk karena bila dibandingkan dengan Shirt cakupan arti clothing atau pakaian itu lebih luas
// dan shirt atau baju itu juga merupakan salah satu dari jenis pakaian yang nantinya bisa berkembang lagi mungkin seperti adanya class Dress
// atau Pants dan lain lain
class Clothing : public Product {
private:
    string size;
    string material;
    string gender;

public:
    // Constructor
    Clothing() {}

    // Encapsulation
    string getSize() {
        return size;
    }

    void setSize(string size) {
        this->size = size;
    }

    string getMaterial() {
        return material;
    }

    void setMaterial(string material) {
        this->material = material;
    }

    string getGender() {
        return gender;
    }

    void setGender(string gender) {
        this->gender = gender;
    }
};
