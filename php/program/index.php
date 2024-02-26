<?php
/*Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin */
require("Shirt.php");

//instansiasi minimal 3 objek cucu
 $shirt1 = new Shirt();
 $shirt2 = new Shirt();
 $shirt3 = new Shirt();

 //shirt product 1
 $shirt1->setIdProduct("1MDC1");
 $shirt1->setName("Maternal pocket shirt");
 $shirt1->setBrand("Maternal");
 $shirt1->setPrice(150000);
 $shirt1->setSize("M");
 $shirt1->setMaterial("Combed 24s");
 $shirt1->setGender("Unisex");
 $shirt1->setColor("Red");
 $shirt1->setSleeveType("Short");

 //shirt product 2
 $shirt2->setIdProduct("1MDC2");
 $shirt2->setName("Oversized Series");
 $shirt2->setBrand("Good bye ex");
 $shirt2->setPrice(185000);
 $shirt2->setSize("L");
 $shirt2->setMaterial("Combed 60s");
 $shirt2->setGender("Unisex");
 $shirt2->setColor("Black");
 $shirt2->setSleeveType("Short Magyar sleeve");

 //shirt product 3
 $shirt3->setIdProduct("1MDC3");
 $shirt3->setName("Wormhole Essential");
 $shirt3->setBrand("Wormhole");
 $shirt3->setPrice(320000);
 $shirt3->setSize("L");
 $shirt3->setMaterial("American Apparel Cotton");
 $shirt3->setGender("Male");
 $shirt3->setColor("Navy");
 $shirt3->setSleeveType("Short");

//  masukan semua objek pada array
 $dataShirt = [$shirt1, $shirt2, $shirt3];

 ?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Data Produk Baju</title>
</head>
<body>
    <table border="1" cellspacing="0" cellpadding="5">
        <thead>
            <tr>
                <th>No</th>
                <th>ID Product</th>
                <th>Brand</th>
                <th>Nama</th>
                <th>Size</th>
                <th>Material</th>
                <th>Gender</th>
                <th>Sleeve</th>
                <th>Color</th>
                <th>Harga</th>
            </tr>
        </thead>
        <tbody>
            <?php
            // loop array dan tampilkan setiap objek pada kolom tabel
            foreach ($dataShirt as $key => $value) { ?>
                <tr>
                    <td><?= $key+1 ?></td>
                    <td><?= $value->getIdProduct() ?></td>
                    <td><?= $value->getBrand() ?></td>
                    <td><?= $value->getName() ?></td>
                    <td><?= $value->getSize() ?></td>
                    <td><?= $value->getMaterial() ?></td>
                    <td><?= $value->getGender() ?></td>
                    <td><?= $value->getSleeveType() ?></td>
                    <td><?= $value->getColor() ?></td>
                    <td>Rp <?= number_format($value->getPrice(),2,',','.') ?></td>
                </tr>
            <?php }
            ?>
        </tbody>
    </table>
</body>
</html>