#Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin

from Shirt import Shirt

# menampilkan data dalam format table
def show_table(listShirt):
    min_width_col = [9, 4, 5, 4, 8, 6, 6, 5, 5] #definisikan panjang minimum pada setiap kolom, nilai awal ini berdasarkan panjang karakter pada header
    for x in listShirt: #mencari karakter terpanjang pada setiap kolom
        
        if len(x.get_idProduct()) > min_width_col[0]:
            min_width_col[0] = len(x.get_idProduct())

        if len(x.get_brand()) > min_width_col[1]:
            min_width_col[1] = len(x.get_brand())

        if len(x.get_name()) > min_width_col[2]:
            min_width_col[2] = len(x.get_name())

        if len(x.get_size()) > min_width_col[3]:
            min_width_col[3] = len(x.get_size())

        if len(x.get_material()) > min_width_col[4]:
            min_width_col[4] = len(x.get_material())

        if len(x.get_gender()) > min_width_col[5]:
            min_width_col[5] = len(x.get_gender())

        if len(x.get_sleeveType()) > min_width_col[6]:
            min_width_col[6] = len(x.get_sleeveType())

        if len(x.get_color()) > min_width_col[7]:
            min_width_col[7] = len(x.get_color())

        if (len(str(x.get_price())) + 3) > min_width_col[8]:
            min_width_col[8] = len(str(x.get_price())) + 3

    totalLenTable = sum(min_width_col) + 28 #jumlahkan semua panjang kolom ditambah 28 adalah jumlah simbol | sebagai garis table dan spasi tambahan +1
    for i in range(totalLenTable): #cetak garis atas table
        print("-", end='')
    print()
    header = ["ID Produk", "Brand", "Nama", "Size", "Material", "Gender", "Sleeve", "Color", "Harga"]
    for index, item in enumerate(header): #print header dengan format penambahan garis table dan spasi sesuai karakter terpanjang di kolom nya
        separator = "|" if index == len(header) - 1 else ""
        print("| {:{}}".format(item, min_width_col[index]+1), end=separator)
    print()

    print("-" * totalLenTable)

    for index, item in enumerate(listShirt): #print data baju yang ada pada list dengan format yang sama seperti header
        print("| {:{}}".format(item.get_idProduct(), min_width_col[0]+1), end="|")
        print(" {:{}}".format(item.get_brand(), min_width_col[1]+1), end="|")
        print(" {:{}}".format(item.get_name(), min_width_col[2]+1), end="|")
        print(" {:{}}".format(item.get_size(), min_width_col[3]+1), end="|")
        print(" {:{}}".format(item.get_material(), min_width_col[4]+1), end="|")
        print(" {:{}}".format(item.get_gender(), min_width_col[5]+1), end="|")
        print(" {:{}}".format(item.get_sleeveType(), min_width_col[6]+1), end="|")
        print(" {:{}}".format(item.get_color(), min_width_col[7]+1), end="|")
        print(" {:{}}".format(str(item.get_price()), min_width_col[8]+1), end="|\n")


#main start
listShirt = []
n = int(input("Masukan jumlah data yang ingin diinputkan:"))
while n < 3: #jumlah baju yang diinputkan minimal 3 data jika tidak maka koreksi inputan
  n = int(input("Jumlah minimal data yang diinputkan 3, silahkan inputkan ulang jumlah:"))
for i in range(n):
    newShirt = Shirt() #instansiasi dan lakukan input pada setiap atribut objek
    print("Masukan data ke ",i+1,":")
    newShirt.set_idProduct(input("Masukan ID Produk: "))

    newShirt.set_name(input("Masukan nama produk: "))

    newShirt.set_brand(input("Masukan brand produk: "))

    newShirt.set_price(input("Masukan harga produk: "))

    newShirt.set_size(input("Masukan ukuran: "))

    newShirt.set_material(input("Masukan bahan: "))

    newShirt.set_gender(input("Masukan jenis peruntukan gender: "))

    newShirt.set_color(input("Masukan warna : "))

    newShirt.set_sleeveType(input("Jenis Sleeve: "))
    listShirt.append(newShirt) #masukan objek kedalam array
    print()

show_table(listShirt) #tampilkan semua data dalam array ke format table
 