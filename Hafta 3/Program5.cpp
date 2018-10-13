#include <iostream>
#include <ctime>
using namespace std;
//fiboancci serisinin algoritmasını gösteren program. seri kendinden önceki 2 rakamın toplamından oluşan rakamlar serisi.

int fibo(int sayi){
    int t1 = 0,t2 = 1,yedek=0;

    cout <<"Fibonacci Seri : "<<t1<<", "<<t2<<", ";

    yedek=t1+t2;

    
    while(yedek<=sayi){
        cout<<yedek<<", ";
        t1=t2;
        t2=yedek;
        yedek=t1+t2;
        /* code */
    }
    
   
    
    
}
int main()
{
    int sayi;
    cout<<"Pozitif sayi giriniz :";
    cin>> sayi;
    fibo(sayi);


}