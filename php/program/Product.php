<?php
/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */

// class product menjadi parent class dengan kedudukan tertinggi karena definisi dari sebuah produk itu sangat luas yang nantinya bisa saja mungkin
// akan memiliki produk produk lain diluar lingkup pakaian
class Product {
    private $idProduct;
    private $name;
    private $brand;
    private $price;

    //constructor
    public function __construct() {
    }

    //encapsulasi
    public function getIdProduct() {
        return $this->idProduct;
    }
    public function setIdProduct($idProduct) {
        $this->idProduct = $idProduct;
    }
    public function getName() {
        return $this->name;
    }
    public function setName($name) {
        $this->name = $name;
    }
    public function getBrand() {
        return $this->brand;
    }
    public function setBrand($brand) {
        $this->brand = $brand;
    }

    public function getPrice() {
        return $this->price;
    }

    public function setPrice($price) {
        $this->price = $price;
    }
}
?>
