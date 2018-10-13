#include <iostream>
using namespace std;
//pointer altında pointer örneği
class Kisi{
private:
    string isim;
public:
    Kisi(string ism){
            isim=ism;
    }

    friend ostream& operator<<(ostream& ekran, Kisi &sag){//operatör tanımlama bir çok örnekte kullanılacak.
        ekran<<sag.isim;
        return ekran;
    }
    

};
void  Yoket(Kisi **kisiler,int kisiSayisi)//dizinin kendisine delete dediğimizde (satır 46) bellekten sadece diziye ayrılan alan silinir. Bu fonksiyon ile diiz içerisinde oluşan belleklerde silinir.
{
 for(size_t i = 0; i < kisiSayisi; i++)
    {
        delete kisiler[i];//dizinin içindeki değerleri iade eder.
    }
}
void Yazdir(Kisi **kisiler,int kisiSayisi){
    
    for(size_t i = 0; i < kisiSayisi; i++)
    {
        cout<<*kisiler[i]<<endl;//friend ile operatör tanıtma gerekir.
    }
    
}


int main()
{
    Kisi **kisiler;
    kisiler=new Kisi*[3];

    kisiler[0]=new Kisi("Ahmet");
    kisiler[1]=new Kisi("Mehmet");
    kisiler[2]=new Kisi("Ayse");
    Yazdir(kisiler,3);
    Yoket(kisiler,3);
    delete [] kisiler;
 
    return 0;
}