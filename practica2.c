
// Practica 2 en c

#include <stdio.h>

//ARREGLOS 

//ejercicio 8

void ej8(){
    int arreglo[100];

    for(int i=0; i<=100;i++){
        arreglo[i] = i;
        printf("%d ", arreglo[i]);

    }
}

void ej9(){
int arreglo[51];

    int j=0;
    for(int i=200;i>=100; i-= 2){
        arreglo[j]=i;
        printf("pos[%d]= %d\n", j,arreglo[j]);
        j++;
        }
}
/*
void ej10(){
    int arreglo[51];
    for(int i=0; i<=51; i-=3){
        printf("%d ", arreglo[i]);
    }
}
*/

#include <stdio.h>

int eliminarDuplicados(int arreglos[], int longitud) {
    if (longitud == 0) return 0;

    int nueva_longitud = 0; // Índice para ir guardando los elementos únicos

    for (int i = 0; i < longitud; i++) {
        int duplicado = 0;

        // Verificamos si arreglos[i] ya existe en la porción única guardada
        for (int j = 0; j < nueva_longitud; j++) {
            if (arreglos[i] == arreglos[j]) {
                duplicado = 1; // Ya lo habíamos guardado antes
                break;
            }
        }

        // Si no era duplicado, lo guardamos en la posición 'nueva_longitud'
        if (!duplicado) {
            arreglos[nueva_longitud] = arreglos[i];
            nueva_longitud++;
        }
    }

    return nueva_longitud; // Devolvemos el nuevo tamaño del arreglo
}

int main() {
    int array[5] = {9, 9, 5, 1, 2};

    int nuevo_tamano = eliminarDuplicados(array, 5);

    printf("Nuevo tamano: %d\n", nuevo_tamano);
    printf("Arreglo sin duplicados: ");
    for (int i = 0; i < nuevo_tamano; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

