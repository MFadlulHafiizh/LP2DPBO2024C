<?php
/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */

// class shirt menjadi kelas cucu, dimana ia merupakan keturunan yang memiliki atribut lebih spesifik seperti nama nya baju itu adalah sebuah pakaian
// yang dimana sebuah pakaian itu bisa menjadi salah satu produk sehingga artibut dari kelas product dan clothing pasti dimiliki oleh shirt ini
require_once("Clothing.php");

class Shirt extends Clothing {
    private $color;
    private $sleeveType;

    // constructor
    public function __construct() {
    }

    // enkapsulasi
    public function getColor() {
        return $this->color;
    }

    public function setColor($color) {
        $this->color = $color;
    }

    public function getSleeveType() {
        return $this->sleeveType;
    }

    public function setSleeveType($sleeveType) {
        $this->sleeveType = $sleeveType;
    }
}
?>
