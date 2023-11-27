#include <iostream>
using namespace std;
int main (){
    int cuenta=0;
    cout<<"indique hasta que numero desea contar"<<endl;
    cin>>cuenta;
    cout<<"contando"<<endl;
    for(int i=0; i<cuenta;i++){
        cout<<i+1<<endl;
    }
    cout<<"terminamos";
    return 0;
}