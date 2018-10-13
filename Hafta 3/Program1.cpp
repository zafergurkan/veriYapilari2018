#include <iostream>
using namespace std;
//iki dizinin içeriklerinin karşılaştırılması. 
int* DiziOlustur(int uzunluk){
    int *dizi = new int(uzunluk);
    dizi[4]=100;
    return dizi;
}
bool Karsilastir(int *a, int *b,int ua,int ub){
    
    if (ua!=ub) {
        return false;
    }
    
    for(size_t i = 0; i < ua; i++)
    {
        
        if (a[i]!=b[i]) {
            return false;
        }
        
    }
    a[1]=100;
    return true;

}

int main()
{
    int x[3]={10,15,1};
    int y[3]={10,15,19};
    
    
    if (Karsilastir(x,y,3,3)) {
       cout<<"Diziler Eşit";
    
    }
    else
    {
        cout<<"Diziler Eşit Değil";
    }

    cout<<endl<<x[1];
    
    
    
    
    return 0;
}

