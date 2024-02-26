#Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin

# class clothing merupakan anak dari sebuah produk karena secara posisi nya memang pakaian adalah sebuah "benda" sama seperti produk.
# lalu menjadi posisi anak pertama dari produk karena bila dibandingkan dengan Shirt cakupan arti clothing atau pakaian itu lebih luas
# dan shirt atau baju itu juga merupakan salah satu dari jenis pakaian yang nantinya bisa berkembang lagi mungkin seperti adanya class Dress
# atau Pants dan lain lain

from Product import Product
class Clothing(Product):
    __size = ''
    __material = ''
    __gender = ''

    def __init__(self):
        pass

    def get_size(self):
        return self.__size
    
    def set_size(self, value):
        self.__size = value
    
    def get_material(self):
        return self.__material
    
    def set_material(self, value):
        self.__material = value

    def get_gender(self):
        return self.__gender
    
    def set_gender(self, value):
        self.__gender = value