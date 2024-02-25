#Saya Muhammad Muhammad Fadlul Hafiizh [2209889] mengerjakan soal latprak_2 dalam mata kuliah DPBO.
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan, Aamiin

# class shirt menjadi kelas cucu, dimana ia merupakan keturunan yang memiliki atribut lebih spesifik seperti nama nya baju itu adalah sebuah pakaian
# yang dimana sebuah pakaian itu bisa menjadi salah satu produk sehingga artibut dari kelas product dan clothing pasti dimiliki oleh shirt ini
from Clothing import Clothing
class Shirt(Clothing):
    __color = ''
    __sleeveType = ''

    def __init__(self):
        pass

    def get_color(self):
        return self.__color
    
    def set_color(self, value):
        self.__color = value

    def get_sleeveType(self):
        return self.__sleeveType
    
    def set_sleeveType(self, value):
        self.__sleeveType = value

