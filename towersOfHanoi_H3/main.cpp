#include <iostream>
using namespace std;
//öz yieneleme konusuna örnek.
void kuleHanoi(int disk,char kule1,char kule2,char kule3){
    
    if (disk!=0) {
        kuleHanoi(disk-1,kule1,kule3,kule2);
        cout<<kule1<<" ---> "<<kule3<<endl;
        kuleHanoi(disk-1,kule2,kule1,kule3);

    }
    
}

int main(int argc, char const *argv[])
{
    int x;
    cout<<"Disk sayisini giriniz : ";
    cin>>x;
    kuleHanoi(x,'A','B','C');
    
    return 0;
}
