
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

void ej10(){
    int arreglo[51];
    for(int i=0; i<=51; i-=3){
        printf("%d ", arreglo[i]);
    }
}

int main(){
    //ej8();
    //ej9();
    ej10();
    return 0;
}