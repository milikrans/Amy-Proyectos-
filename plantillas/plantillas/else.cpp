#include <iostream>
using namespace std;
int main(){
    //esta es solo la estructira basica de if/else con una prueba para corroborar que la estructura basica funciona
    int i=0;
    cout<<"si quiere traducir al español presione 1"<<endl<<"si no presione cualquier tecla"<<endl;
    cin>>i;
    if(i==1){
        cout<<"hola mundo"<<endl;
    }else{
        cout<<"hello world"<<endl;
    }
    cout<<"bye";
    return 0;
}