#include <assert.h>
#include <stdio.h>

#define CANTIDAD 12
float horas_promedio(float horario[], int cantidad){
    float sum = 0;
    for(int i = 0; i< cantidad; i++){
        sum += horario[i];
    }   
    return sum / cantidad;
}

int mal_dormidos(float horario[],int cantidad,float promedio,int durmieron_mal[]){
    int acum = 0;
    for(int i=0; i<cantidad; i++){
        if(horario[i]< promedio ){
            durmieron_mal[acum] = i;
            acum++;
        }
    }
    return acum;
    return durmieron_mal[cantidad];
}



int main(){

    float h_dormir[CANTIDAD] = 
    {6.5, 7.0 , 5.5, 8.0, 6.8, 7.5,
         4.5, 9.1, 5.0, 6.8, 7.3, 9.1};

    int durmieron_mal[CANTIDAD];

    printf("%.2f\n", horas_promedio(h_dormir, CANTIDAD)); // el prom es 6.93

    // assert(horas_promedio(h_dormir,CANTIDAD)== 6.93);

    float prom = horas_promedio(h_dormir, CANTIDAD);

    printf("%d\n", mal_dormidos(h_dormir, CANTIDAD, prom, durmieron_mal));
    printf("%d \n", durmieron_mal[CANTIDAD]);
    return 0;
}
 

 

