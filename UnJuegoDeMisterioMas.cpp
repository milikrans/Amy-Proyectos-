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
    int culpable, arma, location, lugarInterno, memoria, tiempo, conjeturaCulpable, conjeturaMetodo, conjeturaArma;
    bool continuar = true;
    string elCuerpoTiene, verdadOMentiraViuda, verdadOMentiraCocinero, verdadOMentiraJardinera, lasMarcasIndican;  
    string basura ="basura";

    //inicialozacion de mapas    
    char tutorial [6][18]{{"                 "},{" +----+   +----+ "},{" |    |---|????| "},{" |  I |---|    | "},{" +----+   +----+ "},{"                 "}};
    int tutorialAncho = sizeof(tutorial) / sizeof(tutorial[0]);
    int tutorialAlto = sizeof(tutorial[0]) / sizeof(tutorial[0][0]);
    
    char mapa[16][27]{{"                          "},{" +----+   +----+   +----+ "},{" |h   |---|t   |---|c   | "},{" |    |---|    |---|    | "},{" +----+   +----+   +----+ "},{"  | |       | |      | |  "},{" +----+   +----+     | |  "},{" |d   |---|v   |-----+ |  "},{" |    |---|  I |-------+  "},{" +----+   +----+          "},{"            | |           "},{" +----------------------+ "},{" |          j           | "},{" |                      | "},{" +----------------------+ "},{"                          "}};
    int mapaAncho = sizeof(mapa) / sizeof(mapa[0]);
    int mapaAlto = sizeof(mapa[0]) / sizeof(mapa[0][0]);

    //inicializacion de apecto aleatorio    
    culpable = rand() % 3;
    arma = rand() % 3;
    //checar cuerpo el cuerpo tiene
    switch (arma)
    {
    case 0:
        elCuerpoTiene = " varias apunhaladas";
        break;

    case 1:
        elCuerpoTiene = " un gran golpe en la cabeza";
        break;

    case 2:
        elCuerpoTiene = " falta de oxigeno";
        break;

    default:
        cout<<"oh oh algo salio terriblemente mal, por favor reinicia el programa";
        break;

    }
    switch (culpable)
    {
    case 0:
        verdadOMentiraViuda="me puse a... cocinar el almuerzo para mi esposo sin embargo para cuando fui a llevarselo...";
        verdadOMentiraCocinero="empeze a limpiar la cocina";
        verdadOMentiraJardinera="de las flores de la senhora Hudson";
        break;

    case 1:
        verdadOMentiraViuda="me puse a... dormir la siesta... antes del almuerzo, no dormi bien esta noche... pero cuando me desperte...";
        verdadOMentiraCocinero="prepare el almuerzo y se lo servi a la senhora Hudson";
        verdadOMentiraJardinera="de las flores de la senhora Hudson";
        break;

    case 2:
        verdadOMentiraViuda="me puse a... dormir la siesta... antes del almuerzo, no dormi bien esta noche... pero cuando me desperte...";
        verdadOMentiraCocinero="empeze a limpiar la cocina";
        verdadOMentiraJardinera="de las hortalizas que usa el cocinero, asi no tiene que estar llendo al mercado";
    default:
        break;

    }
    //inicio de arbol de deciciones    
    location = 0;
    memoria = location;
    tiempo = 0;
    //menu
    do{
        cout<<"un misterioso asesinato"<<endl<<endl;
        cout<<"(1) empezar"<<endl;
        cout<<"(2) como jugar?"<<endl;
        cout<<"(3) creditos"<<endl;
        cout<<"(4) salir"<<endl;
        cin>>location;
        cin.ignore(1000, '\n');
        switch (location)
        {
        case 1:
            continuar= false;
            break;

        case 2:
            cout<<"usa los numeros para seleccionar una opcion de las cuales se te presentan y luego presiona enter para mandarla"<<endl;
            break;

        case 3:
            cout<<"juego realizado por Amy Cardenas Silva"<<endl;
            break;

        case 4:
            return 0;
            break;

        default:
            cout<<"seleccion invalida"<<endl;
            break;

        }
    }while(continuar == true);
    location=0;
    memoria=location;
    tiempo=0;
    continuar=true;
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
        case 0:
            memoria=location;
            //inicio del tutorial, menu central
            cout<<"Despiertas en una habitacion oscura, frente a ti hay cuatro objetos"<<endl;
            cout<<"(1) una linterna"<<endl;
            cout<<"(2) una jarro con luciernagas"<<endl;
            cout<<"(3) un farol"<<endl;
            cout<<"(4) una antorcha"<<endl;
            cout<<"(0) salir del juego"<<endl;
            cout<<"ingresa el numero del cual quieres agarrar"<<endl;

            //decide cual tomaste
            cin>>location;
            cin.ignore(1000,'\n');
            if (location == 5 || location == 6)
            {
                location = 7;
            }

            if (location == 0)
            {
               location = 6; 
            }
            break;

        case 1:
            memoria=location;
            cout<<"tomas la linterna,";
            cout<<"su luz te muestra un pasillo el cual una fuerza fuera de tu comprension te hace seguir"<<endl;
            tiempo++;
            tutorial[3][4]=' ';
            tutorial[3][13]='I';
            location=5;
            break;

        case 2:
            memoria=location;
            cout<<"tomas el jarro con luciernagas,";
            cout<<"su luz te muestra un pasillo el cual una fuerza fuera de tu comprension te hace seguir"<<endl;
            tiempo++;
            tutorial[3][4]=' ';
            tutorial[3][13]='I';
            location=5;
            break;

        case 3:
            memoria=location;
            cout<<"tomas el farol,";
            cout<<"su luz te muestra un pasillo el cual una fuerza fuera de tu comprension te hace seguir"<<endl;
            tutorial[3][4]=' ';
            tutorial[3][13]='I';
            location=5;
            break;

        case 4:
            memoria=location;
            cout<<"tomas la antorcha,";
            cout<<"su luz te muestra un pasillo el cual una fuerza fuera de tu comprension te hace seguir"<<endl;
            tiempo++;
            tutorial[3][4]=' ';
            tutorial[3][13]='I';
            location=5;
            break;

        case 5:
            memoria=location;
            cout<<"pronto llegas al otro lado del pasillo solo para darte cueta que haz llegado a otra habitacion aparentemente vacia"<<endl;
            cout<<"sin embargo pronto una voz se hace sonar en la habitacion"<<endl;
            cout<<"-detective- dice la misteriosa voz, la cual es dificil decifrar de donde viene o a quien pertenece -cuales son tus intenciones aqui?"<<endl;

            getline (cin,basura);

            cout<<" -mhhh...- la voz parece tener dificultad para oirte -parece que tu voz se ah atrofiado,"<<endl;
            cout<<"intenta solo usar los numeros en pantalla para comunicarte, ahora ve a hacer tu trabajo, recueda que tu tiempo es limitado- "<<endl;
            cout<<" -te vere pronto investigador- ."<<endl<<endl<<endl;
            continuar=false;
            break;

        case 6:
            return 0;

            break;

        default:
            cout<<"seleccion invalida"<<endl;
            location=memoria;
            break;
        }

    } while (continuar == true);
    cout<<"una luz cegadora inunda tu vision y pronto te encuentras en el vestibulo de una casa que no es la tuya"<<endl;
    cout<<"???:investigador?, investigador?"<<endl;
    cout<<"una persona que parece ser una criada esta arrodillada frente a ti poco a poco empiezas a volver a ganar conciencia y memoria."<<endl;
    cout<<"recuerdas varias cosas, hace unas horas hubo un asesinato, un contacto anonimo te pidio que vinieses a investigar, llegaste a la casa"<<endl;
    cout<<"viste el cadaver del senhor Hudson y luego... todo se volvio negro"<<endl;
    cout<<"sin embargo tienes la certeza de que la policia esta en camino y es muy probable que esten aqui en unas horas"<<endl;
    cout<<"a juzgar por la zona probablemente tienes hasta que sean las 12 en punto"<<endl;
    cout<<"criada: esta bien?"<<endl;
    cout<<"logras asentir con la cabeza antes de que la criada te ayude a ponerte de pie"<<endl;
    cout<<"criada: s-supongo que deberia de introducirle a la gente de la casa"<<endl;
    cout<<"la criada se mueve un poco dejandote ver la habitacion donde te encuentras, en una serie de sillones hay tres figuras que empiezan"<<endl;
    cout<<"ser presentadas por la criada, ademas parece haber un bulto envuelto en una sabana en el centro de la habitacion... seguramente el"<<endl;
    cout<<"cuerpo del senhor Hudson. primero te presenta a una mujer vestida de negro"<<endl;
    cout<<"criada: primero esta la senhora Hudson, ella es la.... era la esposa del dif-"<<endl;
    cout<<"viuda: si si creo que ya entendio que mi esposo es la razon por la cual esta aqui"<<endl;
    cout<<"la viuda del asesinato que has venido a investigar no parece muy... feliz"<<endl;
    cout<<"acto seguido la criada te presenta a un hombre alto que no parece tener muchos amigos, sin embargo se ve... tranquilo?"<<endl;
    cout<<"criada: el es el cocinero, no habla mucho, pero es un buen cocinero"<<endl;
    cout<<"cocinero: ..."<<endl;
    cout<<"por ultimo la creiada te presenta a una ultima figura, va vestida con un overol, un sombrero de ala ancha para el sol y parece algo"<<endl; 
    cout<<"impaciente"<<endl;
    cout<<"criada: ella es la jardinera... realmente no se mucho sobre ella... pero mantiene el jardin bastante limpio"<<endl;
    cout<<"jardinera: p-podemos solo apurarnos y terminar con esto?"<<endl;
    cout<<"la criada vuelve a tu lado y en voz baja, como intentando evitar que los demás la escuchen dice"<<endl;
    cout<<"criada: bueno ellos son todos los que estaban cuando el senhor Hudson fue asesinado... todos tienen historias diferentes..."<<endl;
    cout<<"criada: buena suerte investigador"<<endl;
    location=0;
    //juego
    continuar=true;
    do
    {
        //clock sprite sheet
        switch (tiempo){
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
        if(tiempo==16){
            location=16;
        }
            
        switch (location){
        case 0:
            memoria=location;
            cout<<"estas en el vestibulo, frente a ti estan sentados: la viuda, el cocinero y la jardinera. detras de ellos, en una esquina,"<<endl;
            cout<<"esta el cuerpo del senhor Hudson envuelto en una sabana."<<endl;
            cout<<"conectando a esta sala hay 4 pasillos cada uno de ellos llevandote a diferentes salas de esta casa"<<endl;
            cout<<"(1) interrogar a alguno de los sospechosos"<<endl;
            cout<<"(2) inspeccionar el cadaver del senhor Hudson"<<endl;
            cout<<"(3) ir al taller de costura"<<endl;
            cout<<"(4) ir a la cocina"<<endl;
            cout<<"(5) ir al dormitorio del cocinero"<<endl;
            cout<<"(6) ir al jardin"<<endl;
            cout<<"(0) salir del juego"<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno)
            {
            case 1:
                location=1;
                break;
            case 2:
                tiempo++;
                location=2;
                break;
            case 3:
                tiempo++;
                location=3;
                mapa[8][13]=' ';
                mapa[3][13]='I';
                break;
            case 4:
                tiempo++;
                location=4;
                mapa[8][13]=' ';
                mapa[3][22]='I';
                break;
            case 5:
                tiempo++;
                location=5;
                mapa[8][13]=' ';
                mapa[8][4]='I';
                break;
            case 6:
                tiempo++;
                location=6;
                mapa[8][13]=' ';
                mapa[13][22]='I';
                break;
            case 0:
                return 0;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 1:
            memoria=location;
            cout<<"te acercas a los sillones de la sala, los sospechosos te miran conforme te acercas. te sientas frente a ellos y..."<<endl;
            cout<<"viuda: necesita algo investigador?"<<endl;
            cout<<"cocinero: ..."<<endl;
            cout<<"jardinera: p-pasa algo malo???"<<endl<<endl<<endl;
            cout<<"(1) interrogar a la viuda"<<endl;
            cout<<"(2) interrogar al cocinero"<<endl;
            cout<<"(3) interrogar a la jardinera"<<endl;
            cout<<"(4) acusar a alguno de los sospechosos (esta accion es irrebersible)"<<endl;
            cout<<"(0) salir del juego"<<endl;

            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno)
            {
            case 1:
                tiempo++;
                location=7;
                break;
            case 2:
                tiempo++;
                location=8;
                break;
            case 3:
                tiempo++;
                location=9;
                break;
            case 4:
                tiempo++;
                location=10;
                break;
            case 0:
                return 0;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 2:
            memoria=location;   
            cout<<"te acercas al cuerpo, levantas la sabana que le cubre el rostro y empiezas a examinar el cuerpo"<<endl;
            cout<<"juzgando por las, marcas del cuerpo parece que el senhor Hudson murio debido a"<<elCuerpoTiene<<endl<<endl<<endl;
            cout<<"quieres continuar inspeccionando el cuerpo?"<<endl;
            cout<<"(1) si"<<endl;
            cout<<"(2) no"<<endl;
            cout<<"(0) salir del juego"<<endl;

            cin>>lugarInterno;
            cin.ignore(1000, '\n');

            switch (lugarInterno){
            case 1:
                tiempo++;
                location=11;
                break;
            case 2:
                location=0;
                break;
            case 0:
                return 0;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 3:
            memoria=location;
            cout<<"entras al cuarto de costura, esta adornado con algunos bordados colgados en las paredes, aparentemente realizados por"<<endl;
            cout<<"la senhora Hudson, parece que ella pasa mucho tiempo en esta habitacion, lo unico que salta a la vista son una serie de"<<endl;
            cout<<"almohadas bordadas, bastante densas y una comoda con varios cajones"<<endl<<endl;
            cout<<"(1) investigar la comoda"<<endl;
            cout<<"(2) ir a la habitacion principal"<<endl;
            cout<<"(3) ir a la cocina"<<endl;
            cout<<"(4) ir al vestibulo"<<endl;
            cout<<"(0) salir del juego"<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno){
            case 1:
                tiempo++;
                location=12;
                break;
            case 2:
                tiempo++;
                location=13;
                mapa[3][13]=' ';
                mapa[3][4]='I';
                break;
            case 3:
                tiempo++;
                location=4;
                mapa[3][13]=' ';
                mapa[3][22]='I';
                break;
            case 4:
                tiempo++;
                location=0;
                mapa[3][13]=' ';
                mapa[8][13]='I';
                break;
            case 0:
                return 0;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 4:
            memoria=location;
            cout<<"entras a la cocina, es un lugar que parece mantenerse bastante limpio, parece ser el lugar donde pasa la mayoria del tiempo"<<endl;
            cout<<"el cocinero, sin embargo, a juzgar por las otras habitaciones de la casa el cocinero parece tener un dormitorio en la casa,"<<endl;
            cout<<"probablemente para aquellas veces que el cocinero necesita preparar un gran banquete para el dia siguiente, todo parece estar"<<endl;
            cout<<"acomodado para la altura del cocinero, implicando que solo el cocina en este lugar, ademas de eso lo que te llama la atencion"<<endl;
            cout<<"son un gran machete que descanza sobre una tabla de picar y una gran olla de cobre, la cual parece ser decorativa ya que se"<<endl;
            cout<<"encuentra colgada de la pared y tiene marcas verdes de oxido de cobre. no hay mucho más que buscar en esta habitacion"<<endl<<endl;
            cout<<"(1) ir al taller de costura"<<endl;
            cout<<"(2) ir al vestibulo"<<endl;
            cout<<"(0) salir del juego"<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno)
            {
            case 0:
                return 0;
                break;
            case 1:
                tiempo++;
                location=3;
                mapa[3][22]=' ';
                mapa[3][13]='I';
                break;
            case 2:
                tiempo++;
                location=3;
                mapa[3][22]=' ';
                mapa[8][13]='I';
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 5:
            memoria=location;
            cout<<"entras al dormitorio del cocinero, es un dormitorio bastante simple y poco decorado, ya que el cocinero solo pasa la noche"<<endl;
            cout<<"aqui de manera ocacional, sin embargo eso no lo hace un lugar sin pistas...de momento lo uico que llama tu"<<endl;
            cout<<"atencion es un pequenho mueble con una serie de cajones"<<endl<<endl;
            cout<<"(1) inspeccionar el mueble"<<endl;
            cout<<"(2) ir a la habitacion principal"<<endl;
            cout<<"(3) ir al vestibulo"<<endl;
            cout<<"(0) salir del juego"<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno)
            {
            case 0:
                return 0;
                break;
            case 1:
                tiempo++;
                location=14;
                break;
            case 2:
                tiempo++;
                location=13;
                mapa[8][4]=' ';
                mapa[3][4]='I';
                break;
            case 3:
                tiempo++;
                location=0;
                mapa[8][4]=' ';
                mapa[8][13]='I';
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 6:
            memoria=location;
            cout<<"entras al jardin, al principio lo unico que ves son una serie de herramientas, entre las cuales lo unico que sobresale"<<endl;
            cout<<"es una pequenha palita semi-afilada, conforme buscas mas encuentras una cabanhita en una esquina del jardin"<<endl<<endl;
            cout<<"(1) investigar la pequenha cabanha"<<endl;
            cout<<"(2) ir al vestibulo"<<endl;
            cout<<"(0) salir del juego"<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno)
            {
            case 0:
                return 0;
                break;
            case 1:
                tiempo++;
                location=15;
                break;
            case 2:
                tiempo++;
                location=0;
                mapa[13][22]=' ';
                mapa[8][13]='I';
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 7:
            memoria=location;
            cout<<"te acercas a la viuda, ella se queda mirandote, haciendo contacto visual por un par de segundos antes de hablar"<<endl;
            cout<<"viuda: pocas palabras eh? supongo que quieres saber cual es mi cuartada para el dia de hoy, asi que supongo que te la dire,"<<endl;
            cout<<"viuda: si hace que te vayas de mi casa más rapido"<<endl;
            cout<<"viuda: me desperte a eso de las 8am como de costumbre y comenze a arreglarme para poder salir de la casa"<<endl;
            cout<<"viuda: luego baje a desayunar a eso de las 10 am ya que el cocinero ya habia llegado"<<endl;
            cout<<"viuda: luego estuve haciendo algunas compras fuera de casa, cuando regrese..."<<endl;
            cout<<"la viuda hace una pequenha pausa como si tiutuvease"<<endl;
            cout<<"viuda: "<<verdadOMentiraViuda<<endl;
            cout<<"viuda: lo demas ya lo conoce, asi que dejame en paz"<<endl<<endl;
            cout<<"(1) interrogar a alguien mas o acusar a alguien"<<endl;
            cout<<"(2) volver al vestibulo"<<endl;
            cout<<"(0) salir del jeugo"<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno)
            {
            case 0:
                return 0;
                break;
            case 1:
                location=1;
                break;
            case 2:
                location=0;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 8:
            memoria=location;
            cout<<"te acercas al cocinero, te mira de manera silenciosa y antes de que puedes intentar preguntarle por su cuartada"<<endl;
            cout<<"solo empieza a darte las respuestas que estas buscando"<<endl;
            cout<<"cocinero: antes de llegar, a eso de las 7am fui al mercado a comprar hortalizas para la cocina"<<endl;
            cout<<"cocinero: luego llegue a la casa para preparar el desayuno"<<endl;
            cout<<"cocinero: y luego "<<verdadOMentiraCocinero<<endl;
            cout<<"cocinero: y cuando sali para limpiar la mesa... bueno el senhor Hudson ya no estaba"<<endl<<endl;
            cout<<"(1) interrogar a alguien mas o acusar a alguien"<<endl;
            cout<<"(2) volver al vestibulo"<<endl;
            cout<<"(0) salir del jeugo"<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno){
            case 0:
                return 0;
                break;
            case 1:
                location=1;
                break;
            case 2:
                location=0;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 9:
            memoria=location;
            cout<<"te acercas a la jardinera, se pone algo nerviosa pero no mucho mas de lo que ya estaba, y antes de que abras la boca"<<endl;
            cout<<"ella ya esta atropeyando sus propias palabras para contarte su historia"<<endl;
            cout<<"jardinera: llegue a trabajar en la tarde, unos minutos despues del desayuno, y empeze a cuidar del pasto del jardin"<<endl;
            cout<<"jardinera: realmente no hay mucho mas que decir... solo estuve cuidando del pasto y"<<endl;
            cout<<"jardinera: "<<verdadOMentiraJardinera<<endl;
            cout<<"jardinera: despues escuche un grito y... cuando llegue el senhor Hudson... b-bueno eso es todo lo que se"<<endl<<endl;
            cout<<"(1) interrogar a alguien mas o acusar a alguien"<<endl;
            cout<<"(2) volver al vestibulo"<<endl;
            cout<<"(0) salir del jeugo"<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno){
            case 0:
                return 0;
                break;
            case 1:
                location=1;
                break;
            case 2:
                location=0;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 10:
            memoria=location;
            cout<<"apresurandote para tener un caso que presentar a la policia una vez lleguen, reunes a todos los sospechosos en el vestibulo"<<endl;
            cout<<"y te apresuras para reuinir tu evidencia y esperar a que llegue la policia para entregar al culpable"<<endl;
            cout<<"segun tu investigacion el culpable es:"<<endl<<endl;
            cout<<"(1) la viuda"<<endl;
            cout<<"(2) el cocinero"<<endl;
            cout<<"(3) la jardinera"<<endl;
            cin>>conjeturaCulpable;
            cin.ignore(1000, '\n');
            cout<<"el acusado mato a la victima con"<<endl;
            cout<<"(1) un objeto punzo-cortante"<<endl;
            cout<<"(2) un golpe contundente"<<endl;
            cout<<"(3) un metodo de asfixia"<<endl;
            cin>>conjeturaMetodo;
            cin.ignore(1000, '\n');
            switch (conjeturaMetodo){
            case 1:
                cout<<"y el arma homicida fue"<<endl;
                cout<<"(1) un cuchillo"<<endl;
                cout<<"(2) un machete"<<endl;
                cout<<"(3) una pala de jardineria"<<endl;
                cin>>conjeturaArma;
                cin.ignore(1000, '\n');
                break;
            case 2:
                cout<<"y el arma homicida fue"<<endl;
                cout<<"(1) una maceta de plastico"<<endl;
                cout<<"(2) una olla de cobre"<<endl;
                cout<<"(3) una maceta de barro"<<endl;
                cin>>conjeturaArma;
                cin.ignore(1000, '\n');
                break;
            case 3:
                cout<<"y el arma homicida fue"<<endl;
                cout<<"(1) una cuerda"<<endl;
                cout<<"(2) veneno"<<endl;
                cout<<"(3) una cadena de hierro"<<endl;
                cin>>conjeturaArma;
                cin.ignore(1000, '\n');
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            cout<<"cuando la policia llega empiezan a buscar la casa, te acercas con el alguacil y presentas tus conjeturas sobre el asesinato"<<endl;
            if(conjeturaCulpable - culpable == 1 && conjeturaMetodo - arma == 1 && conjeturaCulpable == conjeturaArma){
                cout<<"gracias a ti y a la rapida presentacion de pruebas, la policia es capaz de arrestar al culpable antes de que pueda escapar"<<endl;
                cout<<"final bueno :)"<<endl<<"gracias por jugar"<<endl;
                getline (cin,basura);
                return 0;
            }else{
                cout<<"las conjeturas que presentas no son suficientes para lograr arrestar a ninguno de los sospechosos, a los pocos dias no se"<<endl;
                cout<<"sabe nada sobre ellos, como si se hubiesen esfumado, y debido a esto el caso del senhor Hudson queda inconcluso"<<endl;
                cout<<"final malo :("<<endl<<"gracias por jugar"<<endl;
                getline (cin,basura);
                return 0;
            }
            break;
        case 11:
            memoria=location;
            switch (arma){
            case 0:
                cout<<"empiezas a examinar las cortadas que tiene el cuerpo, poco a poco juzgando por su forma y sangrado te das cuenta de que"<<endl;
                switch (culpable){
                case 0:
                    cout<<"fueron realizadas por un arma bastante pequenha pero afilada"<<endl;
                    break;
                case 1:
                    cout<<"fueron realizadas por un arma bastante grande y afilada"<<endl;
                    break;
                case 2:
                    cout<<"fueron realizadas por un arma poco afilada"<<endl;
                    break;
                default:
                    break;
                }
                break;
            case 1:
                cout<<"empiezas a examinar los moretones presentes en el cadaver, poco a poco juzgando por su forma y las marcas en la piel"<<endl;
                cout<<"te das cuenta de que fueron realizadas por "<<endl;
                switch (culpable){
                case 0:
                    cout<<"un objeto de plastico macizo y algo manchado de tierra"<<endl;
                    break;
                case 1:
                    cout<<"un objeto grande y metalico, que ah dejado marcas verdozas, probablemente debido a algun tipo de oxido"<<endl;
                    break;
                case 2:
                    cout<<"un objeto duro y hecho de alguna especie de barro o ceramica"<<endl;
                    break;
                default:
                    break;
                }
                break;
            case 2:
                cout<<"empiezas a examinar la boca y cuello de la victima y poco a poco te vas dando cuenta de que"<<endl;
                switch (culpable){
                case 0:
                    cout<<"las marcas en la cara de la victima indican que fue sofocado por un objeto parecido a una almohada"<<endl;
                    break;
                case 1:
                    cout<<"la falta de marcas en el cuello del cadaver y las marcas en su boca parecen implicar que fue envenenado"<<endl;
                    break;
                case 2:
                    cout<<"las marcas alrededor del cuello del cuerpo muestran que fue estrangulado por unas manos o guantes muy grandes"<<endl;
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
            cout<<endl;
            cout<<"(1) volver al vestibulo"<<endl;
            cout<<"(0) salir del juego"<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno){
            case 0:
                return 0;
                break;
            case 1:
                location=0;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 12:
            memoria=location;
            cout<<"empiezas a abrir los cajones de la pequenha comoda, encuentras telas, hilos agujas y un pequenho cuchillo ornamentado"<<endl;
            cout<<"el cual no parece estar destinado a la costura, quien sabe para que lo tendra la senhora Hudson"<<endl<<endl;
            cout<<"(1) volver al taller de costura"<<endl;
            cout<<"(0) salir del juego"<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno){
            case 0:
                return 0;
                break;
            case 1:
                location=3;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 13:
            memoria=location;
            cout<<"entras a la habitacion principal, parece que aqui es donde dormian la senhora y senhor Hudson, todo está muy pulcro,"<<endl;
            cout<<"seguramente debido a la criada de la casa. lo unico que realmente logra captar tu atencion en una gran y pesada maceta"<<endl;
            cout<<"de plastico que dentro tiene bastante tierra y un pequenho cactus floreciente dentro"<<endl<<endl;
            cout<<"(1) ir al taller de costura"<<endl;
            cout<<"(2) ir al dormitorio del cocinero"<<endl;
            cout<<"(0) salir del juego"<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno){
            case 0:
                return 0;
                break;
            case 1:
                tiempo ++;
                location = 3;
                mapa[3][4]=' ';
                mapa[3][13]='I';
                break;
            case 2:
                tiempo ++;
                location = 5;
                mapa[3][4]=' ';
                mapa[8][4]='I';
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 14:
            memoria=location;
            cout<<"te acercas al pequenho mueble y empiezas a abrir los cajones, la mayoria de ellos estan vacios, a excepcion de uno el cual"<<endl;
            cout<<"contiene una pequenha botella de liquido morado, cuando destapas la botellita huele a algo parecido a almendras."<<endl;
            cout<<"veneno, piensas para tus adentros, ni idea de por que el cocinero tendria esto aqui"<<endl<<endl;
            cout<<"(1) regresar al dormitorio del cocinero"<<endl;
            cout<<"(0) salir del juego"<<endl;            
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno){
            case 0:
                return 0;
                break;
            case 1:
                location=5;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 15:
            memoria=location;
            cout<<"entras en la cabanhita del jardin, dentro hay lo que esperarias, bolsas de tierra y fertilizante, una podadora, y unas cubetas"<<endl;
            cout<<"sin embargo tras buscar un poco más encuentras dos cosas que te parece extranho esten guardadas aqui, un par de guantes de"<<endl;
            cout<<"jardineria, muy grandes para las manos de la jardinera, pero no parece que eso la detenga de usarlos. ademas encuentras "<<endl;
            cout<<"una serie de pesadas macetas de barro, ni idea de por que estos objetos estan escondidos aqui"<<endl;
            cout<<"(1) regresar al jardin"<<endl;
            cout<<"(0) salir del juego"<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno){
            case 0:
                return 0;
                break;
            case 1:
                location=6;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
        case 16:
            cout<<"a pesar de tus  mejores esfuerzos no logras formar ninguna conjetura antes de que la policia llegue a la casa."<<endl;
            cout<<"sin tu ayuda la policia tarda demasiado antes de poder determinar a un culpable y para el tiempo al que llegan a una"<<endl;
            cout<<"hipotesis los sospechosos han desaparecido como si fuesen humo"<<endl;
            cout<<"te quedaste sin tiempo"<<endl<<"final malo"<<endl<<"gracias por jugar"<<endl;
            getline (cin,basura);
            return 0;
            break;
        default:
            cout<<"oopsie algo salio mal, regresandote :)"<<endl;
            location=memoria;
            break;  
        }

    } while (continuar == true);
    
return 0;
}

/*       
        case :
            memoria=location;
            cout<<"dialogo lugar"<<endl;
            cout<<opciones lugar<<endl;
            cin>>lugarInterno;
            cin.ignore(1000, '\n');
            switch (lugarInterno)
            {
            case 0:
                return 0;
                break;
            
            default:
                cout<<"opcion invalida"<<endl;
                location=memoria;
                break;
            }
            break;
            */