#include <iostream>
#include <ctime>//time fonksiyonunu kullanmak için eklendi.
using namespace std;

//iki boyutlu dizilerin gösterimi ve kullanımına ilişkin bir örnek.
const int sutun=3;
void f(int matris[][sutun],int satir){
    
    for(size_t i = 0; i < satir; i++){
        
        for(size_t j = 0; j < sutun; j++)
        {
            cout<<matris[i][j]<<" " ;
        }
        cout<<endl;
        

    }

}
int main()
{
    srand(time(NULL));//bu farklı sayılar üretmesi için gerekli 
    int matris[3][sutun];
       for(size_t i = 0; i < 3; i++){
        
        for(size_t j = 0; j < 3; j++)
        {
            matris[i][j]=rand()%100+1;
        }
  
        

    }
    f(matris,3);
    cout<<matris[0]<<endl;
    cout<<matris;
    int *p;
    p=matris[0];
    cout<<matris[0][0]<<endl;
    cout<<*p;
 
    return 0;
}