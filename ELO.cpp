#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main (){
//semilla random  
    srand(time(NULL));
//declaracion de variables
    int culpable, arma, location, aux, memoria, tiempo;
    bool continuar = true;
//inicialozacion de mapas    
    char tutorial [6][18]{{"                 "},{" +----+   +----+ "},{" |    |---|????| "},{" |  I |---|    | "},{" +----+   +----+ "},{"                 "}};
    int tutorialAncho = sizeof(tutorial) / sizeof(tutorial[0]);
    int tutorialAlto = sizeof(tutorial[0]) / sizeof(tutorial[0][0]);
    
    char mapa[16][27]{{"                          "},{" +----+   +----+   +----+ "},{" |    |---|    |---|    | "},{" |    |---|    |---|    | "},{" +----+   +----+   +----+ "},{"  | |       | |      | |  "},{" +----+   +----+     | |  "},{" |    |---|    |-----+ |  "},{" |    |---|    |-------+  "},{" +----+   +----+          "},{"            | |           "},{" +----------------------+ "},{" |                      | "},{" |                      | "},{" +----------------------+ "},{"                          "}};
    int mapaAncho = sizeof(mapa) / sizeof(mapa[0]);
    int mapaAlto = sizeof(mapa[0]) / sizeof(mapa[0][0]);
//inicializacion de apecto aleatorio    
    culpable = rand() % 3;
    arma = rand() % 3;
//inicio de arbol de deciciones    
    location = 0;
    memoria = location;
    tiempo = 0;
    cout<<"dialogo introductorio"<<endl;
//cin>>location;
    do
    {
        //clock sprite sheet
        switch (tiempo)
        {
        case 0:
            cout<<" +-------------+ \n";
            cout<<" |      ^      | \n";
            cout<<" |      |      | \n";
            cout<<" |      ^      | \n";
            cout<<" |      |      | \n";
            cout<<" |      *      | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n";
            break;
        case 1:
            cout<<" +-------------+ \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |      ^      | \n";
            cout<<" |      |      | \n";
            cout<<" |      *----->| \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n";
            break;
        case 2:
            cout<<" +-------------+ \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |      ^      | \n";
            cout<<" |      |      | \n";
            cout<<" |      *      | \n";
            cout<<" |      |      | \n";
            cout<<" |      |      | \n";
            cout<<" |      |      | \n";
            cout<<" |      v      | \n";
            cout<<" +-------------+ \n";
            break;
        case 3:
            cout<<" +-------------+ \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |      ^      | \n";
            cout<<" |      |      | \n";
            cout<<" |<-----*      | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n";
            break;
        case 4:
            cout<<" +-------------+ \n";
            cout<<" |      ^      | \n";
            cout<<" |      |      | \n";
            cout<<" |      |      | \n";
            cout<<" |      |      | \n";
            cout<<" |      *-->   | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n";
            break;
        case 5:
            cout<<" +-------------+ \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |      *-->-->| \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n";
            break;
        case 6:
            cout<<" +-------------+ \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |      *-->   | \n";
            cout<<" |      |      | \n";
            cout<<" |      |      | \n";
            cout<<" |      |      | \n";
            cout<<" |      v      | \n";
            cout<<" +-------------+ \n";
            break;
        case 7:
            cout<<" +-------------+ \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |<-----*-->   | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n";
            break;
        case 8:
            cout<<" +-------------+ \n";
            cout<<" |      ^      | \n";
            cout<<" |      |      | \n";
            cout<<" |      |      | \n";
            cout<<" |      |      | \n";
            cout<<" |      *      | \n";
            cout<<" |      |      | \n";
            cout<<" |      v      | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n";
            break;
        case 9:
            cout<<" +-------------+ \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |      *----->| \n";
            cout<<" |      |      | \n";
            cout<<" |      v      | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n";
            break;
        case 10:
            cout<<" +-------------+ \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |      *      | \n";
            cout<<" |      |      | \n";
            cout<<" |      v      | \n";
            cout<<" |      |      | \n";
            cout<<" |      v      | \n";
            cout<<" +-------------+ \n";
            break;
        case 11:
            cout<<" +-------------+ \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |<-----*      | \n";
            cout<<" |      |      | \n";
            cout<<" |      v      | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n";
            break;
         case 12:
            cout<<" +-------------+ \n";
            cout<<" |      ^      | \n";
            cout<<" |      |      | \n";
            cout<<" |      |      | \n";
            cout<<" |      |      | \n";
            cout<<" |   <--*      | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n"; 
            break;
        case 13:
            cout<<" +-------------+ \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |   <--*----->| \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n";
            break;
        case 14:
            cout<<" +-------------+ \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |   <--*      | \n";
            cout<<" |      |      | \n";
            cout<<" |      |      | \n";
            cout<<" |      |      | \n";
            cout<<" |      v      | \n";
            cout<<" +-------------+ \n";
            break;
        case 15:
            cout<<" +-------------+ \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |<--<--*      | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n";
            break;
        case 16:
            cout<<" +-------------+ \n";
            cout<<" |      ^      | \n";
            cout<<" |      |      | \n";
            cout<<" |      ^      | \n";
            cout<<" |      |      | \n";
            cout<<" |      *      | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" |             | \n";
            cout<<" +-------------+ \n";
            break;
        default:
            break;
        }
        switch (location)
        {
        case 1:
            continuar = false;
            break;
        case 0:
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
    














    
    return 0;
}     
//funcion print mapa
/*
    for (int i = 0; i < mapaAncho; i++){
        for (int j = 0; j < mapaAlto; j++){
            cout<<mapa[i][j];
        }
        cout<<endl;
    }
*/