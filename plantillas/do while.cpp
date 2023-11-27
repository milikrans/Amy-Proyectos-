#include <iostream>
using namespace std;
int main(){
    char loop = 'u';
    do
    {
        cout<<"sabias que ya estas dentro de un loop? (s/n)"<<endl;
        cin>>loop;
    } while (loop!='s');
    
    cout<<"oh..."<<endl<<"bueno adios";

    return 0;
}
