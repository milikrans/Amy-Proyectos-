#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
    //semilla random  
    srand(time(NULL));
    //declaracion de variables
    int culpable, arma, location, aux, memoria, tiempo;
    char
    bool continuar = true;
    string basura ="basura";
    //inicialozacion de mapas    
    char tutorial [6][18]{{"                 "},{" +----+   +----+ "},{" |    |---|????| "},{" |  I |---|    | "},{" +----+   +----+ "},{"                 "}};
    int tutorialAncho = sizeof(tutorial) / sizeof(tutorial[0]);
    int tutorialAlto = sizeof(tutorial[0]) / sizeof(tutorial[0][0]);
    
    char mapa[16][27]{{"                          "},{" +----+   +----+   +----+ "},{" |h(1)|---|t(2)|---|c(3)| "},{" |    |---|    |---|    | "},{" +----+   +----+   +----+ "},{"  | |       | |      | |  "},{" +----+   +----+     | |  "},{" |d(4)|---|v(5)|-----+ |  "},{" |    |---|  I |-------+  "},{" +----+   +----+          "},{"            | |           "},{" +----------------------+ "},{" |          j(5)         | "},{" |                      | "},{" +----------------------+ "},{"                          "}};
    int mapaAncho = sizeof(mapa) / sizeof(mapa[0]);
    int mapaAlto = sizeof(mapa[0]) / sizeof(mapa[0][0]);
    //inicializacion de apecto aleatorio    
    culpable = rand() % 3;
    arma = rand() % 3;
    //inicio de arbol de deciciones    
    location = 0;
    memoria = location;
    tiempo = 0;
    //inicio del tutorial, menu central
    cout<<"dialogo introductorio (1,2,2,3,4)"<<endl;
    cin>>location;
    cin.ignore(1000, '\n');

  
    //tutorial
    do{
        //sistema de tiempo
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
        //map printing tutorial
        for (int i = 0; i < tutorialAncho; i++){
            for (int j = 0; j < tutorialAlto; j++){
                cout<<tutorial[i][j];
            }
            cout<<endl;
        }   
        //opciones
        switch (location)
        {
        case 1:
            memoria=location;
            cout<<"variacion cinematica 1"<<endl;
            tiempo++;
            tutorial[3][4]=' ';
            tutorial[3][13]='I';
            location=5;
            break;
        case 2:
            memoria=location;
            cout<<"variacion cinematica 2"<<endl;
            tiempo++;
            tutorial[3][4]=' ';
            tutorial[3][13]='I';
            location=5;
            break;
        case 3:
            memoria=location;
            cout<<"variacion cinematica 3"<<endl;
            tiempo++;
            tutorial[3][4]=' ';
            tutorial[3][13]='I';
            location=5;
            break;
        case 4:
            memoria=location;
            cout<<"variacion cinematica 4"<<endl;
            tiempo++;
            tutorial[3][4]=' ';
            tutorial[3][13]='I';
            location=5;
            break;
        case 5:
            memoria=location;
            cout<<"continuacion cinematica"<<endl;
            
            getline (cin, basura);
            cin.ignore(1000, '\n');

            cout<<"final cinematica"<<endl;

            tiempo=0;
            continuar=false;
            break;
        default:
            cout<<"seleccion invalida"<<endl;
            location=memoria;
            break;
        }
        system ("cls");
    } while (continuar == true);
    cout<<"final tutorial";
    location = 0;
    //actual game
    system("cls");
    cout<<"inicio de juego 1,2,3,4,5,6";
    cin>>location;
    cin.ignore(1000, '\n');
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
        //map printing mapa
        for (int i = 0; i < mapaAncho; i++){
        for (int j = 0; j < mapaAlto; j++){
            cout<<mapa[i][j];
        }
        cout<<endl;
    }
        //dialogue?    
        switch (location)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            if(location != 5){
                
            }else{

                cout<<"esperas en el vestibulo"
                cin>>location;
                cin.ignore(1000, '\n');
            }
            cout
            break;
        case 6:
            break;    
        default:
            cout<<"Eso no es una opcion valida"<<endl;
            location=memoria;
            break;
        }
    } while (continuar == true);
    
return 0;
}     
/*funcion print mapa
    for (int i = 0; i < mapaAncho; i++){
        for (int j = 0; j < mapaAlto; j++){
            cout<<mapa[i][j];
        }
        cout<<endl;
    }
*/