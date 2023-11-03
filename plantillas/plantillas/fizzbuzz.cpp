#include <iostream>
using namespace std;
int main(){
    int i=0;
    int duracion=-1;
    int factor1=-1;
    int factor2=-1;
    int j=i+1;
    cout<<"hasta que numero quieres jugar FizzBuzz?\n";
    cin>>duracion;
    cout<<"que numero es fizz?\n";
    cin>>factor1;
    cout<<"que numero es buzz?\n";
    cin>>factor2;
    cout<<"\n\n";
    for (i = 0; i < duracion; i++)
    {  
        if(j % factor2 == 0 && j % factor1 == 0 ){
            cout<<"FizzBuzz\n";
        }else{
            if (j%factor1==0){
                cout<<"Fizz\n";
            }else{
                if (j%factor2==0)
                {
                    cout<<"Buzz\n";
                }else{
                    cout<<j<<endl;
                }
            }
        }
        j++;
    }
    return 0;
}
//desde ahorita digo que estaria muy gracioso que fizzbuzz (lo que es este programa) que es una prueba de programacion
//relativamente famosa sea nuestro proyercto jjsjsjs