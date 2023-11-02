#include <iostream>
using namespace std;
int main (){
    string continuar="hola";
    cout<<"hola"<<endl<<"si quieres continuar presiona s (minuscula)"<<endl;
    cin>> continuar;
    while (continuar=="s")
    {
        cout<<"no hay mucho que hacer aqui..."<<endl<<"si aun quieres contunuar presiona s (minuscula)"<<endl;
        cin>>continuar;
    }
    cout<<"bueno adios"<<endl;
    return 0;
 }
