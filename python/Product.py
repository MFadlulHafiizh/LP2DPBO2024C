#Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin

# class product menjadi parent class dengan kedudukan tertinggi karena definisi dari sebuah produk itu sangat luas yang nantinya bisa saja mungkin
# akan memiliki produk produk lain diluar lingkup pakaian
class Product:
    __idProduct = ''
    __name = ''
    __brand = ''
    __price = 0

    def __init__(self):
        pass

    def get_idProduct(self):
        return self.__idProduct
    
    def set_idProduct(self, value):
        self.__idProduct = value

    def get_name(self):
        return self.__name
    
    def set_name(self, value):
        self.__name = value

    def get_brand(self):
        return self.__brand
    
    def set_brand(self, value):
        self.__brand = value

    def get_price(self):
        return self.__price
    
    def set_price(self, value):
        self.__price = value