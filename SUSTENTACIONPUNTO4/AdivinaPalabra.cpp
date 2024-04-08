#include <iostream> 
#include <string> 

using namespace std;

// Clase ejecución del punto 4 


class Ejecutable(){

    class AdivinaPalabra(){

        //Menu para simulacion de juego 
        int juegoDecididoPorElUsuario;

        // Interaccion con el usuario para jugar 
        cout << "Elige el número de juego que quieres jugar" << endl; 
        cout << "1. Adivina la palabra" << endl; 
        cout << "2. Adivina el animal" << endl;
        cout << "3. Adivina la profesion" << endl;
        cin >> juegoDecididoPorElUsuario;

        // Se crea la lista de los videojuegos creados
        list<string> listaDeJuegos = {"Adivina la palabra", "Adivina el animal", "Adivina la profesion"};
        unordered_map<string, int> mapaVideojuegos;

        // Creación de la lista de favoritos 
        string AdivinaPalabra::listaDeFavoritos(){

        // Atributos necesarios para crear la lista de favoritos 
        int eleccionDelJugador;
        int decisionFavoritos;

        // Se asginan valores a cada string para que se elija un número en cada juego 
        int valor = 1;
        for (const auto& videojuego : listaDeJuegos) {
            mapaVideojuegos[videojuego] = valor++;
        }

        // Interacción con el usuario que le permite elegir el juego que desea agrgar a la lista de favoritos
            cout << "Escoge el numero de tu juego favorito \n" << endl;
            cout << "1. Adivina la palabra \n" << endl;
            cout << "2. Adivina el animal \n" << endl;
            cout << "3. Adivina la profesion \n" << endl;

            list<string> listaVideojuegos = {"Adivina la palabra", "Adivina el animal", "Adivina la profesion"};
            unordered_map<string, int> mapaVideojuegos;
            
            // Se asignan valores a cada juego para la eleccion del usuario
                int valor = 1;
                for (const auto& videojuego : listaVideojuegos) {
                    mapaVideojuegos[videojuego] = valor++;
                }
                    cout << "A continuacion indique el nombre de su juego favorito " << endl;
                    cout << "1. Adivina la palabra" << endl;
                    cout << "2. Adivina el animal" << endl;
                    cout << "3. Adivina la profesion" << endl;
                    cin >> decisionFavoritos;
            
                list<string> juegosFavoritos ={};
            
                juegosFavoritos.push_back(decisionFavoritos);
            
                cout << "Su nueva coleecion es " << juegosFavoritos << endl;
                }
            }

            // Creacion de la lista de posición de menos favoritos
            string AdivinaPalabra::listaDeMenosFavorito(){

            // Atributos necesario para la lista de posicion de juegos 
            int eleccionDelJugador;
            int decisionMenosFav;

            // Se asginan valores a cada string para que se elija un número en cada juego 
            int valor = 1;
            for (const auto& videojuego : listaDeJuegos) {
                mapaVideojuegos[videojuego] = valor++;
            }

            // Interacción con el usuario que le permite elegir el juego que desea agrgar a la lista de menos favoritos
                cout << "Elige el juego menos gustado: \n" << endl;
                cout << "1. Adivina la palabra \n" << endl;
                cout << "2. Adivina el animal \n" << endl;
                cout << "3. Adivina la profesion \n" << endl;

                list<string> listaVideojuegos = {"Adivina la palabra", "Adivina el animal", "Adivina la profesion"};
                unordered_map<string, int> mapaVideojuegos;
                
            // Se asignan valores a cada juego para la eleccion del usuario
                int valor = 1;
                for (const auto& videojuego : listaVideojuegos) {
                    mapaVideojuegos[videojuego] = valor++;
                }
                    cout << "A continuacion indique el nombre de su juego favorito " << endl;
                    cout << "1. Adivina la palabra" << endl;
                    cout << "2. Adivina el animal" << endl;
                    cout << "3. Adivina la profesion" << endl;
                    cin >> eleccionDelJugador;
                
                list<string> juegosMenosFavoritos ={};
                
                juegosMenosFavoritos.push_back(eleccionDelJugador);
                
                cout << "Su nueva coleecion es " << juegosMenosFavoritos << endl;
                }



            // Creacion de la lista de posición normal
            string AdivinaPalabra::listaJuegoIntermedio(){

            // Atributos necesario para la lista de posicion de juegos 
            int opcionJugador;
            int decisionJuegoIntermedio;

            // Se asginan valores a cada string para que se elija un número en cada juego 
            int valor = 1;
            for (const auto& videojuego : listaDeJuegos) {
                mapaVideojuegos[videojuego] = valor++;
            }

            // Interacción con el usuario que le permite elegir el juego que desea agrgar a la lista de menos favoritos
                cout << "Elige el juego intermedio: \n" << endl;
                cout << "1. Adivina la palabra \n" << endl;
                cout << "2. Adivina el animal \n" << endl;
                cout << "3. Adivina la profesion \n" << endl;

                list<string> listaVideojuegos = {"Adivina la palabra", "Adivina el animal", "Adivina la profesion"};
                unordered_map<string, int> mapaVideojuegos;
                
            // Se asignan valores a cada juego para la eleccion del usuario
                int valor = 1;
                for (const auto& videojuego : listaVideojuegos) {
                    mapaVideojuegos[videojuego] = valor++;
                }
                    cout << "A continuacion indique el nombre de su juego intermedio: \n" << endl;
                    cout << "1. Adivina la palabra" << endl;
                    cout << "2. Adivina el animal" << endl;
                    cout << "3. Adivina la profesion" << endl;
                    cin >> opcionJugador;
                
                list<string> juegosIntermedios ={};
                
                juegosIntermedio.push_back(opcionJugador);
                
                cout << "Su nueva coleecion es " << juegosIntermedio << endl;
                }
    return 0;
};
    

