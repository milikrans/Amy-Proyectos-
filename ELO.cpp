#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main (){
    srand(time(NULL));
    int culpable, arma, location, aux, memoria, tiempo;
    bool continuar = true;
    char mapa[16][27]{{"                          "},{" +----+   +----+   +----+ "},{" |    |---|    |---|    | "},{" |    |---|    |---|    | "},{" +----+   +----+   +----+ "},{"  | |       | |      | |  "},{" +----+   +----+     | |  "},{" |    |---|    |-----+ |  "},{" |    |---|    |-------+  "},{" +----+   +----+          "},{"            | |           "},{" +----------------------+ "},{" |                      | "},{" |                      | "},{" +----------------------+ "},{"                          "}};
    int mapaAncho = sizeof(mapa) / sizeof(mapa[0]);
    int mapaAlto = sizeof(mapa[0]) / sizeof(mapa[0][0]);
    
    culpable = rand() % 3;
    arma = rand() % 3;
    location = 0;
    memoria = location;
    cout<<"dialogo introductorio"<<endl;
    cin>>location;
    do
    {
        switch (location)
        {
        case 1:
            continuar = false;
            break;
        case 2:
            memoria=location;
            cout<<"dialogo vestibulo"<<endl;
            cin>>location;
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            cout<<"Eso no es una opcion valida"<<endl;
            location=memoria;
            break;
        }
    } while (continuar == true);
    














    char mapa[16][27]{{"                          "},{" +----+   +----+   +----+ "},{" |    |---|    |---|    | "},{" |    |---|    |---|    | "},{" +----+   +----+   +----+ "},{"  | |       | |      | |  "},{" +----+   +----+     | |  "},{" |    |---|    |-----+ |  "},{" |    |---|    |-------+  "},{" +----+   +----+          "},{"            | |           "},{" +----------------------+ "},{" |                      | "},{" |                      | "},{" +----------------------+ "},{"                          "}};
    int mapaAncho = sizeof(mapa)/sizeof(mapa[0]);
    int mapaAlto =  sizeof(mapa[0])/sizeof(mapa[0][0]);
    return 0;
}     
//funcion print mapa+
/*
    for (int i = 0; i < mapaAncho; i++){
        for (int j = 0; j < mapaAlto; j++){
            cout<<mapa[i][j];
        }
        cout<<endl;
    }
*/