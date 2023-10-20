#include <iostream>
using namespace std;
int main(){
    //punteros y arreglos
    int arr[]={15,24,30,41,55,66};
    int tam=sizeof(arr)/sizeof(arr[0]);
    //cout<<tam<<endl;
    //cout<<*arr<<endl;//imprime primer valor de el array
    int *ptr=arr; //imprime primer valor del array
    /*
    cout<<*ptr<<endl;
    cout<<&ptr[0]<<endl;//imprime la direccion del primer elemto
    cout<<arr<<endl;//imprime la direccion del primer elemento*/
    /* *ptr=100;*/
    //cout<<*ptr<<endl;//se cambio el valor en esa posicion
    //cout<<*(ptr+0)<<endl;
    //cout<<*(ptr+1)<<endl;
    //cout<<*(ptr+2)<<endl;
    //cout<<*(ptr+5)<<endl;
    //cout<<*(ptr+tam-1)<<endl;
//imprimir los elementos del arreglo usando el puntero ptr
    /*for(int x=0;x<tam;x++){
        cout<<*(ptr+x)<<endl;
    }*/
    /*for(int i=tam-1;i>=0;i--){
        cout<<*(ptr+i)<<endl;
    }*/
    cout <<*ptr<<endl;//imprime el primer elemento en la lista
    ptr++;//se aumenta 1
    cout<<*ptr<<endl;//imprime el siguiente
    ptr++;//se vielve a hacer lo mismo
    cout <<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr++;
    cout <<*ptr<<endl;
    ptr--;
    cout<<*ptr<<endl;
    return 0;
}