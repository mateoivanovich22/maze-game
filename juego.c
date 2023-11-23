#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FILAS 20
#define COLUMNAS 20

typedef struct personaje {
    int vidas;
    int posicionX;
    int posicionY;
    int movimientos;
    int nivel;
} personaje_t;

void limpiarPantalla() {
    printf("\033[H\033[J");
}

void cargarLaberintoEnMatriz(char (*lab)[FILAS][COLUMNAS], int nivel) {

    if( nivel == 1 ){
        char laberinto[FILAS][COLUMNAS] = {
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
            {'#','P','.','#','.','.','.','#','.','.','.','#','.','.','.','#','.','#','.','#'},
            {'#','#','.','#','#','#','.','#','#','#','.','#','#','#','.','#','.','#','.','#'},
            {'#','.','.','.','.','#','.','.','.','#','.','.','.','#','.','#','.','#','.','#'},
            {'#','#','#','#','.','#','#','#','#','#','#','#','.','#','#','#','.','#','.','#'},
            {'#','.','.','#','.','#','.','.','.','.','.','#','.','#','.','.','.','#','.','#'},
            {'#','#','.','#','.','#','#','#','#','#','#','#','.','#','#','#','#','#','.','#'},
            {'#','#','.','#','.','#','.','.','.','.','.','.','.','.','.','#','.','#','.','#'},
            {'#','#','.','#','.','#','#','#','#','#','#','#','#','#','.','#','.','#','.','#'},
            {'#','#','.','#','.','#','.','#','.','.','.','.','.','#','.','#','.','#','.','#'},
            {'#','#','.','#','.','#','.','#','#','#','#','#','#','#','#','#','.','#','.','#'},
            {'#','#','.','#','.','#','.','#','.','.','.','.','.','.','.','.','.','#','.','#'},
            {'#','#','.','#','.','#','.','#','#','#','#','#','#','#','#','#','#','#','.','#'},
            {'#','#','.','#','.','#','.','.','.','.','.','.','.','.','.','.','.','.','.','#'},
            {'#','#','.','#','.','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
            {'#','#','.','#','.','#','.','.','.','.','.','.','.','.','.','.','.','.','.','#'},
            {'#','#','.','#','.','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
            {'#','#','.','#','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','#'},
            {'#','#','.','.','#','#','#','#','.','#','#','#','#','.','#','#','#','#','W','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
        };

        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                (*lab)[i][j] = laberinto[i][j];
            }
        }
    }else if (nivel == 2){
        char laberinto[FILAS][COLUMNAS] = {
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
            {'#','P','.','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
            {'#','#','.','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
            {'#','.','.','.','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
            {'#','#','#','.','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
            {'#','#','#','.','.','.','.','.','#','#','#','#','#','#','#','#','#','#','#','#'},
            {'#','#','#','#','#','#','#','.','#','#','#','#','#','#','#','#','#','#','#','#'},
            {'#','#','#','#','#','#','#','.','.','.','.','.','.','.','.','.','.','#','#','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','.','.','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','W','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
        };

        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                (*lab)[i][j] = laberinto[i][j];
            }
        }
    }else{

        char laberinto[FILAS][COLUMNAS] = {
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
            {'#','P','#','#','.','.','.','.','#','.','#','.','.','.','.','.','.','.','.','#'},
            {'#','.','.','#','.','#','#','.','#','.','#','#','#','#','#','.','#','#','.','#'},
            {'#','#','.','#','.','.','#','.','.','.','#','.','.','.','.','#','#','.','.','#'},
            {'#','.','.','#','.','#','#','#','#','.','#','.','#','#','.','#','#','#','.','#'},
            {'#','.','#','#','.','.','.','.','#','.','#','.','#','.','.','.','#','#','.','#'},
            {'#','.','#','#','#','#','#','#','#','#','#','.','#','#','#','#','#','#','.','#'},
            {'#','.','.','.','.','.','#','.','.','.','#','.','.','.','#','#','#','#','.','#'},
            {'#','#','#','#','#','.','#','#','#','#','#','#','#','.','#','#','#','#','.','#'},
            {'#','.','.','.','.','.','.','.','.','.','.','.','.','.','#','#','#','#','.','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#','#','.','#'},
            {'#','.','.','.','.','.','#','#','#','#','#','#','#','.','.','.','.','.','.','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#'},
            {'#','.','.','.','.','.','.','#','#','#','#','#','#','#','#','#','#','.','#','#'},
            {'#','.','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#'},
            {'#','.','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#'},
            {'#','.','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#'},
            {'#','.','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#'},
            {'#','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','W','#'},
            {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
        };

        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                (*lab)[i][j] = laberinto[i][j];
            }
        }
    }

}

void cargarMatriz(char (*matriz)[FILAS][COLUMNAS], personaje_t personaje) {

    cargarLaberintoEnMatriz(matriz, personaje.nivel);

}

void imprimirCampo(char matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf(" %c ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void inicializarPersonaje(personaje_t *personaje) {
    personaje->vidas = 3;
    personaje->movimientos = 70;

    personaje->posicionX = 1;
    personaje->posicionY = 1;
    (*personaje).nivel = 1;
}

bool estadoJuego(personaje_t *personaje, char (*matriz)[FILAS][COLUMNAS]) {

    bool juegoGanador = true;

    if((*personaje).vidas == 0){
        printf("No has podido pasar el juego \n");
        juegoGanador = false;
    }

    if((*personaje).movimientos == 0 && (*personaje).vidas != 0){
        printf("No has podido pasar el laberinto \n");
        (*personaje).vidas -= 1;
        (*personaje).movimientos = 50 ;
        (*personaje).posicionX = 1;
        (*personaje).posicionY = 1;
        printf("Te quedan %d intentos \n", (*personaje).vidas);
        cargarMatriz(matriz, (*personaje));
        imprimirCampo((*matriz));
    }

    if((*personaje).posicionX == 18 && (*personaje).posicionY == 18 && (*personaje).nivel != 4){
        printf("Nivel de laberinto %d pasado correctamente\n", (*personaje).nivel);
        (*personaje).nivel += 1;
        (*personaje).movimientos = 50 ;
        (*personaje).posicionX = 1;
        (*personaje).posicionY = 1;

        cargarMatriz(matriz, (*personaje));
        imprimirCampo((*matriz));
    }

    if((*personaje).nivel == 4){
        printf("Laberinto GANDADO correctamente\n");
        juegoGanador = false;
    }

    return juegoGanador;
}

bool movimientoCorrecto (int movimientoX, int movimientoY, char matriz[FILAS][COLUMNAS]){
    if(movimientoX == 0 || movimientoY == 0 || matriz[movimientoX][movimientoY] == '#' || movimientoX == 19 || movimientoY == 19){
        printf("Movimiento incorrecto\n");
        return false;
    }

    printf("Movimiento correcto\n");

    return true;
}

void movimientos(char (*matriz)[FILAS][COLUMNAS], personaje_t *personaje){

    char movimiento = ' ';
    printf("Ingrese su movimiento con A W D S\n");
    scanf(" %c", &movimiento);

    int posicionNuevaX = personaje->posicionX;
    int posicionNuevaY = personaje->posicionY;

    switch (movimiento) {
        case 'a':
            posicionNuevaY -= 1;
            break;
        case 'w':
            posicionNuevaX -= 1;
            break;
        case 'd':
            posicionNuevaY += 1;
            break;
        case 's':
            posicionNuevaX += 1;
            break;
        default:
            printf("Movimiento no reconocido.\n");
            posicionNuevaY = 0;
            posicionNuevaX = 0;
            break;
        } 

    while(!movimientoCorrecto( posicionNuevaX, posicionNuevaY , *matriz)){
        posicionNuevaX = personaje->posicionX;
        posicionNuevaY = personaje->posicionY;
        printf("\nNo podes realizar ese movimiento\n");
        printf("Ingrese su movimiento con A W D S\n");
        scanf(" %c", &movimiento);

        switch (movimiento) {
            case 'a':
                posicionNuevaY -= 1;
                break;
            case 'w':
                posicionNuevaX -= 1;
                break;
            case 'd':
                posicionNuevaY += 1;
                break;
            case 's':
                posicionNuevaX += 1;
                break;
            default:
                printf("Movimiento no reconocido.\n");
                posicionNuevaY = 0;
                posicionNuevaX = 0;
                break;
        } 
    }

    personaje->movimientos -= 1;
    printf("Movimientos %d\n", personaje->movimientos);
    printf("Vidas %d\n", personaje->vidas);
    (*matriz)[personaje->posicionX][personaje->posicionY] = '.';
    personaje->posicionX = posicionNuevaX;
    personaje->posicionY = posicionNuevaY;
    (*matriz)[personaje->posicionX][personaje->posicionY] = 'P';

}

int main() {
    personaje_t character_mateo;
    char matriz[FILAS][COLUMNAS];

    limpiarPantalla();
    printf("Bienvenido al juego del laberinto\n\n");
    printf("Presiona cualquier tecla para comenzar...\n\n");

    getchar();
    
    limpiarPantalla();

    inicializarPersonaje(&character_mateo);
    cargarMatriz(&matriz, character_mateo);

    imprimirCampo(matriz);
    
    while (estadoJuego(&character_mateo, &matriz)) {
        movimientos(&matriz, &character_mateo);
        limpiarPantalla();
        imprimirCampo(matriz);
    }

    return 0;
}
