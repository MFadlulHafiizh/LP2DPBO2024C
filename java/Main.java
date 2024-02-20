/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */

import java.util.stream.IntStream;

import models.Shirt;

/**
 * Main
 */
public class Main {
    //untuk mencetak table
    private static void printTable(Shirt... shirts){
        int[] minLenColumn = {9, 4, 5, 4, 8, 6, 6, 5, 5}; //menampung panjang minimal lebar setiap kolom, ini nilai default dari panjang karakter judul tabel
        for (Shirt shirt : shirts) { //mencari nilai karakter terpanjang pada setiap kolom
            if (shirt.getIdProduct().length() > minLenColumn[0]) {
                minLenColumn[0] = shirt.getIdProduct().length();
            }
            if (shirt.getBrand().length() > minLenColumn[1]) {
                minLenColumn[1] = shirt.getBrand().length();
            }
            if (shirt.getName().length() > minLenColumn[2]) {
                minLenColumn[2] = shirt.getName().length();
            }
            if (shirt.getSize().length() > minLenColumn[3]) {
                minLenColumn[3] = shirt.getSize().length();
            }
            if (shirt.getMaterial().length() > minLenColumn[4]) {
                minLenColumn[4] = shirt.getMaterial().length();
            }
            if (shirt.getGender().length() > minLenColumn[5]) {
                minLenColumn[5] = shirt.getGender().length();
            }
            if (shirt.getSleeveType().length() > minLenColumn[6]) {
                minLenColumn[6] = shirt.getSleeveType().length();
            }
            if (shirt.getColor().length() > minLenColumn[7]) {
                minLenColumn[7] = shirt.getColor().length();
            }
            if ((String.valueOf(shirt.getPrice()).length()) > minLenColumn[8]) {
                minLenColumn[8] = (String.valueOf(shirt.getPrice()).length());
            }
        }
        int totalLenTable = IntStream.of(minLenColumn).sum() + 31;
        for (int i = 0; i < totalLenTable; i++) { //print garis table atas sebanyak semua karakter terpanjang yang ada pada data + 31 yang didapat dari tambahan spasi garis pinggir table | dan karakter tambahan Rp pada harga
            System.out.print("_");
        }

        System.out.println(); //print di baris baru untuk mencetak judul table
        System.out.printf("|%-" + (minLenColumn[0] + 2) + "s", "ID Produk");
        System.out.printf("|%-" + (minLenColumn[1] + 2) + "s", "Brand");
        System.out.printf("|%-" + (minLenColumn[2] + 2) + "s", "Nama");
        System.out.printf("|%-" + (minLenColumn[3] + 2) + "s", "Size");
        System.out.printf("|%-" + (minLenColumn[4] + 2) + "s", "Material");
        System.out.printf("|%-" + (minLenColumn[5] + 2) + "s", "Gender");
        System.out.printf("|%-" + (minLenColumn[6] + 2) + "s", "Sleeve");
        System.out.printf("|%-" + (minLenColumn[7] + 2) + "s", "Color");
        System.out.printf("|%-" + (minLenColumn[8] + 5) + "s|", "Harga");
        System.out.println();
        for (int i = 0; i < totalLenTable; i++) { //print lagi garis bawah header sebagai pemisah dengan data
            System.out.print("-");
        }
        System.out.println(); //print baris baru lagi untuk mencetak setiap baris data
        for (Shirt shirt : shirts) {
            System.out.printf("|%-" + (minLenColumn[0] + 2) + "s", shirt.getIdProduct());
            System.out.printf("|%-" + (minLenColumn[1] + 2) + "s", shirt.getBrand());
            System.out.printf("|%-" + (minLenColumn[2] + 2) + "s", shirt.getName());
            System.out.printf("|%-" + (minLenColumn[3] + 2) + "s", shirt.getSize());
            System.out.printf("|%-" + (minLenColumn[4] + 2) + "s", shirt.getMaterial());
            System.out.printf("|%-" + (minLenColumn[5] + 2) + "s", shirt.getGender());
            System.out.printf("|%-" + (minLenColumn[6] + 2) + "s", shirt.getSleeveType());
            System.out.printf("|%-" + (minLenColumn[7] + 2) + "s", shirt.getColor());
            System.out.printf("|Rp %-" + (minLenColumn[8] + 2) + "s|", shirt.getPrice());
            System.out.println(); //pindah ke baris baru sesudah mencetak semua atribut pada kolomnya
        }
        //print garis bawah table
        for (int i = 0; i < totalLenTable; i++) {
            System.out.print("-");
        }


    }
    public static void main(String[] args) {
        // instansiasi tiga buah kelas cucu
        Shirt shirt1 = new Shirt();
        Shirt shirt2 = new Shirt();
        Shirt shirt3 = new Shirt();

        //shirt product 1
        shirt1.setIdProduct("1MDC1");
        shirt1.setName("Maternal pocket shirt");
        shirt1.setBrand("Maternal");
        shirt1.setPrice(150000);
        shirt1.setSize("M");
        shirt1.setMaterial("Combed 24s");
        shirt1.setGender("Unisex");
        shirt1.setColor("Red");
        shirt1.setSleeveType("Short");

        //shirt product 2
        shirt2.setIdProduct("1MDC2");
        shirt2.setName("Oversized Series");
        shirt2.setBrand("Good bye ex");
        shirt2.setPrice(185000);
        shirt2.setSize("L");
        shirt2.setMaterial("Combed 60s");
        shirt2.setGender("Unisex");
        shirt2.setColor("Black");
        shirt2.setSleeveType("Short Magyar sleeve");

        //shirt product 3
        shirt3.setIdProduct("1MDC3");
        shirt3.setName("Wormhole Essential");
        shirt3.setBrand("Wormhole");
        shirt3.setPrice(320000);
        shirt3.setSize("L");
        shirt3.setMaterial("American Apparel Cotton");
        shirt3.setGender("Male");
        shirt3.setColor("Navy");
        shirt3.setSleeveType("Short");

        //masukan shirt kedalam fungsi print table
        printTable(shirt1,
                    shirt2,
                    shirt3);

    }
}