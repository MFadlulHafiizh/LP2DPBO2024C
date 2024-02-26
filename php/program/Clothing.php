<?php
/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */

// class clothing merupakan anak dari sebuah produk karena secara posisi nya memang pakaian adalah sebuah "benda" sama seperti produk.
// lalu menjadi posisi anak pertama dari produk karena bila dibandingkan dengan Shirt cakupan arti clothing atau pakaian itu lebih luas
// dan shirt atau baju itu juga merupakan salah satu dari jenis pakaian yang nantinya bisa berkembang lagi mungkin seperti adanya class Dress
// atau Pants dan lain lain
require_once("Product.php");
class Clothing extends Product {
    private $size;
    private $material;
    private $gender;

    // constructor
    public function __construct() {
    }

    // enkapsulasi
    public function getSize() {
        return $this->size;
    }

    public function setSize($size) {
        $this->size = $size;
    }

    public function getMaterial() {
        return $this->material;
    }

    public function setMaterial($material) {
        $this->material = $material;
    }

    public function getGender() {
        return $this->gender;
    }

    public function setGender($gender) {
        $this->gender = $gender;
    }
}
?>
