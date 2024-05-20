#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    int jugador, computadora;
    int victorias = 0, derrotas = 0, empates = 0;
    bool jugar = true;

    cout << "Bienvenido al juego de Piedra, Papel y Tijera!" << endl;
    cout << "Para jugar, introduce 1 para Piedra, 2 para Papel, 3 para Tijera o 0 para salir." << endl;

    while (jugar) {
        cout << "Elige tu jugada (1 = Piedra, 2 = Papel, 3 = Tijera, 0 = Salir): ";
        cin >> jugador;

        if (jugador == 0) {
            jugar = false;
            cout << "Gracias por jugar. Aqui están tus estadisticas:" << endl;
            cout << "Victorias: " << victorias << ", Derrotas: " << derrotas << ", Empates: " << empates << endl;
            break;
        }

        if (jugador < 1 || jugador > 3) {
            cout << "Numero invalido. Intentalo de nuevo." << endl;
            continue;
        }

        computadora = rand() % 3 + 1;

        cout << "Jugador eligio: ";
        switch (jugador) {
            case 1:
                cout << "Piedra";
                break;
            case 2:
                cout << "Papel";
                break;
            case 3:
                cout << "Tijera";
                break;
        }
        cout << ", Computadora eligio: ";
        switch (computadora) {
            case 1:
                cout << "Piedra";
                break;
            case 2:
                cout << "Papel";
                break;
            case 3:
                cout << "Tijera";
                break;
        }
        cout << endl;

        if (jugador == computadora) {
            cout << "Empate!" << endl;
            empates++;
        } else if ((jugador == 1 && computadora == 3) ||
                   (jugador == 2 && computadora == 1) ||
                   (jugador == 3 && computadora == 2)) {
            cout << "Ganaste!" << endl;
            victorias++;
        } else {
            cout << "Perdiste!" << endl;
            derrotas++;
        }
    }

    return 0;
}
