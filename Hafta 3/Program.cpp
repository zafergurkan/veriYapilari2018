#include <iostream>
using namespace std;

//tanımlı bir diziyi pointer a aktarma ve yazdırma.

int main()
{
    int a[3]={18,35,67};
    int *p;

    p=a;
    p++;
    cout<<*p;
    return 0;
}
