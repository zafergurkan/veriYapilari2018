#ifndef ArrayList_HPP
#define ArrayList_HPP

#include <iostream>

using namespace std;

template<typename Object>

class ArrayList
{
private:
    Object *items;
    int size;
    int capacity;
    void reserve(int newCapacity){
        
        if (capacity>=newCapacity) {
            return;
        }
        Object *tmp = new Object[newCapacity];
        
        for(size_t i = 0; i < size; i++)
        {
            /tmp[i]=items[i];//dizi kopyalama yapımı.
        }
        
        if (items!=NULL) {
            /* code */
            delete [] items;
        }
        
        item=tmp;

        
    }
    /* data */
public:
    ArrayList(){
        items=NULL;
        size=0;
        capacity=0;
    }
    int Count()const{//get fonksiyonudur. Sadece readonly.
        return size;
    }
    bool isEmpty()const{
        return size==0;
    }
    void add(const Object& item){//referans ile çağırma anlamına gelir-> &
        add(size,item);
    }
    void add(int index,const Object& item){
        //if(index<0||index>size) throw HATA [gelecek dönemin konusu.]
        
        if (size>=capacity) 
            {
        reserve(max(1,2*capacity));    
            }
        
        for(size_t i = size-1; i >=index ; i--)
        {
            items[i+1]=items[i];
            /* code */
        }
        items[index]=item;
        size++;
    }

    const Object& first()const{
        //if(isEmpty()) throw ELEMANYOK
        return items[0];
    }
    const Object& last()const{
        //if(isEmpty()) throw ELEMANYOK
        return items[size-1]];
    }

    

};

#endif
